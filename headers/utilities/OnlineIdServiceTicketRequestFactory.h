#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 5 member(s).
namespace Windows::Security::Authentication::OnlineId {
class OnlineIdServiceTicketRequestFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@OnlineIdServiceTicketRequestFactory@OnlineId@Authentication@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOnlineIdServiceTicketRequest@OnlineIdServiceTicketRequestFactory@OnlineId@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUIOnlineIdServiceTicketRequest@2345@@Z
    virtual long CreateOnlineIdServiceTicketRequest(HSTRING__*, HSTRING__*, ::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOnlineIdServiceTicketRequestAdvanced@OnlineIdServiceTicketRequestFactory@OnlineId@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIOnlineIdServiceTicketRequest@2345@@Z
    virtual long CreateOnlineIdServiceTicketRequestAdvanced(HSTRING__*, ::Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest * *);
};
} // namespace Windows::Security::Authentication::OnlineId
