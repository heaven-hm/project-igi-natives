#include "004828D0-Human_FindNextCamera.h"
/* 0x004828d0 Human_FindNextCamera full linked: callers=1 callees=5 */
void* Human_FindNextCamera(void* a1)

// Sig: void Human_FindNextCamera(HumanPlayer* human)
// Note: Debug camera cycler: advances to the next camera/view target attached
// to the human player (decompiled body polls input keys). Param: human =
// human-player pointer. Pass1-verified function start; restored - it existed
// only in the Natives.hpp enum and was never serialized to JSON.
{
    if (DEBUG_KEYSENABLEINVALID(0x10))
        return sub_482930(a1);

    if (DEBUG_KEYSENABLEINVALID(0x1e))
    {
        int32_t edx = *(a1 + 0x11c);
        *(a1 + 0x68) = *(a1 + 0x120);
        *(a1 + 0x118) = edx;
        return a1;
    }

    void* eax_5 = DEBUG_KEYSENABLEINVALID(0x12);

    if (eax_5)
        eax_5 = sub_4829a0(a1);

    return eax_5;
}
