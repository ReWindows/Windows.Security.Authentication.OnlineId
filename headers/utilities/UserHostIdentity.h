#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 19 member(s).
namespace Windows::Internal::Security::WebAuthentication {
class UserHostIdentity {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UserHostIdentity@WebAuthentication@Security@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UserHostIdentity@WebAuthentication@Security@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UserHostIdentity@WebAuthentication@Security@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UserHostIdentity@WebAuthentication@Security@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UserHostIdentity@WebAuthentication@Security@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UserHostIdentity@WebAuthentication@Security@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserHostIdentity@WebAuthentication@Security@Internal@Windows@@QEAA@XZ
    UserHostIdentity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@UserHostIdentity@WebAuthentication@Security@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Tickets@UserHostIdentity@WebAuthentication@Security@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVOnlineIdServiceTicket@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@5@@Z
    virtual long get_Tickets(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserHostIdentity@WebAuthentication@Security@Internal@Windows@@UEAA@XZ
    virtual ~UserHostIdentity();
};
} // namespace Windows::Internal::Security::WebAuthentication
