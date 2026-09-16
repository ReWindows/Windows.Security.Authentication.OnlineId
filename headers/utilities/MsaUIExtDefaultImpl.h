#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 8 member(s).
class MsaUIExtDefaultImpl {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearThreadClientContext@MsaUIExtDefaultImpl@@YAJPEAX@Z
    long ClearThreadClientContext(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseClientContext@MsaUIExtDefaultImpl@@YAJPEAX@Z
    long CloseClientContext(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClientContext@MsaUIExtDefaultImpl@@YAJKPEAUHWND__@@PEBGPEAPEAX@Z
    long CreateClientContext(unsigned long, HWND__*, unsigned short const *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClientContextFromWab@MsaUIExtDefaultImpl@@YAJPEAXPEAPEAX@Z
    long CreateClientContextFromWab(void *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchWebAuthFlow@MsaUIExtDefaultImpl@@YAJPEAVIModernApiHelperFunctions@@PEAXPEBG2PEAPEAU?$IAsyncOperation@PEAVWebAuthenticationResult@Web@Authentication@Security@Windows@@@Foundation@Windows@@@Z
    long LaunchWebAuthFlow(IModernApiHelperFunctions *, void *, unsigned short const *, unsigned short const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunWizard@MsaUIExtDefaultImpl@@YAJPEAVIComFunctions@@W4MSA_TASK_FLOW_ID@@PEAUHWND__@@PEBG@Z
    long RunWizard(IComFunctions *, int, HWND__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThreadClientContext@MsaUIExtDefaultImpl@@YAJPEAX@Z
    long SetThreadClientContext(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyCXHRedirectionIsEnabled@MsaUIExtDefaultImpl@@YAJXZ
    long VerifyCXHRedirectionIsEnabled();
};
