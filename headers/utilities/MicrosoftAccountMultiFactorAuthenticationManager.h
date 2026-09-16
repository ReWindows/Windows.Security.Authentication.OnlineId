#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 33 member(s).
namespace Windows::Security::Authentication::Identity::Core {
class MicrosoftAccountMultiFactorAuthenticationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDeviceAsync@MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@W4MicrosoftAccountMultiFactorServiceResponse@Core@Identity@Authentication@Security@Windows@@@Foundation@6@@Z
    virtual long AddDeviceAsync(HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApproveSessionAsync@MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@UEAAJW4MicrosoftAccountMultiFactorSessionAuthenticationStatus@23456@PEAUHSTRING__@@1W4MicrosoftAccountMultiFactorAuthenticationType@23456@PEAPEAU?$IAsyncOperation@W4MicrosoftAccountMultiFactorServiceResponse@Core@Identity@Authentication@Security@Windows@@@Foundation@6@@Z
    virtual long ApproveSessionAsync(int, HSTRING__*, HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApproveSessionUsingAuthSessionInfoAsync@MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@UEAAJW4MicrosoftAccountMultiFactorSessionAuthenticationStatus@23456@PEAUIMicrosoftAccountMultiFactorSessionInfo@23456@PEAPEAU?$IAsyncOperation@W4MicrosoftAccountMultiFactorServiceResponse@Core@Identity@Authentication@Security@Windows@@@Foundation@6@@Z
    virtual long ApproveSessionUsingAuthSessionInfoAsync(int, ::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DenySessionAsync@MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@0W4MicrosoftAccountMultiFactorAuthenticationType@23456@PEAPEAU?$IAsyncOperation@W4MicrosoftAccountMultiFactorServiceResponse@Core@Identity@Authentication@Security@Windows@@@Foundation@6@@Z
    virtual long DenySessionAsync(HSTRING__*, HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DenySessionUsingAuthSessionInfoAsync@MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@UEAAJPEAUIMicrosoftAccountMultiFactorSessionInfo@23456@PEAPEAU?$IAsyncOperation@W4MicrosoftAccountMultiFactorServiceResponse@Core@Identity@Authentication@Security@Windows@@@Foundation@6@@Z
    virtual long DenySessionUsingAuthSessionInfoAsync(::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOneTimePassCodeAsync@MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@IPEAPEAU?$IAsyncOperation@PEAVMicrosoftAccountMultiFactorOneTimeCodedInfo@Core@Identity@Authentication@Security@Windows@@@Foundation@6@@Z
    virtual long GetOneTimePassCodeAsync(HSTRING__*, unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSessionsAndUnregisteredAccountsAsync@MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@6@PEAPEAU?$IAsyncOperation@PEAVMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo@Core@Identity@Authentication@Security@Windows@@@96@@Z
    virtual long GetSessionsAndUnregisteredAccountsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSessionsAsync@MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@6@PEAPEAU?$IAsyncOperation@PEAVMicrosoftAccountMultiFactorGetSessionsResult@Core@Identity@Authentication@Security@Windows@@@96@@Z
    virtual long GetSessionsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@QEAA@XZ
    MicrosoftAccountMultiFactorAuthenticationManager();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDeviceAsync@MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@W4MicrosoftAccountMultiFactorServiceResponse@Core@Identity@Authentication@Security@Windows@@@Foundation@6@@Z
    virtual long RemoveDeviceAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWnsChannelAsync@MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@W4MicrosoftAccountMultiFactorServiceResponse@Core@Identity@Authentication@Security@Windows@@@Foundation@6@@Z
    virtual long UpdateWnsChannelAsync(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@UEAA@XZ
    virtual ~MicrosoftAccountMultiFactorAuthenticationManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapErrorToStatusCode@MicrosoftAccountMultiFactorAuthenticationManager@Core@Identity@Authentication@Security@Windows@@AEAA?AW4MicrosoftAccountMultiFactorServiceResponse@23456@AEAJ@Z
    int MapErrorToStatusCode(long &);
};
} // namespace Windows::Security::Authentication::Identity::Core
