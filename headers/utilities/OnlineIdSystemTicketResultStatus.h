#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 4 member(s).
namespace MSAClientTraceTelemetry {
class OnlineIdSystemTicketResultStatus {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnlineIdSystemTicketResultStatus@MSAClientTraceTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnlineIdSystemTicketResultStatus@MSAClientTraceTelemetry@@QEAA@XZ
    ~OnlineIdSystemTicketResultStatus();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnlineIdSystemTicketResultStatus@MSAClientTraceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnlineIdSystemTicketResultStatus@MSAClientTraceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace MSAClientTraceTelemetry
