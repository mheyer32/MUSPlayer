#ifndef CAMD_INTERFACE_DEF_H
#define CAMD_INTERFACE_DEF_H
/*
** This file is machine generated from idltool
** Do not edit
*/ 

#include <exec/types.i>
#include <exec/exec.i>
#include <exec/interfaces.i>

STRUCTURE CamdIFace, InterfaceData_SIZE
	    FPTR ICamd_Obtain
	    FPTR ICamd_Release
	    FPTR ICamd_Expunge
	    FPTR ICamd_Clone
	    FPTR ICamd_LockCAMD
	    FPTR ICamd_UnlockCAMD
	    FPTR ICamd_CreateMidiA
	    FPTR ICamd_CreateMidi
	    FPTR ICamd_DeleteMidi
	    FPTR ICamd_SetMidiAttrsA
	    FPTR ICamd_SetMidiAttrs
	    FPTR ICamd_GetMidiAttrsA
	    FPTR ICamd_GetMidiAttrs
	    FPTR ICamd_NextMidi
	    FPTR ICamd_FindMidi
	    FPTR ICamd_FlushMidi
	    FPTR ICamd_AddMidiLinkA
	    FPTR ICamd_AddMidiLink
	    FPTR ICamd_RemoveMidiLink
	    FPTR ICamd_SetMidiLinkAttrsA
	    FPTR ICamd_SetMidiLinkAttrs
	    FPTR ICamd_GetMidiLinkAttrsA
	    FPTR ICamd_GetMidiLinkAttrs
	    FPTR ICamd_NextClusterLink
	    FPTR ICamd_NextMidiLink
	    FPTR ICamd_MidiLinkConnected
	    FPTR ICamd_NextCluster
	    FPTR ICamd_FindCluster
	    FPTR ICamd_PutMidi
	    FPTR ICamd_GetMidi
	    FPTR ICamd_WaitMidi
	    FPTR ICamd_PutSysEx
	    FPTR ICamd_GetSysEx
	    FPTR ICamd_QuerySysEx
	    FPTR ICamd_SkipSysEx
	    FPTR ICamd_GetMidiErr
	    FPTR ICamd_MidiMsgType
	    FPTR ICamd_MidiMsgLen
	    FPTR ICamd_ParseMidi
	    FPTR ICamd_OpenMidiDevice
	    FPTR ICamd_CloseMidiDevice
	    FPTR ICamd_RethinkCAMD
	    FPTR ICamd_StartClusterNotify
	    FPTR ICamd_EndClusterNotify
	LABEL CamdIFace_SIZE

#endif
