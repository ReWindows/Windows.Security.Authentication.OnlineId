#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 5 member(s).
class LocalAllocMemoryManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@LocalAllocMemoryManager@@UEAAPEAX_K@Z
    virtual void * Allocate(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@LocalAllocMemoryManager@@UEAAXPEAX@Z
    virtual void Free(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LocalAllocMemoryManager@@UEAA@XZ
    virtual ~LocalAllocMemoryManager();
};
