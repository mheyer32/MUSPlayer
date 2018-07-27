#ifndef INLINE4_CAMD_H
#define INLINE4_CAMD_H

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

/* Inline functions for Interface "main" */
#define LockCAMD(locktype) ICamd->LockCAMD(locktype) 
#define UnlockCAMD(lock) ICamd->UnlockCAMD(lock) 
#define CreateMidiA(tags) ICamd->CreateMidiA(tags) 
#if !defined(__cplusplus) && (__STDC_VERSION__ >= 199901L || __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95))
#define CreateMidi(...) ICamd->CreateMidi(__VA_ARGS__) 
#endif
#define DeleteMidi(mi) ICamd->DeleteMidi(mi) 
#define SetMidiAttrsA(mi, tags) ICamd->SetMidiAttrsA(mi, tags) 
#if !defined(__cplusplus) && (__STDC_VERSION__ >= 199901L || __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95))
#define SetMidiAttrs(...) ICamd->SetMidiAttrs(__VA_ARGS__) 
#endif
#define GetMidiAttrsA(mi, tags) ICamd->GetMidiAttrsA(mi, tags) 
#if !defined(__cplusplus) && (__STDC_VERSION__ >= 199901L || __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95))
#define GetMidiAttrs(...) ICamd->GetMidiAttrs(__VA_ARGS__) 
#endif
#define NextMidi(mi) ICamd->NextMidi(mi) 
#define FindMidi(name) ICamd->FindMidi(name) 
#define FlushMidi(mi) ICamd->FlushMidi(mi) 
#define AddMidiLinkA(mi, type, tags) ICamd->AddMidiLinkA(mi, type, tags) 
#if !defined(__cplusplus) && (__STDC_VERSION__ >= 199901L || __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95))
#define AddMidiLink(mi, ...) ICamd->AddMidiLink(mi, __VA_ARGS__) 
#endif
#define RemoveMidiLink(ml) ICamd->RemoveMidiLink(ml) 
#define SetMidiLinkAttrsA(ml, tags) ICamd->SetMidiLinkAttrsA(ml, tags) 
#if !defined(__cplusplus) && (__STDC_VERSION__ >= 199901L || __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95))
#define SetMidiLinkAttrs(...) ICamd->SetMidiLinkAttrs(__VA_ARGS__) 
#endif
#define GetMidiLinkAttrsA(ml, tags) ICamd->GetMidiLinkAttrsA(ml, tags) 
#if !defined(__cplusplus) && (__STDC_VERSION__ >= 199901L || __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95))
#define GetMidiLinkAttrs(...) ICamd->GetMidiLinkAttrs(__VA_ARGS__) 
#endif
#define NextClusterLink(mc, ml, type) ICamd->NextClusterLink(mc, ml, type) 
#define NextMidiLink(mi, ml, type) ICamd->NextMidiLink(mi, ml, type) 
#define MidiLinkConnected(ml) ICamd->MidiLinkConnected(ml) 
#define NextCluster(mc) ICamd->NextCluster(mc) 
#define FindCluster(name) ICamd->FindCluster(name) 
#define PutMidi(ml, msgdata) ICamd->PutMidi(ml, msgdata) 
#define GetMidi(mi, msg) ICamd->GetMidi(mi, msg) 
#define WaitMidi(mi, msg) ICamd->WaitMidi(mi, msg) 
#define PutSysEx(ml, buffer) ICamd->PutSysEx(ml, buffer) 
#define GetSysEx(mi, buffer, len) ICamd->GetSysEx(mi, buffer, len) 
#define QuerySysEx(mi) ICamd->QuerySysEx(mi) 
#define SkipSysEx(mi) ICamd->SkipSysEx(mi) 
#define GetMidiErr(mi) ICamd->GetMidiErr(mi) 
#define MidiMsgType(msg) ICamd->MidiMsgType(msg) 
#define MidiMsgLen(status) ICamd->MidiMsgLen(status) 
#define ParseMidi(ml, buffer, length) ICamd->ParseMidi(ml, buffer, length) 
#define OpenMidiDevice(name) ICamd->OpenMidiDevice(name) 
#define CloseMidiDevice(mdd) ICamd->CloseMidiDevice(mdd) 
#define RethinkCAMD() ICamd->RethinkCAMD() 
#define StartClusterNotify(node) ICamd->StartClusterNotify(node) 
#define EndClusterNotify(node) ICamd->EndClusterNotify(node) 

#endif /* INLINE4_CAMD_H */
