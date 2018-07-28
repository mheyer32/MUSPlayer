CC=m68k-amigaos-gcc
PHXASS=vasmm68k_mot

PREFIX = $(shell ./getprefix.sh "$(CC)")

#-noixemul
#-fbaserel
#-mcrt=clib2
#-mcrt=nix13
#-msmall-code
#-Wa,-adhln
#-mregparm=4
#-v   #verbose
#-fstrength-reduce

CLIB_CFLAGS = -mcrt=clib2 -DUSECLIB2 -mregparm=4
CLIB_LDFLAGS =

NOIXEMUL_CFLAGS = -noixemul -DUSENOIXEMUL -mregparm=4
NOIXEMUL_LDFLAGS =

USEIXEMUL ?= 1

ifeq ($(USEIXEMUL), 1)
RUNTIME_CFLAGS = $(NOIXEMUL_CFLAGS)
RUNTIME_LDFLAGS = $(NOIXEMUL_LDFLAGS)
else
	RUNTIME_CFLAGS = $(CLIB_CFLAGS)
	RUNTIME_LDFLAGS = $(CLIB_LDFLAGS)
endif

#-fbbb=abcefimprs
#-fbbb=
#-fbbb=Enable Bebbo's optimizations.
# +    enable all optimizations
# a   commute add move instructions
# b    use register for base addresses
# c    convert load const and compare into a sub
# e    eliminate dead assignments + redundant loads
# f	   shrink stack frame
# i    use post increment on addresses
# m    merge add and move statements
# p    propagate move assignment pairs out of loops
# r    register renaming to maybe save registers
# s    a strcpy optimization
# v    be verbose
# V    be very verbose
# x    dump insns
# Default: -fbbb=+ which yields -fbbb=abcefimprs

#-v -fbbb=Vabcefimprs

#
CFLAGS = $(RUNTIME_CFLAGS)
CFLAGS += -fbaserel -m68030 -m68881 -msmall-code
CFLAGS += -Ofast -fstrength-reduce -fomit-frame-pointer
CFLAGS += -Werror -Wimplicit -Wstrict-prototypes
CFLAGS += -Icamd-37.1/development/include

LDFLAGS = $(RUNTIME_LDFLAGS)

PFLAGS = -Fhunk -phxass -nosym -ldots -m68030 -m68882
PFLAGS += -I$(PREFIX)/m68k-amigaos/ndk-include
PFLAGS += -I$(PREFIX)/m68k-amigaos/ndk/include

INTERMEDIATE =$(CURDIR)/build/
OUT = $(CURDIR)/bin/

# not too sophisticated dependency
OBJS = \
		main.c
OUTOBJS = $(addprefix $(INTERMEDIATE), $(OBJS))

#$(info $(OBJS))

all:	 MUSPlayer

clean:
	rm *.o

MUSPlayer: camd.h $(OBJS) Makefile
	$(CC) $(CFLAGS) $(OBJS)  \
	$(LDFLAGS) -o $(OUT)MUSPlayer.exe

camd.h: camd-37.1/development/fd/camd_lib.fd Makefile
	fd2pragma --infile camd-37.1/development/fd/camd_lib.fd --clib camd-37.1/development/include/clib/camd_protos.h --externc --special 47


#############################################################
#
#############################################################
