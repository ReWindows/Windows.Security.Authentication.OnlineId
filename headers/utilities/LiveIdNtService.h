#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 38 member(s).
class LiveIdNtService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCAcquireTokens@LiveIdNtService@@UEAAJPEAX_KKPEAU_WLIDRequestParams@@PEAJ33PEAPEAU_WLIDResponseParams@@3@Z
    virtual long WLIDCAcquireTokens(void *, uint64_t, unsigned long, _WLIDRequestParams *, long *, long *, long *, _WLIDResponseParams * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCAcquireTokensEnableCancel@LiveIdNtService@@UEAAJPEAX_KKPEAU_WLIDRequestParams@@PEAJ33PEAPEAU_WLIDResponseParams@@30@Z
    virtual long WLIDCAcquireTokensEnableCancel(void *, uint64_t, unsigned long, _WLIDRequestParams *, long *, long *, long *, _WLIDResponseParams * *, long *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCAcquireTokensEx@LiveIdNtService@@UEAAJPEAXPEAU_WLIDAcquireTokenParams@@KPEAU_WLIDRequestParams@@PEAU_WLIDAcquireTokenResults@@PEAPEAU_WLIDResponseParams@@0H@Z
    virtual long WLIDCAcquireTokensEx(void *, _WLIDAcquireTokenParams *, unsigned long, _WLIDRequestParams *, _WLIDAcquireTokenResults *, _WLIDResponseParams * *, void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCAcquireTokensWithNGC@LiveIdNtService@@UEAAJPEAXPEAU_WLIDAcquireTokenParams@@KPEAU_WLIDRequestParams@@PEAU_WLIDAcquireTokenResults@@PEAPEAU_WLIDResponseParams@@0H@Z
    virtual long WLIDCAcquireTokensWithNGC(void *, _WLIDAcquireTokenParams *, unsigned long, _WLIDRequestParams *, _WLIDAcquireTokenResults *, _WLIDResponseParams * *, void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCCleanupIdentity@LiveIdNtService@@UEAAJPEBG@Z
    virtual long WLIDCCleanupIdentity(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCConnectIdentity@LiveIdNtService@@UEAAJPEAXPEAU_WLID_CONNECT_PARAM@@@Z
    virtual long WLIDCConnectIdentity(void *, _WLID_CONNECT_PARAM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCCreateContext@LiveIdNtService@@UEAAJPEBG_KPEAPEAX@Z
    virtual long WLIDCCreateContext(unsigned short const *, uint64_t, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCCreateContextEx@LiveIdNtService@@UEAAJPEBG0_KPEAPEAX@Z
    virtual long WLIDCCreateContextEx(unsigned short const *, unsigned short const *, uint64_t, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCCreateContextWithLogonId@LiveIdNtService@@UEAAJPEBG0KJ_KPEAPEAX@Z
    virtual long WLIDCCreateContextWithLogonId(unsigned short const *, unsigned short const *, unsigned long, long, uint64_t, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCDeleteContext@LiveIdNtService@@UEAAJPEAPEAX@Z
    virtual long WLIDCDeleteContext(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCDisconnectIdentity@LiveIdNtService@@UEAAJPEAX@Z
    virtual long WLIDCDisconnectIdentity(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCEnumIdentities@LiveIdNtService@@UEAAJ_KPEBG1PEAKPEAPEAPEAG@Z
    virtual long WLIDCEnumIdentities(uint64_t, unsigned short const *, unsigned short const *, unsigned long *, unsigned short * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCGetCachedTokens@LiveIdNtService@@UEAAJPEAX_KKPEAU_WLIDRequestParams@@PEAPEAU_WLIDResponseParams@@@Z
    virtual long WLIDCGetCachedTokens(void *, uint64_t, unsigned long, _WLIDRequestParams *, _WLIDResponseParams * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCGetConfigDWORDValue@LiveIdNtService@@UEAAJKPEAK@Z
    virtual long WLIDCGetConfigDWORDValue(unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCGetConfigString@LiveIdNtService@@UEAAJPEBGPEAPEAG@Z
    virtual long WLIDCGetConfigString(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCGetDeviceDAToken@LiveIdNtService@@UEAAJPEAPEAG@Z
    virtual long WLIDCGetDeviceDAToken(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCGetIdentityProperty@LiveIdNtService@@UEAAJPEAXPEBGPEAPEAG@Z
    virtual long WLIDCGetIdentityProperty(void *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCGetKeyLatest@LiveIdNtService@@UEAAJPEAX_KPEBGPEAPEAG3PEA_J@Z
    virtual long WLIDCGetKeyLatest(void *, uint64_t, unsigned short const *, unsigned short * *, unsigned short * *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCGetKeyWithVersion@LiveIdNtService@@UEAAJPEAX_KPEBG2_JPEAPEAG@Z
    virtual long WLIDCGetKeyWithVersion(void *, uint64_t, unsigned short const *, unsigned short const *, int64_t, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCGetProofOfPossessionTokens@LiveIdNtService@@UEAAJPEBG0PEBU_GUID@@PEAKPEAPEAUProofOfPossessionCookieInfo@@@Z
    virtual long WLIDCGetProofOfPossessionTokens(unsigned short const *, unsigned short const *, _GUID const *, unsigned long *, ProofOfPossessionCookieInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCGetScenarioInlineUrlWithContextData@LiveIdNtService@@UEAAJKPEAPEAG@Z
    virtual long WLIDCGetScenarioInlineUrlWithContextData(unsigned long, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCGetServiceConfig@LiveIdNtService@@UEAAJPEBGPEAPEAG@Z
    virtual long WLIDCGetServiceConfig(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCGetSignedTokens@LiveIdNtService@@UEAAJPEAPEAU_WLIDSignedTokens@@@Z
    virtual long WLIDCGetSignedTokens(_WLIDSignedTokens * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCGetUserExtendedProperty@LiveIdNtService@@UEAAJPEBG0PEAPEAG@Z
    virtual long WLIDCGetUserExtendedProperty(unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCGetUserPropertiesFromSystemStore@LiveIdNtService@@UEAAJPEBGPEAKPEAPEAU_WLIDIdentityProperty@@@Z
    virtual long WLIDCGetUserPropertiesFromSystemStore(unsigned short const *, unsigned long *, _WLIDIdentityProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCHasPersistedCredential@LiveIdNtService@@UEAAJPEAXPEBGPEAH@Z
    virtual long WLIDCHasPersistedCredential(void *, unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCPersistCredential@LiveIdNtService@@UEAAJPEAXPEBG_K@Z
    virtual long WLIDCPersistCredential(void *, unsigned short const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCPersistCredentialForConnectedUser@LiveIdNtService@@UEAAJPEAXPEBG_K@Z
    virtual long WLIDCPersistCredentialForConnectedUser(void *, unsigned short const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCProvisionIdentityWithTransferToken@LiveIdNtService@@UEAAJPEBU_GUID@@PEBG1_KHPEAHPEAPEAX@Z
    virtual long WLIDCProvisionIdentityWithTransferToken(_GUID const *, unsigned short const *, unsigned short const *, uint64_t, int, int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCRegisterUserIdkey@LiveIdNtService@@UEAAJPEBG00_N_K@Z
    virtual long WLIDCRegisterUserIdkey(unsigned short const *, unsigned short const *, unsigned short const *, bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCRemovePersistedCredential@LiveIdNtService@@UEAAJPEAXPEBG_K@Z
    virtual long WLIDCRemovePersistedCredential(void *, unsigned short const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCRenewCertificate@LiveIdNtService@@UEAAJPEBG@Z
    virtual long WLIDCRenewCertificate(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCSetAuthData@LiveIdNtService@@UEAAJPEAX_KKPEAE@Z
    virtual long WLIDCSetAuthData(void *, uint64_t, unsigned long, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCSetIdentityExtendedProperty@LiveIdNtService@@UEAAJPEAXPEBG1@Z
    virtual long WLIDCSetIdentityExtendedProperty(void *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCUpdateConnectedIdentity@LiveIdNtService@@UEAAJPEAX_K@Z
    virtual long WLIDCUpdateConnectedIdentity(void *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WLIDCUpdateToken@LiveIdNtService@@UEAAJPEAXPEAU_WLIDTokenParams@@@Z
    virtual long WLIDCUpdateToken(void *, _WLIDTokenParams *);
};
