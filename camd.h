#ifndef _INLINE_CAMD_H
#define _INLINE_CAMD_H

#ifndef CLIB_CAMD_PROTOS_H
#define CLIB_CAMD_PROTOS_H
#endif

#ifndef  EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef  MIDI_CAMD_H
#include <midi/camd.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifndef CAMD_BASE_NAME
#define CAMD_BASE_NAME CamdBase
#endif

#define LockCAMD(locktype) ({ \
  ULONG _LockCAMD_locktype = (locktype); \
  ({ \
  register char * _LockCAMD__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((APTR (*)(char * __asm("a6"), ULONG __asm("d0"))) \
  (_LockCAMD__bn - 30))(_LockCAMD__bn, _LockCAMD_locktype); \
});})

#define UnlockCAMD(lock) ({ \
  APTR _UnlockCAMD_lock = (lock); \
  ({ \
  register char * _UnlockCAMD__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((void (*)(char * __asm("a6"), APTR __asm("a0"))) \
  (_UnlockCAMD__bn - 36))(_UnlockCAMD__bn, _UnlockCAMD_lock); \
});})

#define CreateMidiA(tags) ({ \
  struct TagItem * _CreateMidiA_tags = (tags); \
  ({ \
  register char * _CreateMidiA__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((struct MidiNode * (*)(char * __asm("a6"), struct TagItem * __asm("a0"))) \
  (_CreateMidiA__bn - 42))(_CreateMidiA__bn, _CreateMidiA_tags); \
});})

#ifndef NO_INLINE_STDARG
static __inline__ struct MidiNode * ___CreateMidi(struct Library * CamdBase, Tag tags, ...)
{
  return CreateMidiA((struct TagItem *) &tags);
}

#define CreateMidi(tags...) ___CreateMidi(CAMD_BASE_NAME, tags)
#endif

#define DeleteMidi(mi) ({ \
  struct MidiNode * _DeleteMidi_mi = (mi); \
  ({ \
  register char * _DeleteMidi__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((void (*)(char * __asm("a6"), struct MidiNode * __asm("a0"))) \
  (_DeleteMidi__bn - 48))(_DeleteMidi__bn, _DeleteMidi_mi); \
});})

#define SetMidiAttrsA(mi, tags) ({ \
  struct MidiNode * _SetMidiAttrsA_mi = (mi); \
  struct TagItem * _SetMidiAttrsA_tags = (tags); \
  ({ \
  register char * _SetMidiAttrsA__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((BOOL (*)(char * __asm("a6"), struct MidiNode * __asm("a0"), struct TagItem * __asm("a1"))) \
  (_SetMidiAttrsA__bn - 54))(_SetMidiAttrsA__bn, _SetMidiAttrsA_mi, _SetMidiAttrsA_tags); \
});})

#ifndef NO_INLINE_STDARG
static __inline__ BOOL ___SetMidiAttrs(struct Library * CamdBase, struct MidiNode * mi, Tag tags, ...)
{
  return SetMidiAttrsA(mi, (struct TagItem *) &tags);
}

#define SetMidiAttrs(mi...) ___SetMidiAttrs(CAMD_BASE_NAME, mi)
#endif

#define GetMidiAttrsA(mi, tags) ({ \
  struct MidiNode * _GetMidiAttrsA_mi = (mi); \
  struct TagItem * _GetMidiAttrsA_tags = (tags); \
  ({ \
  register char * _GetMidiAttrsA__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((ULONG (*)(char * __asm("a6"), struct MidiNode * __asm("a0"), struct TagItem * __asm("a1"))) \
  (_GetMidiAttrsA__bn - 60))(_GetMidiAttrsA__bn, _GetMidiAttrsA_mi, _GetMidiAttrsA_tags); \
});})

#ifndef NO_INLINE_STDARG
static __inline__ ULONG ___GetMidiAttrs(struct Library * CamdBase, struct MidiNode * mi, Tag tags, ...)
{
  return GetMidiAttrsA(mi, (struct TagItem *) &tags);
}

#define GetMidiAttrs(mi...) ___GetMidiAttrs(CAMD_BASE_NAME, mi)
#endif

#define NextMidi(mi) ({ \
  struct MidiNode * _NextMidi_mi = (mi); \
  ({ \
  register char * _NextMidi__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((struct MidiNode * (*)(char * __asm("a6"), struct MidiNode * __asm("a0"))) \
  (_NextMidi__bn - 66))(_NextMidi__bn, _NextMidi_mi); \
});})

