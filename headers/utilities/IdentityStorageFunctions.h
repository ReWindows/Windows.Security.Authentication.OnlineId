#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 8 member(s).
class IdentityStorageFunctions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteIdentityData@IdentityStorageFunctions@@UEAAJAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@_N1AEA_N@Z
    virtual long DeleteIdentityData(WindissectOpaque const &, bool, bool, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultIdentity@IdentityStorageFunctions@@UEAAJAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4_ModernIdentityType@@AEAV23@AEA_N@Z
    virtual long GetDefaultIdentity(WindissectOpaque const &, int, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCache@IdentityStorageFunctions@@UEAAJAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    virtual long InvalidateCache(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadIdentityData@IdentityStorageFunctions@@UEAAJAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4_ModernIdentityType@@AEBV?$CAtlArray@UOnlineIdServiceTicketRequestInternal@@V?$CElementTraits@UOnlineIdServiceTicketRequestInternal@@@ATL@@@3@AEAKAEAVCIdentityTokenCacheArray@@AEAV?$CAtlArray@UIdentityProperty@@V?$CElementTraits@UIdentityProperty@@@ATL@@@3@_NV23@@Z
    virtual long ReadIdentityData(WindissectOpaque const &, int, WindissectOpaque const &, unsigned long &, CIdentityTokenCacheArray &, WindissectOpaque &, bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadIdentityProperty@IdentityStorageFunctions@@UEAAJAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@0W4_ModernIdentityType@@AEAKAEAV23@@Z
    virtual long ReadIdentityProperty(WindissectOpaque const &, WindissectOpaque const &, int, unsigned long &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteIdentityData@IdentityStorageFunctions@@UEAAJAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@0W4_ModernIdentityType@@KAEBV?$CAtlArray@UIdentityToken@@V?$CElementTraits@UIdentityToken@@@ATL@@@3@AEBV?$CAtlArray@UIdentityProperty@@V?$CElementTraits@UIdentityProperty@@@ATL@@@3@_NV23@@Z
    virtual long WriteIdentityData(WindissectOpaque const &, WindissectOpaque const &, int, unsigned long, WindissectOpaque const &, WindissectOpaque const &, bool, WindissectOpaque);
};
