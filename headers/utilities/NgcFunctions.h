#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 29 member(s).
class NgcFunctions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BCryptGenRandom@NgcFunctions@@UEAAJPEAXPEAEKK@Z
    virtual long BCryptGenRandom(void *, unsigned char *, unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemTimeAsFileTime@NgcFunctions@@UEAAXPEAU_FILETIME@@@Z
    virtual void GetSystemTimeAsFileTime(_FILETIME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcCreateContainer@NgcFunctions@@UEAAJPEBG00PEAUHWND__@@00KPEA_K@Z
    virtual long NgcCreateContainer(unsigned short const *, unsigned short const *, unsigned short const *, HWND__*, unsigned short const *, unsigned short const *, unsigned long, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcCreateUserIdKey@NgcFunctions@@UEAAJPEAU_NGC_IDP_ACCOUNT_INFO@@PEBGPEAUHWND__@@_KKPEAPEAGPEAPEAEPEAKPEA_K@Z
    virtual long NgcCreateUserIdKey(_NGC_IDP_ACCOUNT_INFO *, unsigned short const *, HWND__*, uint64_t, unsigned long, unsigned short * *, unsigned char * *, unsigned long *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcCreateUserIdKeyEx@NgcFunctions@@UEAAJPEAU_NGC_IDP_ACCOUNT_INFO@@PEBGPEAUHWND__@@1_KKPEAPEAGPEAPEAEPEAKPEA_K@Z
    virtual long NgcCreateUserIdKeyEx(_NGC_IDP_ACCOUNT_INFO *, unsigned short const *, HWND__*, unsigned short const *, uint64_t, unsigned long, unsigned short * *, unsigned char * *, unsigned long *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcDecryptWithSymmetricPopKey@NgcFunctions@@UEAAJPEAEKPEBEK1K1K1KPEAPEAEPEAK@Z
    virtual long NgcDecryptWithSymmetricPopKey(unsigned char *, unsigned long, unsigned char const *, unsigned long, unsigned char const *, unsigned long, unsigned char const *, unsigned long, unsigned char const *, unsigned long, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcDeleteContainer@NgcFunctions@@UEAAJPEBG00@Z
    virtual long NgcDeleteContainer(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcDeleteContainerEx@NgcFunctions@@UEAAJPEBGK@Z
    virtual long NgcDeleteContainerEx(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcDeleteUserIdKey@NgcFunctions@@UEAAJPEBG@Z
    virtual long NgcDeleteUserIdKey(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcEnumContainers@NgcFunctions@@UEAAJPEBGPEAPEAU_NGC_CONTAINER_ENUM_INFO@@PEAPEAX@Z
    virtual long NgcEnumContainers(unsigned short const *, _NGC_CONTAINER_ENUM_INFO * *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcEnumUserIdKeys@NgcFunctions@@UEAAJPEBG000PEAPEAU_NGC_USER_ID_KEY_INFO@@PEAPEAX@Z
    virtual long NgcEnumUserIdKeys(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, _NGC_USER_ID_KEY_INFO * *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcFreeEnumState@NgcFunctions@@UEAAXPEAX@Z
    virtual void NgcFreeEnumState(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcGetKeyAttestationForUserIdKey@NgcFunctions@@UEAAJPEBGPEAUHWND__@@PEAPEAEPEAK23PEAW4_NGC_KEY_STATUS@@@Z
    virtual long NgcGetKeyAttestationForUserIdKey(unsigned short const *, HWND__*, unsigned char * *, unsigned long *, unsigned char * *, unsigned long *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcGetLogonDecryptionKeyName@NgcFunctions@@UEAAJPEBG00PEAPEAG@Z
    virtual long NgcGetLogonDecryptionKeyName(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcGetPinRecoveryParams@NgcFunctions@@UEAAJPEAPEAG00@Z
    virtual long NgcGetPinRecoveryParams(unsigned short * *, unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcGetSymmetricPopKeyTransportKey@NgcFunctions@@UEAAJPEAU_NGC_IDP_ACCOUNT_INFO@@PEBGPEAW4_NGC_KEY_TYPE@@KPEAPEAEPEAK3434PEAW4_NGC_KEY_STATUS@@@Z
    virtual long NgcGetSymmetricPopKeyTransportKey(_NGC_IDP_ACCOUNT_INFO *, unsigned short const *, int *, unsigned long, unsigned char * *, unsigned long *, unsigned char * *, unsigned long *, unsigned char * *, unsigned long *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcGetSymmetricPopKeyTransportKeyName@NgcFunctions@@UEAAJPEAU_NGC_IDP_ACCOUNT_INFO@@PEBGPEAW4_NGC_KEY_TYPE@@KPEAPEAGPEAW4_NGC_KEY_STATUS@@@Z
    virtual long NgcGetSymmetricPopKeyTransportKeyName(_NGC_IDP_ACCOUNT_INFO *, unsigned short const *, int *, unsigned long, unsigned short * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcGetUserIdKeyPublicKey@NgcFunctions@@UEAAJPEBGPEAPEAEPEAK@Z
    virtual long NgcGetUserIdKeyPublicKey(unsigned short const *, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcImportSymmetricPopKey@NgcFunctions@@UEAAJPEAU_NGC_IDP_ACCOUNT_INFO@@PEBGKPEBEKPEAPEAEPEAK@Z
    virtual long NgcImportSymmetricPopKey(_NGC_IDP_ACCOUNT_INFO *, unsigned short const *, unsigned long, unsigned char const *, unsigned long, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcPackAuthBuffer@NgcFunctions@@UEAAJPEBG00_K01HPEAPEAEPEAK@Z
    virtual long NgcPackAuthBuffer(unsigned short const *, unsigned short const *, unsigned short const *, uint64_t, unsigned short const *, uint64_t, int, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcRecoverPinSilentWithToken@NgcFunctions@@UEAAJPEAUHWND__@@PEBG@Z
    virtual long NgcRecoverPinSilentWithToken(HWND__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcRenewKeyAttestation@NgcFunctions@@UEAAJPEBG00K@Z
    virtual long NgcRenewKeyAttestation(unsigned short const *, unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcSignWithSymmetricPopKey@NgcFunctions@@UEAAJPEAEKPEBEK0K1KPEAPEAEPEAK@Z
    virtual long NgcSignWithSymmetricPopKey(unsigned char *, unsigned long, unsigned char const *, unsigned long, unsigned char *, unsigned long, unsigned char const *, unsigned long, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcSignWithUserIdKey@NgcFunctions@@UEAAJPEBGPEBEKPEAUHWND__@@PEAPEAEPEAK@Z
    virtual long NgcSignWithUserIdKey(unsigned short const *, unsigned char const *, unsigned long, HWND__*, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcSignWithUserIdKeyEx@NgcFunctions@@UEAAJPEBGPEBEKPEAUHWND__@@0KPEAPEAEPEAK@Z
    virtual long NgcSignWithUserIdKeyEx(unsigned short const *, unsigned char const *, unsigned long, HWND__*, unsigned short const *, unsigned long, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcSignWithUserIdKeySilent@NgcFunctions@@UEAAJPEBG_KPEBEKPEAPEAEPEAK@Z
    virtual long NgcSignWithUserIdKeySilent(unsigned short const *, uint64_t, unsigned char const *, unsigned long, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NgcVerifyWithSymmetricPopKey@NgcFunctions@@UEAAJPEAEKPEBEK1K1K1K@Z
    virtual long NgcVerifyWithSymmetricPopKey(unsigned char *, unsigned long, unsigned char const *, unsigned long, unsigned char const *, unsigned long, unsigned char const *, unsigned long, unsigned char const *, unsigned long);
};
