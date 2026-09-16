#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 6 member(s).
class RefCountedStringArray {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@RefCountedStringArray@@QEAAJPEBGH@Z
    long Add(unsigned short const *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RefCountedStringArray@@QEAA@AEBV0@@Z
    RefCountedStringArray(RefCountedStringArray const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RefCountedStringArray@@QEAA@XZ
    RefCountedStringArray();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetArrayLength@RefCountedStringArray@@QEAAJK@Z
    long SetArrayLength(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RefCountedStringArray@@QEAA@XZ
    ~RefCountedStringArray();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@RefCountedStringArray@@AEAAXXZ
    void Clear();
};
