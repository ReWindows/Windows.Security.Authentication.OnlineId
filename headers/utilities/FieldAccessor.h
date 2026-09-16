#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.OnlineId.dll by Windissect. 2 member(s).
class FieldAccessor {
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringValueNoLock@FieldAccessor@@IEAAJAEAVString@Internal@Windows@@PEAPEAUHSTRING__@@@Z
    long GetStringValueNoLock(::Windows::Internal::String &, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutStringValueNoLock@FieldAccessor@@IEAAJAEAVString@Internal@Windows@@PEAUHSTRING__@@@Z
    long PutStringValueNoLock(::Windows::Internal::String &, HSTRING__*);
};
