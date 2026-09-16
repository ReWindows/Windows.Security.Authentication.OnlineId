#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 15 member(s).
namespace Windows::Security::Authentication::OnlineId {
class Identity {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentityPropertyArray@Identity@OnlineId@Authentication@Security@Windows@@QEAAJAEAV?$CAtlArray@UIdentityProperty@@V?$CElementTraits@UIdentityProperty@@@ATL@@@ATL@@@Z
    long GetIdentityPropertyArray(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyByName@Identity@OnlineId@Authentication@Security@Windows@@QEAA?AV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEBG@Z
    WindissectOpaque GetPropertyByName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateIdentityProperties@Identity@OnlineId@Authentication@Security@Windows@@QEAAJ_NAEAV?$CAtlArray@UIdentityProperty@@V?$CElementTraits@UIdentityProperty@@@ATL@@@ATL@@@Z
    long PopulateIdentityProperties(bool, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateIdentityProperties@Identity@OnlineId@Authentication@Security@Windows@@QEAAJPEAVILiveIdNtService@@AEAVSmartWLIDHandle@@W4Type@IdentityPropertyType@@@Z
    long PopulateIdentityProperties(ILiveIdNtService *, SmartWLIDHandle &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateTickets@Identity@OnlineId@Authentication@Security@Windows@@QEAAJAEBVCIdentityTokenCacheArray@@@Z
    long PopulateTickets(CIdentityTokenCacheArray const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateTickets@Identity@OnlineId@Authentication@Security@Windows@@QEAAJAEBV?$CAtlArray@UOnlineIdServiceTicketRequestInternal@@V?$CElementTraits@UOnlineIdServiceTicketRequestInternal@@@ATL@@@ATL@@PEBU_WLIDResponseParams@@@Z
    long PopulateTickets(WindissectOpaque const &, _WLIDResponseParams const *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentityPropertyFromService@Identity@OnlineId@Authentication@Security@Windows@@IEAAJPEAVILiveIdNtService@@AEAVSmartWLIDHandle@@PEBG@Z
    long GetIdentityPropertyFromService(ILiveIdNtService *, SmartWLIDHandle &, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyByName@Identity@OnlineId@Authentication@Security@Windows@@IEAAJPEBGPEAPEAUHSTRING__@@_N@Z
    long GetPropertyByName(unsigned short const *, HSTRING__* *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTickets@Identity@OnlineId@Authentication@Security@Windows@@IEAAJPEAPEAU?$IVectorView@PEAVOnlineIdServiceTicket@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@5@@Z
    long GetTickets(WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Identity@OnlineId@Authentication@Security@Windows@@IEAA@XZ
    Identity();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyByName@Identity@OnlineId@Authentication@Security@Windows@@IEAAXAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@0@Z
    void SetPropertyByName(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Identity@OnlineId@Authentication@Security@Windows@@MEAA@XZ
    virtual ~Identity();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTicketVector@Identity@OnlineId@Authentication@Security@Windows@@AEAAJXZ
    long InitializeTicketVector();
};
} // namespace Windows::Security::Authentication::OnlineId
