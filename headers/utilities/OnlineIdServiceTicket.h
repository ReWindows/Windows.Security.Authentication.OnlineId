#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 22 member(s).
namespace Windows::Security::Authentication::OnlineId {
class OnlineIdServiceTicket {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnlineIdServiceTicket@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@OnlineIdServiceTicket@OnlineId@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@OnlineIdServiceTicket@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@OnlineIdServiceTicket@OnlineId@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnlineIdServiceTicket@OnlineId@Authentication@Security@Windows@@QEAA@XZ
    OnlineIdServiceTicket();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnlineIdServiceTicket@OnlineId@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnlineIdServiceTicket@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValues@OnlineIdServiceTicket@OnlineId@Authentication@Security@Windows@@QEAAJPEBG00J@Z
    long SetValues(unsigned short const *, unsigned short const *, unsigned short const *, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValues@OnlineIdServiceTicket@OnlineId@Authentication@Security@Windows@@QEAAJAEBUOnlineIdServiceTicketRequestInternal@@AEBU_WLIDResponseParams@@@Z
    long SetValues(OnlineIdServiceTicketRequestInternal const &, _WLIDResponseParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ErrorCode@OnlineIdServiceTicket@OnlineId@Authentication@Security@Windows@@UEAAJPEAH@Z
    virtual long get_ErrorCode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Request@OnlineIdServiceTicket@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUIOnlineIdServiceTicketRequest@2345@@Z
    virtual long get_Request(::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@OnlineIdServiceTicket@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Value(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnlineIdServiceTicket@OnlineId@Authentication@Security@Windows@@UEAA@XZ
    virtual ~OnlineIdServiceTicket();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@OnlineIdServiceTicket@OnlineId@Authentication@Security@Windows@@IEAAXXZ
    void Clear();
};
} // namespace Windows::Security::Authentication::OnlineId
