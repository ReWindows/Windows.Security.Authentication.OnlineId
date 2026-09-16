#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 47 member(s).
namespace Windows::Security::Authentication::OnlineId {
class OnlineIdAuthenticator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AuthenticateUserAsync@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJPEAUIOnlineIdServiceTicketRequest@2345@PEAPEAU?$IAsyncOperation@PEAVUserIdentity@OnlineId@Authentication@Security@Windows@@@Foundation@5@@Z
    virtual long AuthenticateUserAsync(::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AuthenticateUserAsyncAdvanced@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJPEAU?$IIterable@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Collections@Foundation@5@W4CredentialPromptType@2345@PEAPEAU?$IAsyncOperation@PEAVUserIdentity@OnlineId@Authentication@Security@Windows@@@85@@Z
    virtual long AuthenticateUserAsyncAdvanced(WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJPEAUICoreWindow@Core@UI@5@@Z
    virtual long Initialize(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJPEAX@Z
    virtual long Initialize(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@QEAA@XZ
    OnlineIdAuthenticator();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignOutUserAsync@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long SignOutUserAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationId@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_ApplicationId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AuthenticatedSafeCustomerId@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AuthenticatedSafeCustomerId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanSignOut@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJPEAE@Z
    virtual long get_CanSignOut(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ApplicationId@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@UEAAJU_GUID@@@Z
    virtual long put_ApplicationId(_GUID);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@UEAA@XZ
    virtual ~OnlineIdAuthenticator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSignOutImpl@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@AEAAJPEAVIExecutionContextModern@@PEBGPEAE@Z
    long CanSignOutImpl(IExecutionContextModern *, unsigned short const *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAuthenticatedSafeCustomerIdImpl@OnlineIdAuthenticator@OnlineId@Authentication@Security@Windows@@AEAAJPEAVIExecutionContextModern@@PEBGAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    long GetAuthenticatedSafeCustomerIdImpl(IExecutionContextModern *, unsigned short const *, WindissectOpaque &);
};
} // namespace Windows::Security::Authentication::OnlineId
