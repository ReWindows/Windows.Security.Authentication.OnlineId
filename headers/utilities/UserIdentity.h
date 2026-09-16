#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 25 member(s).
namespace Windows::Security::Authentication::OnlineId {
class UserIdentity {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UserIdentity@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UserIdentity@OnlineId@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UserIdentity@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UserIdentity@OnlineId@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UserIdentity@OnlineId@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UserIdentity@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserIdentity@OnlineId@Authentication@Security@Windows@@QEAA@XZ
    UserIdentity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstName@UserIdentity@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_FirstName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@UserIdentity@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsBetaAccount@UserIdentity@OnlineId@Authentication@Security@Windows@@UEAAJPEAE@Z
    virtual long get_IsBetaAccount(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsConfirmedPC@UserIdentity@OnlineId@Authentication@Security@Windows@@UEAAJPEAE@Z
    virtual long get_IsConfirmedPC(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastName@UserIdentity@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_LastName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SafeCustomerId@UserIdentity@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SafeCustomerId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SignInName@UserIdentity@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SignInName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Tickets@UserIdentity@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVOnlineIdServiceTicket@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@5@@Z
    virtual long get_Tickets(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserIdentity@OnlineId@Authentication@Security@Windows@@UEAA@XZ
    virtual ~UserIdentity();
};
} // namespace Windows::Security::Authentication::OnlineId
