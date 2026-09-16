#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 6 member(s).
class RegistryHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteBufferFromRegistry@RegistryHelper@@QEAAJPEAUHKEY__@@PEBG1@Z
    long DeleteBufferFromRegistry(HKEY__*, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteSubkeyFromRegistry@RegistryHelper@@QEAAJPEAUHKEY__@@PEBG@Z
    long DeleteSubkeyFromRegistry(HKEY__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootKey@RegistryHelper@@QEAAJPEAVIRegistryFunctions@@AEBQEAUHKEY__@@PEA_NPEAPEAU3@@Z
    long GetRootKey(IRegistryFunctions *, HKEY__* const &, bool *, HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadBufferFromRegistry@RegistryHelper@@QEAAJPEAUHKEY__@@PEBG1KPEAPEAEPEAK@Z
    long ReadBufferFromRegistry(HKEY__*, unsigned short const *, unsigned short const *, unsigned long, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteBufferToRegistry@RegistryHelper@@QEAAJPEAUHKEY__@@PEBG1KPEAEK@Z
    long WriteBufferToRegistry(HKEY__*, unsigned short const *, unsigned short const *, unsigned long, unsigned char *, unsigned long);
};
