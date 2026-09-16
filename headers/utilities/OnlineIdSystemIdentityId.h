#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 4 member(s).
namespace MSAClientTraceTelemetry {
class OnlineIdSystemIdentityId {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnlineIdSystemIdentityId@MSAClientTraceTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnlineIdSystemIdentityId@MSAClientTraceTelemetry@@QEAA@XZ
    ~OnlineIdSystemIdentityId();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnlineIdSystemIdentityId@MSAClientTraceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnlineIdSystemIdentityId@MSAClientTraceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace MSAClientTraceTelemetry
