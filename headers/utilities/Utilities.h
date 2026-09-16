#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 16 member(s).
class Utilities {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAllowedToSignOut@Utilities@@SAJPEBG@Z
    static long CheckAllowedToSignOut(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCallerIsTokenBroker@Utilities@@SAJPEAVIExecutionContextModern@@@Z
    static long CheckCallerIsTokenBroker(IExecutionContextModern *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckRemotePassportAuthenticationCapability@Utilities@@SAJAEAE@Z
    static long CheckRemotePassportAuthenticationCapability(unsigned char &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationId@Utilities@@SAJPEAVIExecutionContextModern@@AEBU_GUID@@_NAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEA_N@Z
    static long GetApplicationId(IExecutionContextModern *, _GUID const &, bool, WindissectOpaque &, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationName@Utilities@@SAJPEAVIExecutionContextModern@@AEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    static long GetApplicationName(IExecutionContextModern *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationSid@Utilities@@SAJPEAVIExecutionContextModern@@AEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    static long GetApplicationSid(IExecutionContextModern *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerInformation@Utilities@@SAJPEAVIExecutionContextModern@@PEAPEAX@Z
    static long GetCallerInformation(IExecutionContextModern *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMsaIdentityAppSid@Utilities@@SAJAEAVHString@Wrappers@WRL@Microsoft@@@Z
    static long GetMsaIdentityAppSid(::Microsoft::WRL::Wrappers::HString &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMsaIdentityAppVersion@Utilities@@SAXAEAVHString@Wrappers@WRL@Microsoft@@@Z
    static void GetMsaIdentityAppVersion(::Microsoft::WRL::Wrappers::HString &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestCollection@Utilities@@SAJPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@AEAV?$ComPtr@U?$IIterable@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z
    static long GetRequestCollection(::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAllowedToSetParentWindow@Utilities@@SAJPEAH@Z
    static long IsAllowedToSetParentWindow(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnected@Utilities@@SAJPEAVIExecutionContextLite@@PEA_N@Z
    static long IsConnected(IExecutionContextLite *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnectedAccountName@Utilities@@SAJPEAVILiveIdNtService@@PEBGAEA_N@Z
    static long IsConnectedAccountName(ILiveIdNtService *, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapInternalErrorToExternal@Utilities@@SAJJ_NPEA_N@Z
    static long MapInternalErrorToExternal(long, bool, bool *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationInformation@Utilities@@CAJPEAVIExecutionContextModern@@AEAV?$Auto@PEAU_TOKEN_APPCONTAINER_INFORMATION@@V?$LocalAllocFunctor@PEAU_TOKEN_APPCONTAINER_INFORMATION@@@@VDummyContext@@@@@Z
    static long GetApplicationInformation(IExecutionContextModern *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OriginateError@Utilities@@CAXJG@Z
    static void OriginateError(long, unsigned short);
};
