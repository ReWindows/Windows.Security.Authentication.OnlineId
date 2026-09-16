#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 3 member(s).
class ErrorVerifier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAgainstList@ErrorVerifier@@SAXPEBDJ_KPEBJ@Z
    static void CheckAgainstList(char const *, long, uint64_t, long const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ErrorVerifier@@QEAA@PEBDPEAJ_KPEBJ@Z
    ErrorVerifier(char const *, long *, uint64_t, long const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ErrorVerifier@@QEAA@XZ
    ~ErrorVerifier();
};
