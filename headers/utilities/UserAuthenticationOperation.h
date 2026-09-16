#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 43 member(s).
namespace Windows::Security::Authentication::OnlineId {
class UserAuthenticationOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUIUserIdentity@2345@@Z
    virtual long GetResults(::Windows::Security::Authentication::OnlineId::IUserIdentity * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWorker@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@QEAAJPEAU?$IIterable@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@5@W4CredentialPromptType@2345@@Z
    long InitializeWorker(WindissectOpaque *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@QEAA@IAEBU_GUID@@PEAUHWND__@@PEAX_NPEBG443@Z
    UserAuthenticationOperation(unsigned int, _GUID const &, HWND__*, void *, bool, unsigned short const *, unsigned short const *, unsigned short const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@UEAA@XZ
    virtual ~UserAuthenticationOperation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanShowAuthURLUI@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@AEAA_NXZ
    bool CanShowAuthURLUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIfCallerIsAllowed@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@AEAAJXZ
    long CheckIfCallerIsAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIfCallerIsSupported@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@AEAAJXZ
    long CheckIfCallerIsSupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckRequestResults@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@AEAAXPEAVIExecutionContextModern@@JJJPEAU_WLIDResponseParams@@_KV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@KHAEA_NAEAJ5AEAV89@66@Z
    void CheckRequestResults(IExecutionContextModern *, long, long, long, _WLIDResponseParams *, uint64_t, WindissectOpaque, unsigned long, int, bool &, long &, long &, WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectLocalUser@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@AEAAJPEAVIExecutionContextModern@@@Z
    long ConnectLocalUser(IExecutionContextModern *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIdentityHandle@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@AEAAJPEAVIExecutionContextModern@@W4OperationType@2345@@Z
    long CreateIdentityHandle(IExecutionContextModern *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIdentityHandleFromCredentialUi@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@AEAAJPEAVIExecutionContextModern@@W4UsageSubScenario@@JAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAV89@@Z
    long CreateIdentityHandleFromCredentialUi(IExecutionContextModern *, int, long, WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIdentityHandleFromCxhUi@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@AEAAJPEAVIExecutionContextModern@@W4UsageSubScenario@@PEAUHWND__@@AEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@3AEAJAEAH@Z
    long CreateIdentityHandleFromCxhUi(IExecutionContextModern *, int, HWND__*, WindissectOpaque &, WindissectOpaque &, long &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@EEAAJXZ
    virtual long DoWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeState@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@AEAAJPEAVIExecutionContextModern@@@Z
    long InitializeState(IExecutionContextModern *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCxhRedirectionEnabledForCurrentPlatform@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@AEAA_NPEAVIExecutionContextModern@@@Z
    bool IsCxhRedirectionEnabledForCurrentPlatform(IExecutionContextModern *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWABFlowDisabledOnAllPlatforms@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@AEAA_NXZ
    bool IsWABFlowDisabledOnAllPlatforms();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideTicketRequestForLegacyAdControl@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@AEAAJPEAJ@Z
    long OverrideTicketRequestForLegacyAdControl(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveUserData@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@AEAAJPEAVIExecutionContextModern@@@Z
    long RetrieveUserData(IExecutionContextModern *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupIdentityHandle@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@AEAAJPEAVIExecutionContextModern@@JAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@11AEAV78@AEAJ22AEAH@Z
    long SetupIdentityHandle(IExecutionContextModern *, long, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque &, long &, WindissectOpaque &, WindissectOpaque &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowErrorInCredUI@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@AEAA_NJ@Z
    bool ShouldShowErrorInCredUI(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUpsell@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@AEAAJPEAVIExecutionContextModern@@AEA_N@Z
    long ShouldUpsell(IExecutionContextModern *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIdentityHandleThroughWebUI@UserAuthenticationOperation@OnlineId@Authentication@Security@Windows@@AEAAJPEAVIExecutionContextModern@@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@1AEAJAEAV78@3AEAH@Z
    long UpdateIdentityHandleThroughWebUI(IExecutionContextModern *, WindissectOpaque, WindissectOpaque, long &, WindissectOpaque &, WindissectOpaque &, int &);
};
} // namespace Windows::Security::Authentication::OnlineId
