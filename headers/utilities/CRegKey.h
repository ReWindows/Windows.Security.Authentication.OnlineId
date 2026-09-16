#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 7 member(s).
namespace ATL {
class CRegKey {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CRegKey@ATL@@QEAAJXZ
    long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAK@Z
    long Create(HKEY__*, unsigned short const *, unsigned short *, unsigned long, unsigned long, _SECURITY_ATTRIBUTES *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteSubKey@CRegKey@ATL@@QEAAJPEBG@Z
    long DeleteSubKey(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z
    long Open(HKEY__*, unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDWORDValue@CRegKey@ATL@@QEAAJPEBGK@Z
    long SetDWORDValue(unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStringValue@CRegKey@ATL@@QEAAJPEBG0K@Z
    long SetStringValue(unsigned short const *, unsigned short const *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRegKey@ATL@@QEAA@XZ
    ~CRegKey();
};
} // namespace ATL
