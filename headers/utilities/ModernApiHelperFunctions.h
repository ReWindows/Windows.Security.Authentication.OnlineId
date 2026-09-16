#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 16 member(s).
class ModernApiHelperFunctions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?As@ModernApiHelperFunctions@@UEAAJV?$ComPtr@U?$IAsyncOperation@PEAVWebAuthenticationResult@Web@Authentication@Security@Windows@@@Foundation@Windows@@@WRL@Microsoft@@PEAV?$ComPtr@UIAsyncInfo@@@34@@Z
    virtual long As(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AuthenticateWithCallbackUriAsync@ModernApiHelperFunctions@@UEAAJPEAUIWebAuthenticationBrokerStatics@Web@Authentication@Security@Windows@@W4WebAuthenticationOptions@3456@PEAUIUriRuntimeClass@Foundation@6@2PEAPEAU?$IAsyncOperation@PEAVWebAuthenticationResult@Web@Authentication@Security@Windows@@@96@@Z
    virtual long AuthenticateWithCallbackUriAsync(::Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics *, int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxRetry@ModernApiHelperFunctions@@UEAAKXZ
    virtual unsigned long GetMaxRetry();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@ModernApiHelperFunctions@@UEAAJPEAU?$IAsyncOperation@PEAVWebAuthenticationResult@Web@Authentication@Security@Windows@@@Foundation@Windows@@PEAPEAUIWebAuthenticationResult@Web@Authentication@Security@4@@Z
    virtual long GetResults(WindissectOpaque *, ::Windows::Security::Authentication::Web::IWebAuthenticationResult * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTestHookFlags@ModernApiHelperFunctions@@UEAAKXZ
    virtual unsigned long GetTestHookFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnected@ModernApiHelperFunctions@@UEAAJPEA_N@Z
    virtual long IsConnected(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromptForLiveIdCredentials@ModernApiHelperFunctions@@UEAAJW4UsageSubScenario@@AEBUIdentityInformationForUi@@AEBUAppInformationForUi@@AEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAPEAEPEAK5AEAJ@Z
    virtual long PromptForLiveIdCredentials(int, IdentityInformationForUi const &, AppInformationForUi const &, WindissectOpaque &, unsigned char * *, unsigned long *, unsigned long *, long &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ErrorCode@ModernApiHelperFunctions@@UEAAJPEAUIAsyncInfo@@PEAJ@Z
    virtual long get_ErrorCode(IAsyncInfo *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FamilyInformation@ModernApiHelperFunctions@@UEAAJPEAPEAUIFamilySettingsStatics@Internal@FamilySafety@Windows@@@Z
    virtual long get_FamilyInformation(::Windows::FamilySafety::Internal::IFamilySettingsStatics * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResponseData@ModernApiHelperFunctions@@UEAAJPEAUIWebAuthenticationResult@Web@Authentication@Security@Windows@@PEAPEAUHSTRING__@@@Z
    virtual long get_ResponseData(::Windows::Security::Authentication::Web::IWebAuthenticationResult *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResponseErrorDetail@ModernApiHelperFunctions@@UEAAJPEAUIWebAuthenticationResult@Web@Authentication@Security@Windows@@PEAI@Z
    virtual long get_ResponseErrorDetail(::Windows::Security::Authentication::Web::IWebAuthenticationResult *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResponseStatus@ModernApiHelperFunctions@@UEAAJPEAUIWebAuthenticationResult@Web@Authentication@Security@Windows@@PEAW4WebAuthenticationStatus@3456@@Z
    virtual long get_ResponseStatus(::Windows::Security::Authentication::Web::IWebAuthenticationResult *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@ModernApiHelperFunctions@@UEAAJPEAUIAsyncInfo@@PEAW4AsyncStatus@Foundation@Windows@ABI@@@Z
    virtual long get_Status(IAsyncInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@ModernApiHelperFunctions@@UEAAJPEAU?$IAsyncOperation@PEAVWebAuthenticationResult@Web@Authentication@Security@Windows@@@Foundation@Windows@@PEAU?$IAsyncOperationCompletedHandler@PEAVWebAuthenticationResult@Web@Authentication@Security@Windows@@@34@@Z
    virtual long put_Completed(WindissectOpaque *, WindissectOpaque *);
};
