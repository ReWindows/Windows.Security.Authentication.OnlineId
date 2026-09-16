#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 10 member(s).
class AuthBrokerHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendClientInfoToStartUrl@AuthBrokerHelper@@SAJPEAVIExecutionContextModern@@AEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    static long AppendClientInfoToStartUrl(IExecutionContextModern *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractTokenFromUrl@AuthBrokerHelper@@SAJV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAUTokenFromWebAuthFlow@@@Z
    static long ExtractTokenFromUrl(WindissectOpaque, TokenFromWebAuthFlow &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInlineUrlForScenario@AuthBrokerHelper@@SAJPEAVIExecutionContextModern@@W4UsageSubScenario@@PEBGAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    static long GetInlineUrlForScenario(IExecutionContextModern *, int, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AuthBrokerHelper@@QEAAJPEAX@Z
    long Initialize(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchCxhFlowForUIScenario@AuthBrokerHelper@@SAJPEAVIExecutionContextModern@@W4UsageSubScenario@@PEAUHWND__@@AEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@3AEAJ@Z
    static long LaunchCxhFlowForUIScenario(IExecutionContextModern *, int, HWND__*, WindissectOpaque &, WindissectOpaque &, long &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchInterruptCxhFlow@AuthBrokerHelper@@SAJPEBGPEAUHWND__@@AEAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    static long LaunchInterruptCxhFlow(unsigned short const *, HWND__*, long &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUpsellCxhFlow@AuthBrokerHelper@@SAJPEAUHWND__@@_NAEAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    static long LaunchUpsellCxhFlow(HWND__*, bool, long &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchWebAuthFlow@AuthBrokerHelper@@QEAAJPEAVIExecutionContextModern@@PEBG1PEAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    long LaunchWebAuthFlow(IExecutionContextModern *, unsigned short const *, unsigned short const *, void *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@AuthBrokerHelper@@QEAAJXZ
    long Uninitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AuthBrokerHelper@@QEAA@XZ
    ~AuthBrokerHelper();
};
