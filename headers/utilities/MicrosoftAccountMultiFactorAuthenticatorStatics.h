#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 27 member(s).
namespace Windows::Security::Authentication::Identity::Core {
class MicrosoftAccountMultiFactorAuthenticatorStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MicrosoftAccountMultiFactorAuthenticatorStatics@Core@Identity@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MicrosoftAccountMultiFactorAuthenticatorStatics@Core@Identity@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MicrosoftAccountMultiFactorAuthenticatorStatics@Core@Identity@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MicrosoftAccountMultiFactorAuthenticatorStatics@Core@Identity@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@MicrosoftAccountMultiFactorAuthenticatorStatics@Core@Identity@Authentication@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@MicrosoftAccountMultiFactorAuthenticatorStatics@Core@Identity@Authentication@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MicrosoftAccountMultiFactorAuthenticatorStatics@Core@Identity@Authentication@Security@Windows@@QEAA@XZ
    MicrosoftAccountMultiFactorAuthenticatorStatics();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MicrosoftAccountMultiFactorAuthenticatorStatics@Core@Identity@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MicrosoftAccountMultiFactorAuthenticatorStatics@Core@Identity@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@MicrosoftAccountMultiFactorAuthenticatorStatics@Core@Identity@Authentication@Security@Windows@@UEAAJPEAPEAUIMicrosoftAccountMultiFactorAuthenticationManager@23456@@Z
    virtual long get_Current(::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager * *);
};
} // namespace Windows::Security::Authentication::Identity::Core
