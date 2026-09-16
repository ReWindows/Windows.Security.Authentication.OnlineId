#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 3 member(s).
class ConstrainedImpersonateLoggedOnUser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DuplicateImpersonationToken@ConstrainedImpersonateLoggedOnUser@@QEAAJPEAPEAX@Z
    long DuplicateImpersonationToken(void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConstrainedImpersonateLoggedOnUser@@QEAA@XZ
    ~ConstrainedImpersonateLoggedOnUser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateImpersonationToken@ConstrainedImpersonateLoggedOnUser@@AEAAJXZ
    long GenerateImpersonationToken();
};
