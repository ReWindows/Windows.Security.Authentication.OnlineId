#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 3 member(s).
class PPRedactedStringW {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@PPRedactedStringW@@QEAAPEBGXZ
    unsigned short const * GetString();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PPRedactedStringW@@QEAA@XZ
    ~PPRedactedStringW();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRedactedString@PPRedactedStringW@@MEAAPEBGXZ
    virtual unsigned short const * GetRedactedString();
};