#define FindMidi(name) ({ \
  STRPTR _FindMidi_name = (name); \
  ({ \
  register char * _FindMidi__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((struct MidiNode * (*)(char * __asm("a6"), STRPTR __asm("a1"))) \
  (_FindMidi__bn - 72))(_FindMidi__bn, _FindMidi_name); \
});})

#define FlushMidi(mi) ({ \
  struct MidiNode * _FlushMidi_mi = (mi); \
  ({ \
  register char * _FlushMidi__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((void (*)(char * __asm("a6"), struct MidiNode * __asm("a0"))) \
  (_FlushMidi__bn - 78))(_FlushMidi__bn, _FlushMidi_mi); \
});})

#define AddMidiLinkA(mi, type, tags) ({ \
  struct MidiNode * _AddMidiLinkA_mi = (mi); \
  LONG _AddMidiLinkA_type = (type); \
  struct TagItem * _AddMidiLinkA_tags = (tags); \
  ({ \
  register char * _AddMidiLinkA__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((struct MidiLink * (*)(char * __asm("a6"), struct MidiNode * __asm("a0"), LONG __asm("d0"), struct TagItem * __asm("a1"))) \
  (_AddMidiLinkA__bn - 84))(_AddMidiLinkA__bn, _AddMidiLinkA_mi, _AddMidiLinkA_type, _AddMidiLinkA_tags); \
});})

#ifndef NO_INLINE_STDARG
static __inline__ struct MidiLink * ___AddMidiLink(struct Library * CamdBase, struct MidiNode * mi, LONG type, Tag tags, ...)
{
  return AddMidiLinkA(mi, type, (struct TagItem *) &tags);
}

#define AddMidiLink(mi, type...) ___AddMidiLink(CAMD_BASE_NAME, mi, type)
#endif

#define RemoveMidiLink(ml) ({ \
  struct MidiLink * _RemoveMidiLink_ml = (ml); \
  ({ \
  register char * _RemoveMidiLink__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((void (*)(char * __asm("a6"), struct MidiLink * __asm("a0"))) \
  (_RemoveMidiLink__bn - 90))(_RemoveMidiLink__bn, _RemoveMidiLink_ml); \
});})

#define SetMidiLinkAttrsA(ml, tags) ({ \
  struct MidiLink * _SetMidiLinkAttrsA_ml = (ml); \
  struct TagItem * _SetMidiLinkAttrsA_tags = (tags); \
  ({ \
  register char * _SetMidiLinkAttrsA__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((BOOL (*)(char * __asm("a6"), struct MidiLink * __asm("a0"), struct TagItem * __asm("a1"))) \
  (_SetMidiLinkAttrsA__bn - 96))(_SetMidiLinkAttrsA__bn, _SetMidiLinkAttrsA_ml, _SetMidiLinkAttrsA_tags); \
});})

#ifndef NO_INLINE_STDARG
static __inline__ BOOL ___SetMidiLinkAttrs(struct Library * CamdBase, struct MidiLink * ml, Tag tags, ...)
{
  return SetMidiLinkAttrsA(ml, (struct TagItem *) &tags);
}

#define SetMidiLinkAttrs(ml...) ___SetMidiLinkAttrs(CAMD_BASE_NAME, ml)
#endif

#define GetMidiLinkAttrsA(ml, tags) ({ \
  struct MidiLink * _GetMidiLinkAttrsA_ml = (ml); \
  struct TagItem * _GetMidiLinkAttrsA_tags = (tags); \
  ({ \
  register char * _GetMidiLinkAttrsA__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((ULONG (*)(char * __asm("a6"), struct MidiLink * __asm("a0"), struct TagItem * __asm("a1"))) \
  (_GetMidiLinkAttrsA__bn - 102))(_GetMidiLinkAttrsA__bn, _GetMidiLinkAttrsA_ml, _GetMidiLinkAttrsA_tags); \
});})

#ifndef NO_INLINE_STDARG
static __inline__ ULONG ___GetMidiLinkAttrs(struct Library * CamdBase, struct MidiLink * ml, Tag tags, ...)
{
  return GetMidiLinkAttrsA(ml, (struct TagItem *) &tags);
}

#define GetMidiLinkAttrs(ml...) ___GetMidiLinkAttrs(CAMD_BASE_NAME, ml)
#endif

