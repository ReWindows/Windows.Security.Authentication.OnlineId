#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 4 member(s).
namespace MSAClientTraceTelemetry {
class QueryWlidsvcProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@QueryWlidsvcProperties@MSAClientTraceTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QueryWlidsvcProperties@MSAClientTraceTelemetry@@QEAA@XZ
    ~QueryWlidsvcProperties();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@QueryWlidsvcProperties@MSAClientTraceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@QueryWlidsvcProperties@MSAClientTraceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace MSAClientTraceTelemetry
