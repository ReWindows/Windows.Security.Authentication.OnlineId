#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 5 member(s).
class CWLIDCCHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareUnicodeString@CWLIDCCHelper@@SAJPEAU_UNICODE_STRING@@0E@Z
    static long CompareUnicodeString(_UNICODE_STRING *, _UNICODE_STRING *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasClockChanged@CWLIDCCHelper@@SA_NPEAVIExecutionContextLite@@AEAK@Z
    static bool HasClockChanged(IExecutionContextLite *, unsigned long &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStringInTableIgnoreCase@CWLIDCCHelper@@SA_NPEBG_KQEBQEBG@Z
    static bool IsStringInTableIgnoreCase(unsigned short const *, uint64_t, unsigned short const * const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateAuthIdEx2@CWLIDCCHelper@@SAJPEBEKPEAU_UNICODE_STRING@@@Z
    static long ValidateAuthIdEx2(unsigned char const *, unsigned long, _UNICODE_STRING *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClockReliabilityDataHelper@CWLIDCCHelper@@CAJPEAVIExecutionContextLite@@PEAUHKEY__@@@Z
    static long SetClockReliabilityDataHelper(IExecutionContextLite *, HKEY__*);
};
