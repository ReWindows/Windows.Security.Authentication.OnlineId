#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 4 member(s).
namespace MSAClientTraceTelemetry {
class SystemTicketSetApplicationId {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SystemTicketSetApplicationId@MSAClientTraceTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemTicketSetApplicationId@MSAClientTraceTelemetry@@QEAA@XZ
    ~SystemTicketSetApplicationId();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SystemTicketSetApplicationId@MSAClientTraceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SystemTicketSetApplicationId@MSAClientTraceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace MSAClientTraceTelemetry
