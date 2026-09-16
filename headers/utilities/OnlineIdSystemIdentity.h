#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 20 member(s).
namespace Windows::Security::Authentication::OnlineId {
class OnlineIdSystemIdentity {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnlineIdSystemIdentity@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@OnlineIdSystemIdentity@OnlineId@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@OnlineIdSystemIdentity@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@OnlineIdSystemIdentity@OnlineId@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnlineIdSystemIdentity@OnlineId@Authentication@Security@Windows@@QEAA@XZ
    OnlineIdSystemIdentity();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnlineIdSystemIdentity@OnlineId@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnlineIdSystemIdentity@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@OnlineIdSystemIdentity@OnlineId@Authentication@Security@Windows@@QEAAJAEBV?$ComPtr@UIUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@WRL@Microsoft@@@Z
    long RuntimeClassInitialize(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@OnlineIdSystemIdentity@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Ticket@OnlineIdSystemIdentity@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUIOnlineIdServiceTicket@2345@@Z
    virtual long get_Ticket(::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicket * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnlineIdSystemIdentity@OnlineId@Authentication@Security@Windows@@UEAA@XZ
    virtual ~OnlineIdSystemIdentity();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@OnlineIdSystemIdentity@OnlineId@Authentication@Security@Windows@@AEAAXXZ
    void Clear();
};
} // namespace Windows::Security::Authentication::OnlineId
