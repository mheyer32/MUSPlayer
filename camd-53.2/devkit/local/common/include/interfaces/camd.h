#ifndef CAMD_INTERFACE_DEF_H
#define CAMD_INTERFACE_DEF_H

/*
** This file was machine generated by idltool 50.6.
** Do not edit
*/ 

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef EXEC_EXEC_H
#include <exec/exec.h>
#endif
#ifndef EXEC_INTERFACES_H
#include <exec/interfaces.h>
#endif

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef MIDI_CAMD_H
#include <midi/camd.h>
#endif

struct CamdIFace
{
	struct InterfaceData Data;

	ULONG APICALL (*Obtain)(struct CamdIFace *Self);
	ULONG APICALL (*Release)(struct CamdIFace *Self);
	void APICALL (*Expunge)(struct CamdIFace *Self);
	struct Interface * APICALL (*Clone)(struct CamdIFace *Self);
	APTR APICALL (*LockCAMD)(struct CamdIFace *Self, ULONG locktype);
	void APICALL (*UnlockCAMD)(struct CamdIFace *Self, APTR lock);
	struct MidiNode * APICALL (*CreateMidiA)(struct CamdIFace *Self, struct TagItem * tags);
	struct MidiNode * APICALL (*CreateMidi)(struct CamdIFace *Self, ...);
	void APICALL (*DeleteMidi)(struct CamdIFace *Self, struct MidiNode * mi);
	BOOL APICALL (*SetMidiAttrsA)(struct CamdIFace *Self, struct MidiNode * mi, struct TagItem * tags);
	BOOL APICALL (*SetMidiAttrs)(struct CamdIFace *Self, struct MidiNode * mi, ...);
	ULONG APICALL (*GetMidiAttrsA)(struct CamdIFace *Self, struct MidiNode * mi, struct TagItem * tags);
	ULONG APICALL (*GetMidiAttrs)(struct CamdIFace *Self, struct MidiNode * mi, ...);
	struct MidiNode * APICALL (*NextMidi)(struct CamdIFace *Self, struct MidiNode * mi);
	struct MidiNode * APICALL (*FindMidi)(struct CamdIFace *Self, STRPTR name);
	void APICALL (*FlushMidi)(struct CamdIFace *Self, struct MidiNode * mi);
	struct MidiLink * APICALL (*AddMidiLinkA)(struct CamdIFace *Self, struct MidiNode * mi, LONG type, struct TagItem * tags);
	struct MidiLink * APICALL (*AddMidiLink)(struct CamdIFace *Self, struct MidiNode * mi, LONG type, ...);
	void APICALL (*RemoveMidiLink)(struct CamdIFace *Self, struct MidiLink * ml);
	BOOL APICALL (*SetMidiLinkAttrsA)(struct CamdIFace *Self, struct MidiLink * ml, struct TagItem * tags);
	BOOL APICALL (*SetMidiLinkAttrs)(struct CamdIFace *Self, struct MidiLink * ml, ...);
	ULONG APICALL (*GetMidiLinkAttrsA)(struct CamdIFace *Self, struct MidiLink * ml, struct TagItem * tags);
	ULONG APICALL (*GetMidiLinkAttrs)(struct CamdIFace *Self, struct MidiLink * ml, ...);
	struct MidiLink * APICALL (*NextClusterLink)(struct CamdIFace *Self, struct MidiCluster * mc, struct MidiLink * ml, LONG type);
	struct MidiLink * APICALL (*NextMidiLink)(struct CamdIFace *Self, struct MidiNode * mi, struct MidiLink * ml, LONG type);
	BOOL APICALL (*MidiLinkConnected)(struct CamdIFace *Self, struct MidiLink * ml);
	struct MidiCluster * APICALL (*NextCluster)(struct CamdIFace *Self, struct MidiCluster * mc);
	struct MidiCluster * APICALL (*FindCluster)(struct CamdIFace *Self, STRPTR name);
	void APICALL (*PutMidi)(struct CamdIFace *Self, struct MidiLink * ml, LONG msgdata);
	BOOL APICALL (*GetMidi)(struct CamdIFace *Self, struct MidiNode * mi, MidiMsg * msg);
	BOOL APICALL (*WaitMidi)(struct CamdIFace *Self, struct MidiNode * mi, MidiMsg * msg);
	void APICALL (*PutSysEx)(struct CamdIFace *Self, struct MidiLink * ml, UBYTE * buffer);
	ULONG APICALL (*GetSysEx)(struct CamdIFace *Self, struct MidiNode * mi, UBYTE * buffer, ULONG len);
	ULONG APICALL (*QuerySysEx)(struct CamdIFace *Self, struct MidiNode * mi);
	void APICALL (*SkipSysEx)(struct CamdIFace *Self, struct MidiNode * mi);
	UBYTE APICALL (*GetMidiErr)(struct CamdIFace *Self, struct MidiNode * mi);
	WORD APICALL (*MidiMsgType)(struct CamdIFace *Self, MidiMsg * msg);
	WORD APICALL (*MidiMsgLen)(struct CamdIFace *Self, ULONG status);
	void APICALL (*ParseMidi)(struct CamdIFace *Self, struct MidiLink * ml, UBYTE * buffer, ULONG length);
	struct MidiDeviceData * APICALL (*OpenMidiDevice)(struct CamdIFace *Self, UBYTE * name);
	void APICALL (*CloseMidiDevice)(struct CamdIFace *Self, struct MidiDeviceData * mdd);
	int APICALL (*RethinkCAMD)(struct CamdIFace *Self);
	void APICALL (*StartClusterNotify)(struct CamdIFace *Self, struct ClusterNotifyNode * node);
	void APICALL (*EndClusterNotify)(struct CamdIFace *Self, struct ClusterNotifyNode * node);
};

#endif /* CAMD_INTERFACE_DEF_H */
