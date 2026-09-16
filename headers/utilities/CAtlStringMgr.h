#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 7 member(s).
namespace ATL {
class CAtlStringMgr {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z
    virtual WindissectOpaque * Allocate(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ
    virtual WindissectOpaque * Clone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z
    virtual void Free(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ
    virtual WindissectOpaque * GetNilString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z
    virtual WindissectOpaque * Reallocate(WindissectOpaque *, int, int);
};
} // namespace ATL
