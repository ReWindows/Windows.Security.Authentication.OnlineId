#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 26 member(s).
namespace Windows::Internal::Security::WebAuthentication {
class SystemAuthenticatorInternal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SystemAuthenticatorInternal@WebAuthentication@Security@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SystemAuthenticatorInternal@WebAuthentication@Security@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SystemAuthenticatorInternal@WebAuthentication@Security@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemTicketAsync@SystemAuthenticatorInternal@WebAuthentication@Security@Internal@Windows@@UEAAJPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@35@U_GUID@@EPEAPEAU?$IAsyncOperation@PEAVOnlineIdSystemTicketResult@OnlineId@Authentication@Security@Windows@@@Foundation@5@@Z
    virtual long GetSystemTicketAsync(::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest *, _GUID, unsigned char, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SystemAuthenticatorInternal@WebAuthentication@Security@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SystemAuthenticatorInternal@WebAuthentication@Security@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SystemAuthenticatorInternal@WebAuthentication@Security@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SystemAuthenticatorInternal@WebAuthentication@Security@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SystemAuthenticatorInternal@WebAuthentication@Security@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSystemTicketRequest@SystemAuthenticatorInternal@WebAuthentication@Security@Internal@Windows@@AEAAJPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@35@AEAV?$ComPtr@VOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@WRL@Microsoft@@@Z
    long CreateSystemTicketRequest(::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemTicketAsyncWorkerGetResults@SystemAuthenticatorInternal@WebAuthentication@Security@Internal@Windows@@AEAAJAEBV?$ComPtr@U?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@@WRL@Microsoft@@AEAV?$ComPtr@VOnlineIdSystemTicketResult@OnlineId@Authentication@Security@Windows@@@78@@Z
    long GetSystemTicketAsyncWorkerGetResults(WindissectOpaque const &, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemTicketAsyncWorkerStartAuth@SystemAuthenticatorInternal@WebAuthentication@Security@Internal@Windows@@AEAAJPEAUIUnknown@@AEBV?$ComPtr@VOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@WRL@Microsoft@@U_GUID@@AEAV?$ComPtr@U?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@@89@@Z
    long GetSystemTicketAsyncWorkerStartAuth(IUnknown *, WindissectOpaque const &, _GUID, WindissectOpaque &);
};
} // namespace Windows::Internal::Security::WebAuthentication
