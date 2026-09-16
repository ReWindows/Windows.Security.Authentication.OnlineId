#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 3 member(s).
class CredentialCollectionFunctions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CredUIPromptForWindowsCredentialsW@CredentialCollectionFunctions@@UEAAKPEAU_CREDUI_INFOW@@KPEAKPEBXKPEAPEAX1PEAHK@Z
    virtual unsigned long CredUIPromptForWindowsCredentialsW(_CREDUI_INFOW *, unsigned long, unsigned long *, void const *, unsigned long, void * *, unsigned long *, int *, unsigned long);
};
