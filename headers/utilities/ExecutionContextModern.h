#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 26 member(s).
class ExecutionContextModern {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAsyncState@ExecutionContextModern@@UEAA_NXZ
    virtual bool CheckAsyncState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRegKey@ExecutionContextModern@@UEAAJPEAPEAVIRegKey@@@Z
    virtual long CreateRegKey(IRegKey * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExecutionContextModern@@QEAA@XZ
    ExecutionContextModern();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAuthBufferExecutionContext@ExecutionContextModern@@UEAAPEAVIAuthBufferExecutionContext@@XZ
    virtual IAuthBufferExecutionContext * GetAuthBufferExecutionContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerIdentityFunctions@ExecutionContextModern@@UEAAPEAVICallerIdentityFunctions@@XZ
    virtual ICallerIdentityFunctions * GetCallerIdentityFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComFunctions@ExecutionContextModern@@UEAAPEAVIComFunctions@@XZ
    virtual IComFunctions * GetComFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCredentialCollectionFunctions@ExecutionContextModern@@UEAAPEAVICredentialCollectionFunctions@@XZ
    virtual ICredentialCollectionFunctions * GetCredentialCollectionFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCxhHelperFunctions@ExecutionContextModern@@UEAAPEAVICxhHelperFunctions@@XZ
    virtual ICxhHelperFunctions * GetCxhHelperFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentityStorageFunctions@ExecutionContextModern@@UEAAPEAVIIdentityStorageFunctions@@XZ
    virtual IIdentityStorageFunctions * GetIdentityStorageFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveFunctions@ExecutionContextModern@@UEAAPEAVIImmersiveFunctions@@XZ
    virtual IImmersiveFunctions * GetImmersiveFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMemoryFunctions@ExecutionContextModern@@UEAAPEAVIMemoryFunctions@@XZ
    virtual IMemoryFunctions * GetMemoryFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModernApiHelperFunctions@ExecutionContextModern@@UEAAPEAVIModernApiHelperFunctions@@XZ
    virtual IModernApiHelperFunctions * GetModernApiHelperFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNgcFunctions@ExecutionContextModern@@UEAAPEAVINgcFunctions@@XZ
    virtual INgcFunctions * GetNgcFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNtServiceFunctions@ExecutionContextModern@@UEAAPEAVILiveIdNtService@@XZ
    virtual ILiveIdNtService * GetNtServiceFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRPCFunctions@ExecutionContextModern@@UEAAPEAVIRPCFunctions@@XZ
    virtual IRPCFunctions * GetRPCFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegistryFunctions@ExecutionContextModern@@UEAAPEAVIRegistryFunctions@@XZ
    virtual IRegistryFunctions * GetRegistryFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringFunctions@ExecutionContextModern@@UEAAPEAVIStringFunctions@@XZ
    virtual IStringFunctions * GetStringFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringSrv@ExecutionContextModern@@UEAAPEAVIStringSrv@@XZ
    virtual IStringSrv * GetStringSrv();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSynchronizationFunctions@ExecutionContextModern@@UEAAPEAVISynchronizationFunctions@@XZ
    virtual ISynchronizationFunctions * GetSynchronizationFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemStoreLiteFunctions@ExecutionContextModern@@UEAAPEAVISystemStoreLiteFunctions@@XZ
    virtual ISystemStoreLiteFunctions * GetSystemStoreLiteFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWinApiFunctions@ExecutionContextModern@@UEAAPEAVIWinApiLite@@XZ
    virtual IWinApiLite * GetWinApiFunctions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MsaEnterpriseDeviceAuthEnabled@ExecutionContextModern@@UEBAJPEAH@Z
    virtual long MsaEnterpriseDeviceAuthEnabled(int *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExecutionContextModern@@UEAA@XZ
    virtual ~ExecutionContextModern();
};
