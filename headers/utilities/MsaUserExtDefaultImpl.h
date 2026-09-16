#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 3 member(s).
class MsaUserExtDefaultImpl {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIfAppTrusted@MsaUserExtDefaultImpl@@YAJW4MSA_APP_LIST_QUALIFIER@@PEBGPEAH@Z
    long CheckIfAppTrusted(int, unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatUserDisplayName@MsaUserExtDefaultImpl@@YAJPEBG0PEAPEAGPEAH@Z
    long FormatUserDisplayName(unsigned short const *, unsigned short const *, unsigned short * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsChildAccount@MsaUserExtDefaultImpl@@YAJPEAVIModernApiHelperFunctions@@PEBGPEAH@Z
    long IsChildAccount(IModernApiHelperFunctions *, unsigned short const *, int *);
};
