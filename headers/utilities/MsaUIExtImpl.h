#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 8 member(s).
class MsaUIExtImpl {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearThreadClientContext@MsaUIExtImpl@@YAJPEAX@Z
    long ClearThreadClientContext(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseClientContext@MsaUIExtImpl@@YAJPEAX@Z
    long CloseClientContext(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClientContext@MsaUIExtImpl@@YAJKPEAUHWND__@@PEBGPEAPEAX@Z
    long CreateClientContext(unsigned long, HWND__*, unsigned short const *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClientContextFromWab@MsaUIExtImpl@@YAJPEAXPEAPEAX@Z
    long CreateClientContextFromWab(void *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CredUIPromptForWindowsCredentialsW@MsaUIExtImpl@@YAKPEAU_CREDUI_INFOW@@KPEAKPEBXKPEAPEAX1PEAHK@Z
    unsigned long CredUIPromptForWindowsCredentialsW(_CREDUI_INFOW *, unsigned long, unsigned long *, void const *, unsigned long, void * *, unsigned long *, int *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchWebAuthFlow@MsaUIExtImpl@@YAJPEAVIModernApiHelperFunctions@@PEAXPEBG2PEAPEAU?$IAsyncOperation@PEAVWebAuthenticationResult@Web@Authentication@Security@Windows@@@Foundation@Windows@@@Z
    long LaunchWebAuthFlow(IModernApiHelperFunctions *, void *, unsigned short const *, unsigned short const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunWizard@MsaUIExtImpl@@YAJPEAVIComFunctions@@W4MSA_TASK_FLOW_ID@@PEAUHWND__@@PEBG@Z
    long RunWizard(IComFunctions *, int, HWND__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThreadClientContext@MsaUIExtImpl@@YAJPEAX@Z
    long SetThreadClientContext(void *);
};
