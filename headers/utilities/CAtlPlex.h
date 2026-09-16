#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 2 member(s).
namespace ATL {
class CAtlPlex {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z
    static WindissectOpaque * Create(WindissectOpaque * &, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ
    void FreeDataChain();
};
} // namespace ATL
