#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 19 member(s).
namespace Windows::Security::Authentication::Identity::Core {
class MicrosoftAccountMultiFactorGetSessionsResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MicrosoftAccountMultiFactorGetSessionsResult@Core@Identity@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MicrosoftAccountMultiFactorGetSessionsResult@Core@Identity@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MicrosoftAccountMultiFactorGetSessionsResult@Core@Identity@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MicrosoftAccountMultiFactorGetSessionsResult@Core@Identity@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MicrosoftAccountMultiFactorGetSessionsResult@Core@Identity@Authentication@Security@Windows@@QEAA@XZ
    MicrosoftAccountMultiFactorGetSessionsResult();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MicrosoftAccountMultiFactorGetSessionsResult@Core@Identity@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MicrosoftAccountMultiFactorGetSessionsResult@Core@Identity@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MicrosoftAccountMultiFactorGetSessionsResult@Core@Identity@Authentication@Security@Windows@@QEAAJPEAV?$Vector@PEAVMicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVMicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@@Internal@Collections@Foundation@6@U?$DefaultLifetimeTraits@PEAVMicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@@89Foundation@6@U?$DefaultVectorOptions@PEAVMicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@@89Foundation@6@@Internal@Collections@Foundation@6@W4MicrosoftAccountMultiFactorServiceResponse@23456@@Z
    long RuntimeClassInitialize(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ServiceResponse@MicrosoftAccountMultiFactorGetSessionsResult@Core@Identity@Authentication@Security@Windows@@UEAAJPEAW4MicrosoftAccountMultiFactorServiceResponse@23456@@Z
    virtual long get_ServiceResponse(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Sessions@MicrosoftAccountMultiFactorGetSessionsResult@Core@Identity@Authentication@Security@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVMicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@@Collections@Foundation@6@@Z
    virtual long get_Sessions(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MicrosoftAccountMultiFactorGetSessionsResult@Core@Identity@Authentication@Security@Windows@@UEAA@XZ
    virtual ~MicrosoftAccountMultiFactorGetSessionsResult();
};
} // namespace Windows::Security::Authentication::Identity::Core
