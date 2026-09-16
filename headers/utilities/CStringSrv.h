#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 9 member(s).
class CStringSrv {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetErrorMsg@CStringSrv@@SA?AV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@JV23@@Z
    static WindissectOpaque GetErrorMsg(long, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLCID@CStringSrv@@SAJAEAK@Z
    static long GetLCID(unsigned long &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMappedErrorMsg@CStringSrv@@SAJJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    static long GetMappedErrorMsg(long, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringForID@CStringSrv@@SAJKAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    static long GetStringForID(unsigned long, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CStringSrv@@SAJK@Z
    static long Initialize(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeGlobals@CStringSrv@@SAJXZ
    static long InitializeGlobals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchError@CStringSrv@@SAJJAEAU_ErrorNode@@@Z
    static long SearchError(long, _ErrorNode &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheResStrings@CStringSrv@@KAJK@Z
    static long CacheResStrings(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenResourceDll@CStringSrv@@KAPEAUHINSTANCE__@@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    static HINSTANCE__* OpenResourceDll(WindissectOpaque);
};
