#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 4 member(s).
namespace MSAClientTraceTelemetry {
class OnlineIdSystemIdentityInitialize {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnlineIdSystemIdentityInitialize@MSAClientTraceTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnlineIdSystemIdentityInitialize@MSAClientTraceTelemetry@@QEAA@XZ
    ~OnlineIdSystemIdentityInitialize();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnlineIdSystemIdentityInitialize@MSAClientTraceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnlineIdSystemIdentityInitialize@MSAClientTraceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace MSAClientTraceTelemetry
