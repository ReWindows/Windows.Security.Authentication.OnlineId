#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 10 member(s).
class StringSrvPassthrough {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetErrorMsg@StringSrvPassthrough@@UEAA?AV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@JV23@@Z
    virtual WindissectOpaque GetErrorMsg(long, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLCID@StringSrvPassthrough@@UEAAJAEAK@Z
    virtual long GetLCID(unsigned long &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLCID@StringSrvPassthrough@@UEAAKXZ
    virtual unsigned long GetLCID();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMappedErrorMsg@StringSrvPassthrough@@UEAAJJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    virtual long GetMappedErrorMsg(long, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringForID@StringSrvPassthrough@@UEAA?AV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@K@Z
    virtual WindissectOpaque GetStringForID(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringForID@StringSrvPassthrough@@UEAAJKAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    virtual long GetStringForID(unsigned long, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@StringSrvPassthrough@@UEAAJK@Z
    virtual long Initialize(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchError@StringSrvPassthrough@@UEAAJJAEAU_ErrorNode@@@Z
    virtual long SearchError(long, _ErrorNode &);
};
