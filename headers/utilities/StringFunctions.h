#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 5 member(s).
class StringFunctions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?wcscmp@StringFunctions@@UEAAHPEBG0@Z
    virtual int wcscmp(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?wcsstr@StringFunctions@@UEAAPEAGPEBG0@Z
    virtual unsigned short * wcsstr(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?wcstol@StringFunctions@@UEAAJPEBGPEAPEAGH@Z
    virtual long wcstol(unsigned short const *, unsigned short * *, int);
};
