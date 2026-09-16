#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 2 member(s).
class UserAwareCallerIdentity {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessId@UserAwareCallerIdentity@@YAJPEAK@Z
    long GetCallingProcessId(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessPackageFullName@UserAwareCallerIdentity@@YAJPEAPEAG@Z
    long GetCallingProcessPackageFullName(unsigned short * *);
};
