#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 20 member(s).
namespace Windows::Security::Authentication::Identity::Core {
class MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo@Core@Identity@Authentication@Security@Windows@@QEAA@XZ
    MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo@Core@Identity@Authentication@Security@Windows@@QEAAJPEAV?$Vector@PEAVMicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVMicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@@Internal@Collections@Foundation@6@U?$DefaultLifetimeTraits@PEAVMicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@@89Foundation@6@U?$DefaultVectorOptions@PEAVMicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@@89Foundation@6@@Internal@Collections@Foundation@6@PEAV?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@89Foundation@6@W4MicrosoftAccountMultiFactorServiceResponse@23456@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ServiceResponse@MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAW4MicrosoftAccountMultiFactorServiceResponse@23456@@Z
    virtual long get_ServiceResponse(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Sessions@MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVMicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@@Collections@Foundation@6@@Z
    virtual long get_Sessions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UnregisteredAccounts@MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@6@@Z
    virtual long get_UnregisteredAccounts(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAA@XZ
    virtual ~MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo();
};
} // namespace Windows::Security::Authentication::Identity::Core
