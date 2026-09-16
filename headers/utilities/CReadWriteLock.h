#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 3 member(s).
class CReadWriteLock {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CReadWriteLock@@QEAA@XZ
    CReadWriteLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClaimShareLock@CReadWriteLock@@QEAA_NXZ
    bool ClaimShareLock();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CReadWriteLock@@QEAA@XZ
    ~CReadWriteLock();
};
