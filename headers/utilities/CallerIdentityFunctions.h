#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 10 member(s).
class CallerIdentityFunctions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppContainerFreeMemory@CallerIdentityFunctions@@UEAAXPEAX@Z
    virtual void AppContainerFreeMemory(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppContainerLookupDisplayName@CallerIdentityFunctions@@UEAAJPEAXPEAPEAG@Z
    virtual long AppContainerLookupDisplayName(void *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoGetCallerTID@CallerIdentityFunctions@@UEAAJPEAK@Z
    virtual long CoGetCallerTID(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessHandle@CallerIdentityFunctions@@UEAAJKPEAPEAX@Z
    virtual long GetCallingProcessHandle(unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowHandleForCallingThread@CallerIdentityFunctions@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetCoreWindowHandleForCallingThread(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPackageId@CallerIdentityFunctions@@UEAAJPEAIPEAE@Z
    virtual long GetCurrentPackageId(unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryApplicationService@CallerIdentityFunctions@@UEAAJKAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryApplicationService(unsigned long, _GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyWindowIsInCallingProcessAppContainer@CallerIdentityFunctions@@UEAAJPEAUHWND__@@@Z
    virtual long VerifyWindowIsInCallingProcessAppContainer(HWND__*);
};
