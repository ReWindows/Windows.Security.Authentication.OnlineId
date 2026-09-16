#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 5 member(s).
class SspiLocalMemoryManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@SspiLocalMemoryManager@@UEAAPEAX_K@Z
    virtual void * Allocate(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@SspiLocalMemoryManager@@UEAAXPEAX@Z
    virtual void Free(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SspiLocalMemoryManager@@UEAA@XZ
    virtual ~SspiLocalMemoryManager();
};
