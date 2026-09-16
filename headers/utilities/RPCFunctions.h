#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 8 member(s).
class RPCFunctions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?I_RpcBindingInqLocalClientPID@RPCFunctions@@UEAAJPEAXPEAK@Z
    virtual long I_RpcBindingInqLocalClientPID(void *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MesBufferHandleReset@RPCFunctions@@UEAAJPEAXKW4MIDL_ES_CODE@@PEAPEADKPEAK@Z
    virtual long MesBufferHandleReset(void *, unsigned long, int, char * *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MesDecodeBufferHandleCreate@RPCFunctions@@UEAAJPEADKPEAPEAX@Z
    virtual long MesDecodeBufferHandleCreate(char *, unsigned long, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MesEncodeFixedBufferHandleCreate@RPCFunctions@@UEAAJPEADKPEAKPEAPEAX@Z
    virtual long MesEncodeFixedBufferHandleCreate(char *, unsigned long, unsigned long *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MesHandleFree@RPCFunctions@@UEAAJPEAX@Z
    virtual long MesHandleFree(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UuidCreate@RPCFunctions@@UEAAJPEAU_GUID@@@Z
    virtual long UuidCreate(_GUID *);
};
