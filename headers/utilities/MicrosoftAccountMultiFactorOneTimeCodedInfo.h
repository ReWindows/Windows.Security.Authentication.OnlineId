#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 26 member(s).
namespace Windows::Security::Authentication::Identity::Core {
class MicrosoftAccountMultiFactorOneTimeCodedInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MicrosoftAccountMultiFactorOneTimeCodedInfo@Core@Identity@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MicrosoftAccountMultiFactorOneTimeCodedInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MicrosoftAccountMultiFactorOneTimeCodedInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MicrosoftAccountMultiFactorOneTimeCodedInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MicrosoftAccountMultiFactorOneTimeCodedInfo@Core@Identity@Authentication@Security@Windows@@QEAA@XZ
    MicrosoftAccountMultiFactorOneTimeCodedInfo();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MicrosoftAccountMultiFactorOneTimeCodedInfo@Core@Identity@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MicrosoftAccountMultiFactorOneTimeCodedInfo@Core@Identity@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Code@MicrosoftAccountMultiFactorOneTimeCodedInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Code(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ServiceResponse@MicrosoftAccountMultiFactorOneTimeCodedInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAW4MicrosoftAccountMultiFactorServiceResponse@23456@@Z
    virtual long get_ServiceResponse(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TimeInterval@MicrosoftAccountMultiFactorOneTimeCodedInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAUTimeSpan@Foundation@6@@Z
    virtual long get_TimeInterval(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TimeToLive@MicrosoftAccountMultiFactorOneTimeCodedInfo@Core@Identity@Authentication@Security@Windows@@UEAAJPEAUTimeSpan@Foundation@6@@Z
    virtual long get_TimeToLive(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MicrosoftAccountMultiFactorOneTimeCodedInfo@Core@Identity@Authentication@Security@Windows@@UEAA@XZ
    virtual ~MicrosoftAccountMultiFactorOneTimeCodedInfo();
};
} // namespace Windows::Security::Authentication::Identity::Core
