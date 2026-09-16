#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 3 member(s).
class ErrorHandlingUtilities {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapseError@ErrorHandlingUtilities@@SAJJ@Z
    static long CollapseError(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapInternalErrorToExternal@ErrorHandlingUtilities@@SAJJ_NPEA_N@Z
    static long MapInternalErrorToExternal(long, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapRpcError@ErrorHandlingUtilities@@SAJJ@Z
    static long MapRpcError(long);
};
