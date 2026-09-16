#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 7 member(s).
class SystemStoreLiteFunctions {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentUserSidString@SystemStoreLiteFunctions@@UEAAJPEAPEAG@Z
    virtual long GetCurrentUserSidString(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReportingAccountType@SystemStoreLiteFunctions@@UEAAJPEBG0AEAW4ReportingAccountType@@@Z
    virtual long GetReportingAccountType(unsigned short const *, unsigned short const *, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoredIdentityProperty@SystemStoreLiteFunctions@@UEAAJPEBG0PEAPEAG1@Z
    virtual long GetStoredIdentityProperty(unsigned short const *, unsigned short const *, unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnected@SystemStoreLiteFunctions@@UEAAJPEAHPEAPEAG@Z
    virtual long IsConnected(int *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnectedSID@SystemStoreLiteFunctions@@UEAAJPEBGPEAHPEAPEAG@Z
    virtual long IsConnectedSID(unsigned short const *, int *, unsigned short * *);
};