#define NextClusterLink(mc, ml, type) ({ \
  struct MidiCluster * _NextClusterLink_mc = (mc); \
  struct MidiLink * _NextClusterLink_ml = (ml); \
  LONG _NextClusterLink_type = (type); \
  ({ \
  register char * _NextClusterLink__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((struct MidiLink * (*)(char * __asm("a6"), struct MidiCluster * __asm("a0"), struct MidiLink * __asm("a1"), LONG __asm("d0"))) \
  (_NextClusterLink__bn - 108))(_NextClusterLink__bn, _NextClusterLink_mc, _NextClusterLink_ml, _NextClusterLink_type); \
});})

#define NextMidiLink(mi, ml, type) ({ \
  struct MidiNode * _NextMidiLink_mi = (mi); \
  struct MidiLink * _NextMidiLink_ml = (ml); \
  LONG _NextMidiLink_type = (type); \
  ({ \
  register char * _NextMidiLink__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((struct MidiLink * (*)(char * __asm("a6"), struct MidiNode * __asm("a0"), struct MidiLink * __asm("a1"), LONG __asm("d0"))) \
  (_NextMidiLink__bn - 114))(_NextMidiLink__bn, _NextMidiLink_mi, _NextMidiLink_ml, _NextMidiLink_type); \
});})

#define MidiLinkConnected(ml) ({ \
  struct MidiLink * _MidiLinkConnected_ml = (ml); \
  ({ \
  register char * _MidiLinkConnected__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((BOOL (*)(char * __asm("a6"), struct MidiLink * __asm("a0"))) \
  (_MidiLinkConnected__bn - 120))(_MidiLinkConnected__bn, _MidiLinkConnected_ml); \
});})

#define NextCluster(mc) ({ \
  struct MidiCluster * _NextCluster_mc = (mc); \
  ({ \
  register char * _NextCluster__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((struct MidiCluster * (*)(char * __asm("a6"), struct MidiCluster * __asm("a0"))) \
  (_NextCluster__bn - 126))(_NextCluster__bn, _NextCluster_mc); \
});})

#define FindCluster(name) ({ \
  STRPTR _FindCluster_name = (name); \
  ({ \
  register char * _FindCluster__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((struct MidiCluster * (*)(char * __asm("a6"), STRPTR __asm("a0"))) \
  (_FindCluster__bn - 132))(_FindCluster__bn, _FindCluster_name); \
});})

#define PutMidi(ml, msgdata) ({ \
  struct MidiLink * _PutMidi_ml = (ml); \
  LONG _PutMidi_msgdata = (msgdata); \
  ({ \
  register char * _PutMidi__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((void (*)(char * __asm("a6"), struct MidiLink * __asm("a0"), LONG __asm("d0"))) \
  (_PutMidi__bn - 138))(_PutMidi__bn, _PutMidi_ml, _PutMidi_msgdata); \
});})

#define GetMidi(mi, msg) ({ \
  struct MidiNode * _GetMidi_mi = (mi); \
  MidiMsg * _GetMidi_msg = (msg); \
  ({ \
  register char * _GetMidi__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((BOOL (*)(char * __asm("a6"), struct MidiNode * __asm("a0"), MidiMsg * __asm("a1"))) \
  (_GetMidi__bn - 144))(_GetMidi__bn, _GetMidi_mi, _GetMidi_msg); \
});})

#define WaitMidi(mi, msg) ({ \
  struct MidiNode * _WaitMidi_mi = (mi); \
  MidiMsg * _WaitMidi_msg = (msg); \
  ({ \
  register char * _WaitMidi__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((BOOL (*)(char * __asm("a6"), struct MidiNode * __asm("a0"), MidiMsg * __asm("a1"))) \
  (_WaitMidi__bn - 150))(_WaitMidi__bn, _WaitMidi_mi, _WaitMidi_msg); \
});})

#define PutSysEx(ml, buffer) ({ \
  struct MidiLink * _PutSysEx_ml = (ml); \
  UBYTE * _PutSysEx_buffer = (buffer); \
  ({ \
  register char * _PutSysEx__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((void (*)(char * __asm("a6"), struct MidiLink * __asm("a0"), UBYTE * __asm("a1"))) \
  (_PutSysEx__bn - 156))(_PutSysEx__bn, _PutSysEx_ml, _PutSysEx_buffer); \
});})

#define GetSysEx(mi, buffer, len) ({ \
  struct MidiNode * _GetSysEx_mi = (mi); \
  UBYTE * _GetSysEx_buffer = (buffer); \
  ULONG _GetSysEx_len = (len); \
  ({ \
  register char * _GetSysEx__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((ULONG (*)(char * __asm("a6"), struct MidiNode * __asm("a0"), UBYTE * __asm("a1"), ULONG __asm("d0"))) \
  (_GetSysEx__bn - 162))(_GetSysEx__bn, _GetSysEx_mi, _GetSysEx_buffer, _GetSysEx_len); \
});})

