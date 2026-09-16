#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 5 member(s).
class MsaTracingInternal {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseFileName@MsaTracingInternal@@YAPEBDPEBD@Z
    char const * GetBaseFileName(char const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTraceFunctionEnterEnabled@MsaTracingInternal@@YA_NXZ
    bool IsTraceFunctionEnterEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceFunctionEnter@MsaTracingInternal@@YAKPEBD0KPEBG@Z
    unsigned long TraceFunctionEnter(char const *, char const *, unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceFunctionExit@MsaTracingInternal@@YAKPEBDJ@Z
    unsigned long TraceFunctionExit(char const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceFunctionWarning@MsaTracingInternal@@YAKPEBDJ@Z
    unsigned long TraceFunctionWarning(char const *, long);
};
