#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 4 member(s).
class MemoryFunctions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocalAlloc@MemoryFunctions@@UEAAPEAXI_K@Z
    virtual void * LocalAlloc(unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocalFree@MemoryFunctions@@UEAAPEAXPEAX@Z
    virtual void * LocalFree(void *);
};
