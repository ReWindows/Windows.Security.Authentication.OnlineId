#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 6 member(s).
namespace ARI::ProcessToken {
class SysAppId {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseToken@SysAppId@ProcessToken@ARI@@YAXPEAX@Z
    void CloseToken(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z
    long GetAppUserModelId(_TOKEN_SECURITY_ATTRIBUTE_V1const *, unsigned int, unsigned int *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamilyName@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z
    long GetPackageFamilyName(_TOKEN_SECURITY_ATTRIBUTE_V1const *, unsigned int, unsigned int *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageRelativeApplicationId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z
    long GetPackageRelativeApplicationId(_TOKEN_SECURITY_ATTRIBUTE_V1const *, unsigned int, unsigned int *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z
    long Open(void *, _TOKEN_SECURITY_ATTRIBUTES_INFORMATION * *, _TOKEN_SECURITY_ATTRIBUTE_V1const * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z
    long OpenTokenForProcess(void *, void * *);
};
} // namespace ARI::ProcessToken
