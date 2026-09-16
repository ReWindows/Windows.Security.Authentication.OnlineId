#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 10 member(s).
class SspiFunctions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SspiCopyAuthIdentity@SspiFunctions@@UEAAJPEAXPEAPEAX@Z
    virtual long SspiCopyAuthIdentity(void *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SspiDecryptAuthIdentityEx@SspiFunctions@@UEAAJKPEAX@Z
    virtual long SspiDecryptAuthIdentityEx(unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SspiEncryptAuthIdentityEx@SspiFunctions@@UEAAJKPEAX@Z
    virtual long SspiEncryptAuthIdentityEx(unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SspiFreeAuthIdentity@SspiFunctions@@UEAAXPEAX@Z
    virtual void SspiFreeAuthIdentity(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SspiLocalFree@SspiFunctions@@UEAAXPEAX@Z
    virtual void SspiLocalFree(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SspiMarshalAuthIdentity@SspiFunctions@@UEAAJPEAXPEAKPEAPEAD@Z
    virtual long SspiMarshalAuthIdentity(void *, unsigned long *, char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SspiUnmarshalAuthIdentity@SspiFunctions@@UEAAJKPEADPEAPEAX@Z
    virtual long SspiUnmarshalAuthIdentity(unsigned long, char *, void * *);
};
