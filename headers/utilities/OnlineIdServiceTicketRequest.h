#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 20 member(s).
namespace Windows::Security::Authentication::OnlineId {
class OnlineIdServiceTicketRequest {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@OnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@OnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@OnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@OnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@QEAAJPEAUHSTRING__@@0@Z
    long Initialize(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@OnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@OnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@QEAA@XZ
    OnlineIdServiceTicketRequest();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Policy@OnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Policy(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Service@OnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Service(HSTRING__* *);
};
} // namespace Windows::Security::Authentication::OnlineId
