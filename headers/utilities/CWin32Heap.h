#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 7 member(s).
namespace ATL {
class CWin32Heap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@CWin32Heap@ATL@@UEAAPEAX_K@Z
    virtual void * Allocate(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@CWin32Heap@ATL@@UEAAXPEAX@Z
    virtual void Free(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CWin32Heap@ATL@@UEAA_KPEAX@Z
    virtual uint64_t GetSize(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reallocate@CWin32Heap@ATL@@UEAAPEAXPEAX_K@Z
    virtual void * Reallocate(void *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWin32Heap@ATL@@UEAA@XZ
    virtual ~CWin32Heap();
};
} // namespace ATL
