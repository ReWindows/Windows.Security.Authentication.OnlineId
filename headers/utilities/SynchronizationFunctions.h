#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 5 member(s).
class SynchronizationFunctions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateEvent@SynchronizationFunctions@@UEAAPEAXPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z
    virtual void * _CreateEvent(_SECURITY_ATTRIBUTES *, int, int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateEventEx@SynchronizationFunctions@@UEAAPEAXPEAU_SECURITY_ATTRIBUTES@@PEBGKK@Z
    virtual void * _CreateEventEx(_SECURITY_ATTRIBUTES *, unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WaitForMultipleObjectsEx@SynchronizationFunctions@@UEAAKKPEBQEAXHKH@Z
    virtual unsigned long _WaitForMultipleObjectsEx(unsigned long, void * const *, int, unsigned long, int);
};
