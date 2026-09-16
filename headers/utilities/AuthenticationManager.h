#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 37 member(s).
namespace Windows::Internal::Security::WebAuthentication {
class AuthenticationManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AuthenticationManager@WebAuthentication@Security@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AuthenticateUserHostAsync@AuthenticationManager@WebAuthentication@Security@Internal@Windows@@UEAAJPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@35@PEAPEAU?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@5@@Z
    virtual long AuthenticateUserHostAsync(::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AuthenticateUserHostAsyncAdvanced@AuthenticationManager@WebAuthentication@Security@Internal@Windows@@UEAAJPEAU?$IIterable@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@5@PEAPEAU?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@85@@Z
    virtual long AuthenticateUserHostAsyncAdvanced(WindissectOpaque *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AuthenticationManager@WebAuthentication@Security@Internal@Windows@@QEAA@XZ
    AuthenticationManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AuthenticationManager@WebAuthentication@Security@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AuthenticationManager@WebAuthentication@Security@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AuthenticationManager@WebAuthentication@Security@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AuthenticationManager@WebAuthentication@Security@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AuthenticationManager@WebAuthentication@Security@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AuthenticationManager@WebAuthentication@Security@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCacheAsync@AuthenticationManager@WebAuthentication@Security@Internal@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long InvalidateCacheAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideApplicationSID@AuthenticationManager@WebAuthentication@Security@Internal@Windows@@UEAAJPEBG@Z
    virtual long OverrideApplicationSID(unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AuthenticationManager@WebAuthentication@Security@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AuthenticationManager@WebAuthentication@Security@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignOutUserSync@AuthenticationManager@WebAuthentication@Security@Internal@Windows@@UEAAJXZ
    virtual long SignOutUserSync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseEsimBootstrap@AuthenticationManager@WebAuthentication@Security@Internal@Windows@@UEAAJXZ
    virtual long UseEsimBootstrap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationId@AuthenticationManager@WebAuthentication@Security@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_ApplicationId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ApplicationId@AuthenticationManager@WebAuthentication@Security@Internal@Windows@@UEAAJU_GUID@@@Z
    virtual long put_ApplicationId(_GUID);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AuthenticationManager@WebAuthentication@Security@Internal@Windows@@UEAA@XZ
    virtual ~AuthenticationManager();
};
} // namespace Windows::Internal::Security::WebAuthentication
