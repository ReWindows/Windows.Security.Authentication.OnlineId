#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 4 member(s).
namespace MSAClientTraceTelemetry {
class OnlineIdSystemTicketResultIdentity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnlineIdSystemTicketResultIdentity@MSAClientTraceTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnlineIdSystemTicketResultIdentity@MSAClientTraceTelemetry@@QEAA@XZ
    ~OnlineIdSystemTicketResultIdentity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnlineIdSystemTicketResultIdentity@MSAClientTraceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnlineIdSystemTicketResultIdentity@MSAClientTraceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace MSAClientTraceTelemetry
