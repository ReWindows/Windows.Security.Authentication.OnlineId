#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 9 member(s).
class AuthBufferExecutionContext {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AuthBufferExecutionContext@@QEAA@XZ
    AuthBufferExecutionContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAuthBufferHelperFunctions@AuthBufferExecutionContext@@UEAAPEAVIAuthBufferHelperFunctions@@XZ
    virtual IAuthBufferHelperFunctions * GetAuthBufferHelperFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExternalExecutionContext@AuthBufferExecutionContext@@UEAAPEAVIExecutionContext@@XZ
    virtual IExecutionContext * GetExternalExecutionContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExternalExecutionContextLite@AuthBufferExecutionContext@@UEAAPEAVIExecutionContextLite@@XZ
    virtual IExecutionContextLite * GetExternalExecutionContextLite();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMemoryFunctions@AuthBufferExecutionContext@@UEAAPEAVIMemoryFunctions@@XZ
    virtual IMemoryFunctions * GetMemoryFunctions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSspiFunctions@AuthBufferExecutionContext@@UEAAPEAVISspiFunctions@@XZ
    virtual ISspiFunctions * GetSspiFunctions();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AuthBufferExecutionContext@@UEAA@XZ
    virtual ~AuthBufferExecutionContext();
};
