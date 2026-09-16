#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 6 member(s).
class SystemStoreLite {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentUserSidString@SystemStoreLite@@SAJPEAVIExecutionContextLite@@PEAPEAG@Z
    static long GetCurrentUserSidString(IExecutionContextLite *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReportingAccountType@SystemStoreLite@@SAJPEAVIExecutionContextLite@@PEBG1AEAW4ReportingAccountType@@@Z
    static long GetReportingAccountType(IExecutionContextLite *, unsigned short const *, unsigned short const *, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoredIdentityProperty@SystemStoreLite@@SAJPEAVIExecutionContextLite@@PEBG1PEAPEAG2@Z
    static long GetStoredIdentityProperty(IExecutionContextLite *, unsigned short const *, unsigned short const *, unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemSidString@SystemStoreLite@@SAJPEAVIExecutionContextLite@@PEAPEAG@Z
    static long GetSystemSidString(IExecutionContextLite *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnected@SystemStoreLite@@SAJPEAVIExecutionContextLite@@PEAHPEAPEAG@Z
    static long IsConnected(IExecutionContextLite *, int *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnectedSID@SystemStoreLite@@SAJPEAVIExecutionContextLite@@PEBGPEAHPEAPEAG@Z
    static long IsConnectedSID(IExecutionContextLite *, unsigned short const *, int *, unsigned short * *);
};
