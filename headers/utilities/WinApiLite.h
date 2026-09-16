#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 48 member(s).
class WinApiLite {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseHandle@WinApiLite@@UEAAHPEAX@Z
    virtual int CloseHandle(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertSidToStringSidW@WinApiLite@@UEAAHPEAXPEAPEAG@Z
    virtual int ConvertSidToStringSidW(void *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWellKnownSid@WinApiLite@@UEAAHW4WELL_KNOWN_SID_TYPE@@PEAX1PEAK@Z
    virtual int CreateWellKnownSid(int, void *, void *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CryptProtectData@WinApiLite@@UEAAHPEAU_CRYPTOAPI_BLOB@@PEBG0PEAXPEAU_CRYPTPROTECT_PROMPTSTRUCT@@K0@Z
    virtual int CryptProtectData(_CRYPTOAPI_BLOB *, unsigned short const *, _CRYPTOAPI_BLOB *, void *, _CRYPTPROTECT_PROMPTSTRUCT *, unsigned long, _CRYPTOAPI_BLOB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CryptProtectMemory@WinApiLite@@UEAAHPEAEKK@Z
    virtual int CryptProtectMemory(unsigned char *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CryptUnprotectData@WinApiLite@@UEAAHPEAU_CRYPTOAPI_BLOB@@PEAPEAG0PEAXPEAU_CRYPTPROTECT_PROMPTSTRUCT@@K0@Z
    virtual int CryptUnprotectData(_CRYPTOAPI_BLOB *, unsigned short * *, _CRYPTOAPI_BLOB *, void *, _CRYPTPROTECT_PROMPTSTRUCT *, unsigned long, _CRYPTOAPI_BLOB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CryptUnprotectMemory@WinApiLite@@UEAAHPEAEKK@Z
    virtual int CryptUnprotectMemory(unsigned char *, unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComputerNameW@WinApiLite@@UEAAHPEAGPEAK@Z
    virtual int GetComputerNameW(unsigned short *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentProcess@WinApiLite@@UEAAPEAXXZ
    virtual void * GetCurrentProcess();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentThread@WinApiLite@@UEAAPEAXXZ
    virtual void * GetCurrentThread();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentThreadId@WinApiLite@@UEAAKXZ
    virtual unsigned long GetCurrentThreadId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileVersionInfoExW@WinApiLite@@UEAAHKPEBGKKPEAX@Z
    virtual int GetFileVersionInfoExW(unsigned long, unsigned short const *, unsigned long, unsigned long, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileVersionInfoSizeExW@WinApiLite@@UEAAKKPEBGPEAK@Z
    virtual unsigned long GetFileVersionInfoSizeExW(unsigned long, unsigned short const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastError@WinApiLite@@UEAAKXZ
    virtual unsigned long GetLastError();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModuleFileNameW@WinApiLite@@UEAAKPEAUHINSTANCE__@@PEAGK@Z
    virtual unsigned long GetModuleFileNameW(HINSTANCE__*, unsigned short *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModuleHandleExW@WinApiLite@@UEAAHKPEBGPEAPEAUHINSTANCE__@@@Z
    virtual int GetModuleHandleExW(unsigned long, unsigned short const *, HINSTANCE__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessIdOfThread@WinApiLite@@UEAAKPEAX@Z
    virtual unsigned long GetProcessIdOfThread(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProfileType@WinApiLite@@UEAAHPEAK@Z
    virtual int GetProfileType(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSecurityDescriptorDacl@WinApiLite@@UEAAHPEAXPEAHPEAPEAU_ACL@@1@Z
    virtual int GetSecurityDescriptorDacl(void *, int *, _ACL * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSecurityDescriptorSacl@WinApiLite@@UEAAHPEAXPEAHPEAPEAU_ACL@@1@Z
    virtual int GetSecurityDescriptorSacl(void *, int *, _ACL * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemMetrics@WinApiLite@@UEAAHH@Z
    virtual int GetSystemMetrics(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemTimeAsFileTime@WinApiLite@@UEAAXPEAU_FILETIME@@@Z
    virtual void GetSystemTimeAsFileTime(_FILETIME *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadDesktop@WinApiLite@@UEAAPEAUHDESK__@@K@Z
    virtual HDESK__* GetThreadDesktop(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadPreferredUILanguages@WinApiLite@@UEAAHKPEAKPEAG0@Z
    virtual int GetThreadPreferredUILanguages(unsigned long, unsigned long *, unsigned short *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTokenInformation@WinApiLite@@UEAAHPEAXW4_TOKEN_INFORMATION_CLASS@@0KPEAK@Z
    virtual int GetTokenInformation(void *, int, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTokenInformationBytes@WinApiLite@@UEAAHPEAXW4_TOKEN_INFORMATION_CLASS@@PEAEKPEAK@Z
    virtual int GetTokenInformationBytes(void *, int, unsigned char *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserDefaultLocaleName@WinApiLite@@UEAAHPEAGH@Z
    virtual int GetUserDefaultLocaleName(unsigned short *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserObjectInformationW@WinApiLite@@UEAAHPEAXHPEAEKPEAK@Z
    virtual int GetUserObjectInformationW(void *, int, unsigned char *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersionEx2@WinApiLite@@UEAAHPEAU_OSVERSIONINFOEXW@@@Z
    virtual int GetVersionEx2(_OSVERSIONINFOEXW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersionExW@WinApiLite@@UEAAHPEAU_OSVERSIONINFOW@@@Z
    virtual int GetVersionExW(_OSVERSIONINFOW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImpersonateLoggedOnUser@WinApiLite@@UEAAHPEAX@Z
    virtual int ImpersonateLoggedOnUser(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidSid@WinApiLite@@UEAAHPEAX@Z
    virtual int IsValidSid(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadImageW@WinApiLite@@UEAAPEAXPEAUHINSTANCE__@@PEBGIHHI@Z
    virtual void * LoadImageW(HINSTANCE__*, unsigned short const *, unsigned int, int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogonUserExExW@WinApiLite@@UEAAHPEBG00KKPEAU_TOKEN_GROUPS@@PEAPEAX2@Z
    virtual int LogonUserExExW(unsigned short const *, unsigned short const *, unsigned short const *, unsigned long, unsigned long, _TOKEN_GROUPS *, void * *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupAccountNameW@WinApiLite@@UEAAHPEBG0PEAXPEAKPEAG2PEAW4_SID_NAME_USE@@@Z
    virtual int LookupAccountNameW(unsigned short const *, unsigned short const *, void *, unsigned long *, unsigned short *, unsigned long *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsaCallAuthenticationPackage@WinApiLite@@UEAAJPEAXK0KPEAPEAXPEAKPEAJ@Z
    virtual long LsaCallAuthenticationPackage(void *, unsigned long, void *, unsigned long, void * *, unsigned long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsaConnectUntrusted@WinApiLite@@UEAAJPEAPEAX@Z
    virtual long LsaConnectUntrusted(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsaDeregisterLogonProcess@WinApiLite@@UEAAJPEAX@Z
    virtual long LsaDeregisterLogonProcess(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsaLookupAuthenticationPackage@WinApiLite@@UEAAJPEAX0PEAK@Z
    virtual long LsaLookupAuthenticationPackage(void *, void *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsaRegisterLogonProcess@WinApiLite@@UEAAJPEAXPEAPEAXPEAK@Z
    virtual long LsaRegisterLogonProcess(void *, void * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenProcessToken@WinApiLite@@UEAAHPEAXKPEAPEAX@Z
    virtual int OpenProcessToken(void *, unsigned long, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenThread@WinApiLite@@UEAAPEAXKHK@Z
    virtual void * OpenThread(unsigned long, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenThreadToken@WinApiLite@@UEAAHPEAXKHPEAPEAX@Z
    virtual int OpenThreadToken(void *, unsigned long, int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevertToSelf@WinApiLite@@UEAAHXZ
    virtual int RevertToSelf();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNamedSecurityInfoW@WinApiLite@@UEAAKPEAGW4_SE_OBJECT_TYPE@@KPEAX2PEAU_ACL@@3@Z
    virtual unsigned long SetNamedSecurityInfoW(unsigned short *, int, unsigned long, void *, void *, _ACL *, _ACL *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerQueryValueW@WinApiLite@@UEAAHPEBXPEBGPEAPEAXPEAI@Z
    virtual int VerQueryValueW(void const *, unsigned short const *, void * *, unsigned int *);
};