#define QuerySysEx(mi) ({ \
  struct MidiNode * _QuerySysEx_mi = (mi); \
  ({ \
  register char * _QuerySysEx__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((ULONG (*)(char * __asm("a6"), struct MidiNode * __asm("a0"))) \
  (_QuerySysEx__bn - 168))(_QuerySysEx__bn, _QuerySysEx_mi); \
});})

#define SkipSysEx(mi) ({ \
  struct MidiNode * _SkipSysEx_mi = (mi); \
  ({ \
  register char * _SkipSysEx__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((void (*)(char * __asm("a6"), struct MidiNode * __asm("a0"))) \
  (_SkipSysEx__bn - 174))(_SkipSysEx__bn, _SkipSysEx_mi); \
});})

#define GetMidiErr(mi) ({ \
  struct MidiNode * _GetMidiErr_mi = (mi); \
  ({ \
  register char * _GetMidiErr__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((UBYTE (*)(char * __asm("a6"), struct MidiNode * __asm("a0"))) \
  (_GetMidiErr__bn - 180))(_GetMidiErr__bn, _GetMidiErr_mi); \
});})

#define MidiMsgType(msg) ({ \
  MidiMsg * _MidiMsgType_msg = (msg); \
  ({ \
  register char * _MidiMsgType__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((WORD (*)(char * __asm("a6"), MidiMsg * __asm("a0"))) \
  (_MidiMsgType__bn - 186))(_MidiMsgType__bn, _MidiMsgType_msg); \
});})

#define MidiMsgLen(status) ({ \
  ULONG _MidiMsgLen_status = (status); \
  ({ \
  register char * _MidiMsgLen__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((WORD (*)(char * __asm("a6"), ULONG __asm("d0"))) \
  (_MidiMsgLen__bn - 192))(_MidiMsgLen__bn, _MidiMsgLen_status); \
});})

#define ParseMidi(ml, buffer, length) ({ \
  struct MidiLink * _ParseMidi_ml = (ml); \
  UBYTE * _ParseMidi_buffer = (buffer); \
  ULONG _ParseMidi_length = (length); \
  ({ \
  register char * _ParseMidi__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((void (*)(char * __asm("a6"), struct MidiLink * __asm("a0"), UBYTE * __asm("a1"), ULONG __asm("d0"))) \
  (_ParseMidi__bn - 198))(_ParseMidi__bn, _ParseMidi_ml, _ParseMidi_buffer, _ParseMidi_length); \
});})

#define OpenMidiDevice(name) ({ \
  UBYTE * _OpenMidiDevice_name = (name); \
  ({ \
  register char * _OpenMidiDevice__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((struct MidiDeviceData * (*)(char * __asm("a6"), UBYTE * __asm("a0"))) \
  (_OpenMidiDevice__bn - 204))(_OpenMidiDevice__bn, _OpenMidiDevice_name); \
});})

#define CloseMidiDevice(mdd) ({ \
  struct MidiDeviceData * _CloseMidiDevice_mdd = (mdd); \
  ({ \
  register char * _CloseMidiDevice__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((void (*)(char * __asm("a6"), struct MidiDeviceData * __asm("a0"))) \
  (_CloseMidiDevice__bn - 210))(_CloseMidiDevice__bn, _CloseMidiDevice_mdd); \
});})

#define RethinkCAMD() ({ \
  register char * _RethinkCAMD__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((int (*)(char * __asm("a6"))) \
  (_RethinkCAMD__bn - 216))(_RethinkCAMD__bn); \
})

#define StartClusterNotify(node) ({ \
  struct ClusterNotifyNode * _StartClusterNotify_node = (node); \
  ({ \
  register char * _StartClusterNotify__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((void (*)(char * __asm("a6"), struct ClusterNotifyNode * __asm("a0"))) \
  (_StartClusterNotify__bn - 222))(_StartClusterNotify__bn, _StartClusterNotify_node); \
});})

#define EndClusterNotify(node) ({ \
  struct ClusterNotifyNode * _EndClusterNotify_node = (node); \
  ({ \
  register char * _EndClusterNotify__bn __asm("a6") = (char *) (CAMD_BASE_NAME);\
  ((void (*)(char * __asm("a6"), struct ClusterNotifyNode * __asm("a0"))) \
  (_EndClusterNotify__bn - 228))(_EndClusterNotify__bn, _EndClusterNotify_node); \
});})


#ifdef __cplusplus
}
#endif
#endif /*  _INLINE_CAMD_H  */
