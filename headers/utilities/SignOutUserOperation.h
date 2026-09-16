#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 28 member(s).
namespace Windows::Security::Authentication::OnlineId {
class SignOutUserOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SignOutUserOperation@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SignOutUserOperation@OnlineId@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@SignOutUserOperation@OnlineId@Authentication@Security@Windows@@UEAAJXZ
    virtual long GetResults();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SignOutUserOperation@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SignOutUserOperation@OnlineId@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWorker@SignOutUserOperation@OnlineId@Authentication@Security@Windows@@QEAAJXZ
    long InitializeWorker();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SignOutUserOperation@OnlineId@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SignOutUserOperation@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SignOutUserOperation@OnlineId@Authentication@Security@Windows@@QEAA@IAEBU_GUID@@_NPEBG@Z
    SignOutUserOperation(unsigned int, _GUID const &, bool, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SignOutUserOperation@OnlineId@Authentication@Security@Windows@@UEAA@XZ
    virtual ~SignOutUserOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@SignOutUserOperation@OnlineId@Authentication@Security@Windows@@MEAAJXZ
    virtual long DoWork();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForgetUser@SignOutUserOperation@OnlineId@Authentication@Security@Windows@@AEAAJPEAVIExecutionContextModern@@AEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    long ForgetUser(IExecutionContextModern *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWorkerHelper@SignOutUserOperation@OnlineId@Authentication@Security@Windows@@AEAAJPEAVIExecutionContextModern@@@Z
    long InitializeWorkerHelper(IExecutionContextModern *);
};
} // namespace Windows::Security::Authentication::OnlineId
