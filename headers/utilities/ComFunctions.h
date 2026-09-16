#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 5 member(s).
class ComFunctions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoCreateInstance@ComFunctions@@UEAAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAX@Z
    virtual long CoCreateInstance(_GUID const &, IUnknown *, unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoGetCallerTID@ComFunctions@@UEAAJPEAK@Z
    virtual long CoGetCallerTID(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoUninitialize@ComFunctions@@UEAAXXZ
    virtual void CoUninitialize();
};
