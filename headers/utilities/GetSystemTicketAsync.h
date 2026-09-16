#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 5 member(s).
namespace MSAClientTraceTelemetry {
class GetSystemTicketAsync {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@GetSystemTicketAsync@MSAClientTraceTelemetry@@QEAA?AV12@XZ
    WindissectOpaque Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetSystemTicketAsync@MSAClientTraceTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetSystemTicketAsync@MSAClientTraceTelemetry@@QEAA@XZ
    ~GetSystemTicketAsync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetSystemTicketAsync@MSAClientTraceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetSystemTicketAsync@MSAClientTraceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace MSAClientTraceTelemetry
