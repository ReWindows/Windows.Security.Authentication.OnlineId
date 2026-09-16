#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 5 member(s).
class AuthBufferHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAuthBuffer@AuthBufferHelper@@UEAAJPEAVIAuthBufferExecutionContext@@PEAVIMemoryManager@@PEBEKPEBGKHPEAPEAEPEAK@Z
    virtual long CreateAuthBuffer(IAuthBufferExecutionContext *, IMemoryManager *, unsigned char const *, unsigned long, unsigned short const *, unsigned long, int, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAuthBuffer@AuthBufferHelper@@UEAAJPEAVIAuthBufferExecutionContext@@PEBEKPEBGKHPEAPEAEPEAK@Z
    virtual long CreateAuthBuffer(IAuthBufferExecutionContext *, unsigned char const *, unsigned long, unsigned short const *, unsigned long, int, unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAuthDataFromBuffer@AuthBufferHelper@@UEAAJPEAVIAuthBufferExecutionContext@@PEBEKPEAPEAGPEAPEAEPEAK4@Z
    virtual long GetAuthDataFromBuffer(IAuthBufferExecutionContext *, unsigned char const *, unsigned long, unsigned short * *, unsigned char * *, unsigned long *, unsigned long *);
};
