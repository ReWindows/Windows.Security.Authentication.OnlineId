#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 13 member(s).
class ATL {
public:
    class CAtlBaseModule;
    class CAtlPlex;
    class CAtlStringMgr;
    class CComCriticalSection;
    class CRegKey;
    class CStringData;
    class CWin32Heap;
    class Checked;
    class _ATL_BASE_MODULE70;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlCrtErrorCheck@ATL@@YAHH@Z
    int AtlCrtErrorCheck(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z
    HINSTANCE__* AtlFindStringResourceInstance(unsigned int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@IG@Z
    WindissectOpaque const * AtlGetStringResourceImage(HINSTANCE__*, unsigned int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@I@Z
    WindissectOpaque const * AtlGetStringResourceImage(HINSTANCE__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlHexValue@ATL@@YAFD@Z
    short AtlHexValue(char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlThrowImpl@ATL@@YAXJ@Z
    void AtlThrowImpl(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlThrowLastWin32@ATL@@YAXXZ
    void AtlThrowLastWin32();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Base64Decode@ATL@@YAHPEBDHPEAEPEAH@Z
    int Base64Decode(char const *, int, unsigned char *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@Z
    WindissectOpaque const * _AtlGetStringResourceImage(HINSTANCE__*, HRSRC__*, unsigned int);
};
