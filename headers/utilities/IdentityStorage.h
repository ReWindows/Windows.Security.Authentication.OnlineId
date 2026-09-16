#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 24 member(s).
class IdentityStorage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteIdentityData@IdentityStorage@@QEAAJAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@_N1AEA_N@Z
    long DeleteIdentityData(WindissectOpaque const &, bool, bool, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTicketsForUser@IdentityStorage@@QEAAJAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    long DeleteTicketsForUser(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultIdentity@IdentityStorage@@QEAAJAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4_ModernIdentityType@@AEAV23@AEA_N@Z
    long GetDefaultIdentity(WindissectOpaque const &, int, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCache@IdentityStorage@@QEAAJPEBG@Z
    long InvalidateCache(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupIdentityProperty@IdentityStorage@@SA_NAEBV?$CAtlArray@UIdentityProperty@@V?$CElementTraits@UIdentityProperty@@@ATL@@@ATL@@PEBGAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@3@@Z
    static bool LookupIdentityProperty(WindissectOpaque const &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadIdentityData@IdentityStorage@@QEAAJAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4_ModernIdentityType@@AEBV?$CAtlArray@UOnlineIdServiceTicketRequestInternal@@V?$CElementTraits@UOnlineIdServiceTicketRequestInternal@@@ATL@@@3@AEAKAEAVCIdentityTokenCacheArray@@AEAV?$CAtlArray@UIdentityProperty@@V?$CElementTraits@UIdentityProperty@@@ATL@@@3@_NV23@@Z
    long ReadIdentityData(WindissectOpaque const &, int, WindissectOpaque const &, unsigned long &, CIdentityTokenCacheArray &, WindissectOpaque &, bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadIdentityProperty@IdentityStorage@@QEAAJAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@0W4_ModernIdentityType@@AEAKAEAV23@@Z
    long ReadIdentityProperty(WindissectOpaque const &, WindissectOpaque const &, int, unsigned long &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteIdentityData@IdentityStorage@@QEAAJAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@0W4_ModernIdentityType@@KAEBV?$CAtlArray@UIdentityToken@@V?$CElementTraits@UIdentityToken@@@ATL@@@3@AEBV?$CAtlArray@UIdentityProperty@@V?$CElementTraits@UIdentityProperty@@@ATL@@@3@_NV23@@Z
    long WriteIdentityData(WindissectOpaque const &, WindissectOpaque const &, int, unsigned long, WindissectOpaque const &, WindissectOpaque const &, bool, WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTokenKeyMap@IdentityStorage@@AEAAXAEBV?$CAtlArray@UIdentityToken@@V?$CElementTraits@UIdentityToken@@@ATL@@@ATL@@AEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@KV?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@K@2@@3@@Z
    void CreateTokenKeyMap(WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeletePairwiseId@IdentityStorage@@AEAAJPEBG0@Z
    long DeletePairwiseId(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnvironmentSpecificRegistryKey@IdentityStorage@@AEAA?AV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEBG@Z
    WindissectOpaque GetEnvironmentSpecificRegistryKey(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentityKey@IdentityStorage@@AEAAPEBGW4_ModernIdentityType@@@Z
    unsigned short const * GetIdentityKey(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentityProperties@IdentityStorage@@AEAAJPEBGAEAV?$CAtlArray@UIdentityProperty@@V?$CElementTraits@UIdentityProperty@@@ATL@@@ATL@@@Z
    long GetIdentityProperties(unsigned short const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentityTokenKey@IdentityStorage@@AEAAPEBGW4_ModernIdentityType@@@Z
    unsigned short const * GetIdentityTokenKey(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPairwiseId@IdentityStorage@@AEAAJPEBG0AEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    long GetPairwiseId(unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeSkew@IdentityStorage@@AEAAJXZ
    long GetTimeSkew();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTokenInvalidationTime@IdentityStorage@@AEAA_JXZ
    int64_t GetTokenInvalidationTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAssociatedToOtherApplication@IdentityStorage@@AEAAJAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEA_N@Z
    long IsAssociatedToOtherApplication(WindissectOpaque const &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadCredentialInformation@IdentityStorage@@AEAAJAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4_ModernIdentityType@@AEAKAEAVCIdentityTokenCacheArray@@AEAV?$CAtlArray@UIdentityProperty@@V?$CElementTraits@UIdentityProperty@@@ATL@@@3@_N5V23@@Z
    long ReadCredentialInformation(WindissectOpaque const &, int, unsigned long &, CIdentityTokenCacheArray &, WindissectOpaque &, bool, bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteCredentialInformation@IdentityStorage@@AEAAJAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@0W4_ModernIdentityType@@KAEBV?$CAtlArray@UIdentityToken@@V?$CElementTraits@UIdentityToken@@@ATL@@@3@AEBV?$CAtlArray@UIdentityProperty@@V?$CElementTraits@UIdentityProperty@@@ATL@@@3@_N@Z
    long WriteCredentialInformation(WindissectOpaque const &, WindissectOpaque const &, int, unsigned long, WindissectOpaque const &, WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WritePairwiseId@IdentityStorage@@AEAAJPEBG00@Z
    long WritePairwiseId(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteProperties@IdentityStorage@@AEAAJPEBGAEBV?$CAtlArray@UIdentityProperty@@V?$CElementTraits@UIdentityProperty@@@ATL@@@ATL@@@Z
    long WriteProperties(unsigned short const *, WindissectOpaque const &);
};
