#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 21 member(s).
class CallerIdentity {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z
    long GetCallingProcessHandle(unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z
    long GetCallingProcessHandle(unsigned long, int, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z
    long GetCallingProcessPackageFullName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreApplicationForCallingProcess@CallerIdentity@@YAJAEBU_GUID@@PEAPEAX@Z
    long GetCoreApplicationForCallingProcess(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowForCallingThread@CallerIdentity@@YAJAEBU_GUID@@PEAPEAX@Z
    long GetCoreWindowForCallingThread(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowForCurrentThread@CallerIdentity@@YAJAEBU_GUID@@PEAPEAX@Z
    long GetCoreWindowForCurrentThread(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowHandleForCallingThread@CallerIdentity@@YAJPEAPEAUHWND__@@@Z
    long GetCoreWindowHandleForCallingThread(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowHandleForCurrentThread@CallerIdentity@@YAJPEAPEAUHWND__@@@Z
    long GetCoreWindowHandleForCurrentThread(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z
    long GetImmersiveAppIdFromWindow(HWND__*, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetPackageFullNameFromProcess(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z
    long GetPackageSidFromProcess(unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z
    long GetPackageSidFromProcessHandle(void *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z
    long GetPackageSidFromProcessToken(void *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageSidFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAX@Z
    long GetPackageSidFromWindow(HWND__*, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetProcessAppId(void *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z
    long GetWeakWindowAppId(HWND__*, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHostedWindow@CallerIdentity@@YAJPEAUHWND__@@PEAH@Z
    long IsHostedWindow(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z
    long IsProcessAppContainer(void *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyWindowIsInCallingProcessAppContainer@CallerIdentity@@YAJPEAUHWND__@@@Z
    long VerifyWindowIsInCallingProcessAppContainer(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyWindowIsInProcessByAppContainerSid@CallerIdentity@@YAJPEAUHWND__@@PEAX@Z
    long VerifyWindowIsInProcessByAppContainerSid(HWND__*, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyWindowIsInSpecifiedApplication@CallerIdentity@@YAJPEAUHWND__@@PEBGPEAUIUnknown@@@Z
    long VerifyWindowIsInSpecifiedApplication(HWND__*, unsigned short const *, IUnknown *);
};
