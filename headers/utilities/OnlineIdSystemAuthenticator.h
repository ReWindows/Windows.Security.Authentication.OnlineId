#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 28 member(s).
namespace Windows::Security::Authentication::OnlineId {
class OnlineIdSystemAuthenticator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnlineIdSystemAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUser@OnlineIdSystemAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJPEAUIUser@System@5@PEAPEAUIOnlineIdSystemAuthenticatorForUser@2345@@Z
    virtual long GetForUser(::Windows::System::IUser *, ::Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@OnlineIdSystemAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@OnlineIdSystemAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@OnlineIdSystemAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@OnlineIdSystemAuthenticator@OnlineId@Authentication@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@OnlineIdSystemAuthenticator@OnlineId@Authentication@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnlineIdSystemAuthenticator@OnlineId@Authentication@Security@Windows@@QEAA@XZ
    OnlineIdSystemAuthenticator();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnlineIdSystemAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnlineIdSystemAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Default@OnlineIdSystemAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUIOnlineIdSystemAuthenticatorForUser@2345@@Z
    virtual long get_Default(::Windows::Security::Authentication::OnlineId::IOnlineIdSystemAuthenticatorForUser * *);
};
} // namespace Windows::Security::Authentication::OnlineId
