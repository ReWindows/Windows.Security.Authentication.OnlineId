#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 3 member(s).
class CUserNameFormat {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatDisplayName@CUserNameFormat@@QEAAJPEBG0PEAPEAGPEA_N@Z
    long FormatDisplayName(unsigned short const *, unsigned short const *, unsigned short * *, bool *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDefaultNameFormatSupported@CUserNameFormat@@AEAA_NPEAUHINSTANCE__@@PEBG1@Z
    bool _IsDefaultNameFormatSupported(HINSTANCE__*, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsMultiLineFormat@CUserNameFormat@@AEAA_NPEAUHINSTANCE__@@_N@Z
    bool _IsMultiLineFormat(HINSTANCE__*, bool);
};
