#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 6 member(s).
namespace MSAClientTraceTelemetry {
class GetSystemTicketAsyncInternal {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@GetSystemTicketAsyncInternal@MSAClientTraceTelemetry@@QEAA?AV12@XZ
    WindissectOpaque Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetSystemTicketAsyncInternal@MSAClientTraceTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetSystemTicketAsyncInternal@MSAClientTraceTelemetry@@QEAA@XZ
    ~GetSystemTicketAsyncInternal();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetSystemTicketAsyncInternal@MSAClientTraceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetSystemTicketAsyncInternal@MSAClientTraceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace MSAClientTraceTelemetry
