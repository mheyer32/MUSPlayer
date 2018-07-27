#ifndef PROTO_CAMD_H
#define PROTO_CAMD_H

/*
**	$Id$
**	Includes Release 50.1
**
**	Prototype/inline/pragma header file combo
**
**	(C) Copyright 2003 Amiga, Inc.
**	    All Rights Reserved
*/

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef MIDI_CAMD_H
#include <midi/camd.h>
#endif

/****************************************************************************/

#ifndef __NOLIBBASE__
extern struct Library * CamdBase;
#endif /* __NOLIBBASE__ */

/****************************************************************************/

#ifdef __amigaos4__
 #ifdef __USE_INLINE__
  #include <inline4/camd.h>
 #endif /* __USE_INLINE__ */

 #include <interfaces/camd.h>

 #ifndef __NOGLOBALIFACE__
  extern struct CamdIFace *ICamd;
 #endif /* __NOGLOBALIFACE__ */
#else /* __amigaos4__ */
 #if defined(__GNUC__)
  #include <inline/camd.h>
 #elif defined(__VBCC__)
  #ifndef __PPC__
   #include <inline/camd_protos.h>
  #endif /* __PPC__ */
 #else
  #include <pragmas/camd_pragmas.h>
 #endif /* __GNUC__ */
#endif /* __amigaos4__ */

/****************************************************************************/

#endif /* PROTO_CAMD_H */
