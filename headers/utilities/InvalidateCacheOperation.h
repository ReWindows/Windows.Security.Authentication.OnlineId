#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 27 member(s).
namespace Windows::Internal::Security::WebAuthentication {
class InvalidateCacheOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InvalidateCacheOperation@WebAuthentication@Security@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InvalidateCacheOperation@WebAuthentication@Security@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@InvalidateCacheOperation@WebAuthentication@Security@Internal@Windows@@UEAAJXZ
    virtual long GetResults();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InvalidateCacheOperation@WebAuthentication@Security@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InvalidateCacheOperation@WebAuthentication@Security@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWorker@InvalidateCacheOperation@WebAuthentication@Security@Internal@Windows@@QEAAJXZ
    long InitializeWorker();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InvalidateCacheOperation@WebAuthentication@Security@Internal@Windows@@QEAA@IAEBU_GUID@@@Z
    InvalidateCacheOperation(unsigned int, _GUID const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InvalidateCacheOperation@WebAuthentication@Security@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InvalidateCacheOperation@WebAuthentication@Security@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InvalidateCacheOperation@WebAuthentication@Security@Internal@Windows@@UEAA@XZ
    virtual ~InvalidateCacheOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@InvalidateCacheOperation@WebAuthentication@Security@Internal@Windows@@MEAAJXZ
    virtual long DoWork();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCache@InvalidateCacheOperation@WebAuthentication@Security@Internal@Windows@@AEAAJPEAVIExecutionContextModern@@AEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    long InvalidateCache(IExecutionContextModern *, WindissectOpaque const &);
};
} // namespace Windows::Internal::Security::WebAuthentication
