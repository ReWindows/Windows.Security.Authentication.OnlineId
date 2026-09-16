#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 6 member(s).
namespace Windows::Internal {
class String {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@String@Internal@Windows@@QEAAJPEBGI@Z
    long Initialize(unsigned short const *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@String@Internal@Windows@@QEAAXXZ
    void Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1String@Internal@Windows@@QEAA@XZ
    ~String();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeAndAssignOnSuccess@String@Internal@Windows@@CAJJPEAUHSTRING__@@PEAPEAU4@@Z
    static long FreeAndAssignOnSuccess(long, HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z
    long _InitializeHelper(unsigned short const *);
};
} // namespace Windows::Internal
