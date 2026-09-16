#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 14 member(s).
class RegKey {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@RegKey@@UEAAJPEAUHKEY__@@PEBGPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAK@Z
    virtual long Create(HKEY__*, unsigned short const *, unsigned short *, unsigned long, unsigned long, _SECURITY_ATTRIBUTES *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteSubKey@RegKey@@UEAAJPEBG@Z
    virtual long DeleteSubKey(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumKey@RegKey@@UEAAJKPEAGPEAKPEAU_FILETIME@@@Z
    virtual long EnumKey(unsigned long, unsigned short *, unsigned long *, _FILETIME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@RegKey@@UEAAJPEAUHKEY__@@PEBGK@Z
    virtual long Open(HKEY__*, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryDWORDValue@RegKey@@UEAAJPEBGAEAK@Z
    virtual long QueryDWORDValue(unsigned short const *, unsigned long &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDWORDValue@RegKey@@UEAAJPEBGK@Z
    virtual long SetDWORDValue(unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeySecurity@RegKey@@UEAAJKPEAX@Z
    virtual long SetKeySecurity(unsigned long, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMultiStringValue@RegKey@@UEAAJPEBG0@Z
    virtual long SetMultiStringValue(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStringValue@RegKey@@UEAAJPEBG0K@Z
    virtual long SetStringValue(unsigned short const *, unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@RegKey@@UEAAJPEAUHKEY__@@PEBG11@Z
    virtual long SetValue(HKEY__*, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegKey@@UEAA@XZ
    virtual ~RegKey();
};
