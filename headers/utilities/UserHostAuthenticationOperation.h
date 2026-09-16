#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 28 member(s).
namespace Windows::Internal::Security::WebAuthentication {
class UserHostAuthenticationOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UserHostAuthenticationOperation@WebAuthentication@Security@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UserHostAuthenticationOperation@WebAuthentication@Security@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@UserHostAuthenticationOperation@WebAuthentication@Security@Internal@Windows@@UEAAJPEAPEAUIUserHostIdentity@2345@@Z
    virtual long GetResults(::Windows::Internal::Security::WebAuthentication::IUserHostIdentity * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UserHostAuthenticationOperation@WebAuthentication@Security@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UserHostAuthenticationOperation@WebAuthentication@Security@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWorker@UserHostAuthenticationOperation@WebAuthentication@Security@Internal@Windows@@QEAAJPEAU?$IIterable@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@5@@Z
    long InitializeWorker(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UserHostAuthenticationOperation@WebAuthentication@Security@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UserHostAuthenticationOperation@WebAuthentication@Security@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserHostAuthenticationOperation@WebAuthentication@Security@Internal@Windows@@UEAA@XZ
    virtual ~UserHostAuthenticationOperation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireToken@UserHostAuthenticationOperation@WebAuthentication@Security@Internal@Windows@@AEAAJPEAVILiveIdNtService@@AEAV?$CAtlArray@U_WLIDRequestParams@@V?$CElementTraits@U_WLIDRequestParams@@@ATL@@@ATL@@PEAPEAU_WLIDResponseParams@@@Z
    long AcquireToken(ILiveIdNtService *, WindissectOpaque &, _WLIDResponseParams * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@UserHostAuthenticationOperation@WebAuthentication@Security@Internal@Windows@@EEAAJXZ
    virtual long DoWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveDeviceData@UserHostAuthenticationOperation@WebAuthentication@Security@Internal@Windows@@AEAAJPEAVIExecutionContextModern@@@Z
    long RetrieveDeviceData(IExecutionContextModern *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupIdentityHandle@UserHostAuthenticationOperation@WebAuthentication@Security@Internal@Windows@@AEAAJPEAVIExecutionContextModern@@@Z
    long SetupIdentityHandle(IExecutionContextModern *);
};
} // namespace Windows::Internal::Security::WebAuthentication
