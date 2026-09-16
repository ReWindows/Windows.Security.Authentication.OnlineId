#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 28 member(s).
namespace Windows::Security::Authentication::OnlineId {
class OnlineIdSystemAuthenticatorForUser {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnlineIdSystemAuthenticatorForUser@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@OnlineIdSystemAuthenticatorForUser@OnlineId@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@OnlineIdSystemAuthenticatorForUser@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTicketAsync@OnlineIdSystemAuthenticatorForUser@OnlineId@Authentication@Security@Windows@@UEAAJPEAUIOnlineIdServiceTicketRequest@2345@PEAPEAU?$IAsyncOperation@PEAVOnlineIdSystemTicketResult@OnlineId@Authentication@Security@Windows@@@Foundation@5@@Z
    virtual long GetTicketAsync(::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@OnlineIdSystemAuthenticatorForUser@OnlineId@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnlineIdSystemAuthenticatorForUser@OnlineId@Authentication@Security@Windows@@QEAA@XZ
    OnlineIdSystemAuthenticatorForUser();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnlineIdSystemAuthenticatorForUser@OnlineId@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnlineIdSystemAuthenticatorForUser@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@OnlineIdSystemAuthenticatorForUser@OnlineId@Authentication@Security@Windows@@QEAAJAEBV?$ComPtr@UIUser@System@Windows@@@WRL@Microsoft@@@Z
    long RuntimeClassInitialize(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationId@OnlineIdSystemAuthenticatorForUser@OnlineId@Authentication@Security@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_ApplicationId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@OnlineIdSystemAuthenticatorForUser@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUIUser@System@5@@Z
    virtual long get_User(::Windows::System::IUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ApplicationId@OnlineIdSystemAuthenticatorForUser@OnlineId@Authentication@Security@Windows@@UEAAJU_GUID@@@Z
    virtual long put_ApplicationId(_GUID);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnlineIdSystemAuthenticatorForUser@OnlineId@Authentication@Security@Windows@@UEAA@XZ
    virtual ~OnlineIdSystemAuthenticatorForUser();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemTicketInternalAsyncWorkerStartAuth@OnlineIdSystemAuthenticatorForUser@OnlineId@Authentication@Security@Windows@@AEAAJAEBV?$ComPtr@UIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@WRL@Microsoft@@U_GUID@@AEBV?$ComPtr@UIUser@System@Windows@@@78@AEAV?$ComPtr@U?$IAsyncOperation@PEAVOnlineIdSystemTicketResult@OnlineId@Authentication@Security@Windows@@@Foundation@Windows@@@78@@Z
    long GetSystemTicketInternalAsyncWorkerStartAuth(WindissectOpaque const &, _GUID, WindissectOpaque const &, WindissectOpaque &);
};
} // namespace Windows::Security::Authentication::OnlineId
