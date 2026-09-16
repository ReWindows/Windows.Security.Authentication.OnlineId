#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 4 member(s).
class CredSerializationHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EncryptBufferForSameLogon@CredSerializationHelper@@SAJPEAVIWinApiLite@@QEAEKPEAPEAEPEAK@Z
    static long EncryptBufferForSameLogon(IWinApiLite *, unsigned char * const, unsigned long, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeCredentials@CredSerializationHelper@@SAJPEAVIExecutionContextLite@@PEAU_WLIDCredentialBag@@_NPEAPEAEPEAK@Z
    static long SerializeCredentials(IExecutionContextLite *, _WLIDCredentialBag *, bool, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeCredentials@CredSerializationHelper@@SAJPEAVIExecutionContextLite@@W4_WLIDCredentialsType@@W4_WLIDCredentialAttribute@@PEBGK23K_NPEAPEAEPEAK@Z
    static long SerializeCredentials(IExecutionContextLite *, int, int, unsigned short const *, unsigned long, int, unsigned short const *, unsigned long, bool, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeNgcKeyName@CredSerializationHelper@@SAJPEAVIExecutionContextLite@@PEBGPEAPEAEPEAK@Z
    static long SerializeNgcKeyName(IExecutionContextLite *, unsigned short const *, unsigned char * *, unsigned long *);
};
