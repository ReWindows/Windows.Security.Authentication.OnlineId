#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 5 member(s).
class AutoImpersonateClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Impersonate@AutoImpersonateClient@@QEAAJPEAX@Z
    long Impersonate(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoImpersonateClient@@UEAA@XZ
    virtual ~AutoImpersonateClient();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsThreadImpersonated@AutoImpersonateClient@@IEAAJAEA_N@Z
    long IsThreadImpersonated(bool &);
};
