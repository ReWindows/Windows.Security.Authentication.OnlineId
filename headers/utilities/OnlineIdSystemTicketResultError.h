#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 4 member(s).
namespace MSAClientTraceTelemetry {
class OnlineIdSystemTicketResultError {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnlineIdSystemTicketResultError@MSAClientTraceTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnlineIdSystemTicketResultError@MSAClientTraceTelemetry@@QEAA@XZ
    ~OnlineIdSystemTicketResultError();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnlineIdSystemTicketResultError@MSAClientTraceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnlineIdSystemTicketResultError@MSAClientTraceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace MSAClientTraceTelemetry
