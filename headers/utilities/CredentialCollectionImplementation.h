#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 5 member(s).
class CredentialCollectionImplementation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromptForLiveIdCredentials@CredentialCollectionImplementation@@SAJPEAVIExecutionContextModern@@W4UsageSubScenario@@AEBUIdentityInformationForUi@@AEBUAppInformationForUi@@AEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAPEAEPEAK6AEAJ@Z
    static long PromptForLiveIdCredentials(IExecutionContextModern *, int, IdentityInformationForUi const &, AppInformationForUi const &, WindissectOpaque &, unsigned char * *, unsigned long *, unsigned long *, long &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaptionText@CredentialCollectionImplementation@@CAJPEAVIStringSrv@@_NW4UsageSubScenario@@AEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    static long GetCaptionText(IStringSrv *, bool, int, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageText@CredentialCollectionImplementation@@CAJPEAVIStringSrv@@_NW4UsageSubScenario@@AEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAV45@@Z
    static long GetMessageText(IStringSrv *, bool, int, WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromptForLiveIdCredentialsInternal@CredentialCollectionImplementation@@CAJPEAVIExecutionContextModern@@W4UsageSubScenario@@AEBUIdentityInformationForUi@@AEBUAppInformationForUi@@AEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAPEAEPEAK6AEAJ@Z
    static long PromptForLiveIdCredentialsInternal(IExecutionContextModern *, int, IdentityInformationForUi const &, AppInformationForUi const &, WindissectOpaque &, unsigned char * *, unsigned long *, unsigned long *, long &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromptForLiveIdCredentialsTestHook@CredentialCollectionImplementation@@CAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAPEAEPEAKAEAJ@Z
    static long PromptForLiveIdCredentialsTestHook(WindissectOpaque &, unsigned char * *, unsigned long *, long &);
};
