#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 20 member(s).
namespace Windows::Security::Authentication::OnlineId {
class OnlineIdSystemTicketResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnlineIdSystemTicketResult@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@OnlineIdSystemTicketResult@OnlineId@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@OnlineIdSystemTicketResult@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@OnlineIdSystemTicketResult@OnlineId@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnlineIdSystemTicketResult@OnlineId@Authentication@Security@Windows@@QEAA@XZ
    OnlineIdSystemTicketResult();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnlineIdSystemTicketResult@OnlineId@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnlineIdSystemTicketResult@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedError@OnlineIdSystemTicketResult@OnlineId@Authentication@Security@Windows@@UEAAJPEAJ@Z
    virtual long get_ExtendedError(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Identity@OnlineIdSystemTicketResult@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUIOnlineIdSystemIdentity@2345@@Z
    virtual long get_Identity(::Windows::Security::Authentication::OnlineId::IOnlineIdSystemIdentity * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@OnlineIdSystemTicketResult@OnlineId@Authentication@Security@Windows@@UEAAJPEAW4OnlineIdSystemTicketStatus@2345@@Z
    virtual long get_Status(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnlineIdSystemTicketResult@OnlineId@Authentication@Security@Windows@@UEAA@XZ
    virtual ~OnlineIdSystemTicketResult();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtendedErrorFromInternalUserHostIdentity@OnlineIdSystemTicketResult@OnlineId@Authentication@Security@Windows@@AEAAJXZ
    long GetExtendedErrorFromInternalUserHostIdentity();
};
} // namespace Windows::Security::Authentication::OnlineId
