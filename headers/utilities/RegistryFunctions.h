#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 20 member(s).
class RegistryFunctions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegCloseKey@RegistryFunctions@@UEAAJPEAUHKEY__@@@Z
    virtual long RegCloseKey(HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegCreateKeyExW@RegistryFunctions@@UEAAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU2@PEAK@Z
    virtual long RegCreateKeyExW(HKEY__*, unsigned short const *, unsigned long, unsigned short *, unsigned long, unsigned long, _SECURITY_ATTRIBUTES *, HKEY__* *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegDeleteKeyValueW@RegistryFunctions@@UEAAJPEAUHKEY__@@PEBG1@Z
    virtual long RegDeleteKeyValueW(HKEY__*, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegDeleteKeyW@RegistryFunctions@@UEAAJPEAUHKEY__@@PEBG@Z
    virtual long RegDeleteKeyW(HKEY__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegDeleteTreeW@RegistryFunctions@@UEAAJPEAUHKEY__@@PEBG@Z
    virtual long RegDeleteTreeW(HKEY__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegEnumKeyExW@RegistryFunctions@@UEAAJPEAUHKEY__@@KPEAGPEAK212PEAU_FILETIME@@@Z
    virtual long RegEnumKeyExW(HKEY__*, unsigned long, unsigned short *, unsigned long *, unsigned long *, unsigned short *, unsigned long *, _FILETIME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegEnumKeyW@RegistryFunctions@@UEAAJPEAUHKEY__@@KPEAGK@Z
    virtual long RegEnumKeyW(HKEY__*, unsigned long, unsigned short *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegEnumValueW@RegistryFunctions@@UEAAJPEAUHKEY__@@KPEAGPEAK22PEAE2@Z
    virtual long RegEnumValueW(HKEY__*, unsigned long, unsigned short *, unsigned long *, unsigned long *, unsigned long *, unsigned char *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegGetStringValue@RegistryFunctions@@UEAAJPEAUHKEY__@@PEBG1PEAGPEAK@Z
    virtual long RegGetStringValue(HKEY__*, unsigned short const *, unsigned short const *, unsigned short *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegGetValueEx@RegistryFunctions@@UEAAJPEAUHKEY__@@PEBG1KPEAKPEAE2@Z
    virtual long RegGetValueEx(HKEY__*, unsigned short const *, unsigned short const *, unsigned long, unsigned long *, unsigned char *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegGetValueW@RegistryFunctions@@UEAAJPEAUHKEY__@@PEBG1KPEAKPEAX2@Z
    virtual long RegGetValueW(HKEY__*, unsigned short const *, unsigned short const *, unsigned long, unsigned long *, void *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegOpenCurrentUser@RegistryFunctions@@UEAAJKPEAPEAUHKEY__@@@Z
    virtual long RegOpenCurrentUser(unsigned long, HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegOpenKeyExW@RegistryFunctions@@UEAAJPEAUHKEY__@@PEBGKKPEAPEAU2@@Z
    virtual long RegOpenKeyExW(HKEY__*, unsigned short const *, unsigned long, unsigned long, HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegQueryInfoKeyW@RegistryFunctions@@UEAAJPEAUHKEY__@@PEAGPEAK22222222PEAU_FILETIME@@@Z
    virtual long RegQueryInfoKeyW(HKEY__*, unsigned short *, unsigned long *, unsigned long *, unsigned long *, unsigned long *, unsigned long *, unsigned long *, unsigned long *, unsigned long *, unsigned long *, _FILETIME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegQueryInfoKeyW@RegistryFunctions@@UEAAJPEAUHKEY__@@PEAK@Z
    virtual long RegQueryInfoKeyW(HKEY__*, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegQueryValueExW@RegistryFunctions@@UEAAJPEAUHKEY__@@PEBGPEAK2PEAE2@Z
    virtual long RegQueryValueExW(HKEY__*, unsigned short const *, unsigned long *, unsigned long *, unsigned char *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegSetKeyValueW@RegistryFunctions@@UEAAJPEAUHKEY__@@PEBG1KPEBXK@Z
    virtual long RegSetKeyValueW(HKEY__*, unsigned short const *, unsigned short const *, unsigned long, void const *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegistryFunctions@@UEAA@XZ
    virtual ~RegistryFunctions();
};
