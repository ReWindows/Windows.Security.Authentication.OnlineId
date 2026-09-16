#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 11 member(s).
class ExecutionContextLite {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExecutionContextLite@@QEAA@XZ
    ExecutionContextLite();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMemoryFunctions@ExecutionContextLite@@UEAAPEAVIMemoryFunctions@@XZ
    virtual IMemoryFunctions * GetMemoryFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRPCFunctions@ExecutionContextLite@@UEAAPEAVIRPCFunctions@@XZ
    virtual IRPCFunctions * GetRPCFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegistryFunctions@ExecutionContextLite@@UEAAPEAVIRegistryFunctions@@XZ
    virtual IRegistryFunctions * GetRegistryFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringFunctions@ExecutionContextLite@@UEAAPEAVIStringFunctions@@XZ
    virtual IStringFunctions * GetStringFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSynchronizationFunctions@ExecutionContextLite@@UEAAPEAVISynchronizationFunctions@@XZ
    virtual ISynchronizationFunctions * GetSynchronizationFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemStoreLiteFunctions@ExecutionContextLite@@UEAAPEAVISystemStoreLiteFunctions@@XZ
    virtual ISystemStoreLiteFunctions * GetSystemStoreLiteFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWinApiFunctions@ExecutionContextLite@@UEAAPEAVIWinApiLite@@XZ
    virtual IWinApiLite * GetWinApiFunctions();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExecutionContextLite@@UEAA@XZ
    virtual ~ExecutionContextLite();
};
