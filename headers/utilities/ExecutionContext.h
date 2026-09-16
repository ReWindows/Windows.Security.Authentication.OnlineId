#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 7 member(s).
class ExecutionContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRegKey@ExecutionContext@@UEAAJPEAPEAVIRegKey@@@Z
    virtual long CreateRegKey(IRegKey * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComFunctions@ExecutionContext@@UEAAPEAVIComFunctions@@XZ
    virtual IComFunctions * GetComFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringSrv@ExecutionContext@@UEAAPEAVIStringSrv@@XZ
    virtual IStringSrv * GetStringSrv();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MsaEnterpriseDeviceAuthEnabled@ExecutionContext@@UEBAJPEAH@Z
    virtual long MsaEnterpriseDeviceAuthEnabled(int *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExecutionContext@@UEAA@XZ
    virtual ~ExecutionContext();
};
