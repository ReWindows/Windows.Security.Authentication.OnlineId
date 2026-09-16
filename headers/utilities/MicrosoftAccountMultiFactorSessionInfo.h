#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 24 member(s).
namespace Windows::Security::Authentication::Identity::Core {
class MicrosoftAccountMultiFactorSessionInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@QEAA@XZ
    MicrosoftAccountMultiFactorSessionInfo();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@QEAAJPEBG000000@Z
    long RuntimeClassInitialize(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApprovalStatus@MicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAW4MicrosoftAccountMultiFactorSessionApprovalStatus@23456@@Z
    virtual long get_ApprovalStatus(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AuthenticationType@MicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAW4MicrosoftAccountMultiFactorAuthenticationType@23456@@Z
    virtual long get_AuthenticationType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplaySessionId@MicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplaySessionId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpirationTime@MicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAUDateTime@Foundation@6@@Z
    virtual long get_ExpirationTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestTime@MicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAUDateTime@Foundation@6@@Z
    virtual long get_RequestTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SessionId@MicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SessionId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UserAccountId@MicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_UserAccountId(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MicrosoftAccountMultiFactorSessionInfo@Core@Identity@Authentication@Security@Windows@@UEAA@XZ
    virtual ~MicrosoftAccountMultiFactorSessionInfo();
};
} // namespace Windows::Security::Authentication::Identity::Core
