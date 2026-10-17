// Original IGI.EXE function: Human_FindNextCamera (VA 0x004828D0; static CFG gate PASS, CFG score 1.000).
#include "Human_FindNextCamera.h"
void* Human_FindNextCamera(void* a1)

// Sig: void Human_FindNextCamera(HumanPlayer* human)
// Note: Debug camera cycler: advances to the next camera/view target attached
// to the human player (decompiled body polls input keys). Param: human =
// human-player pointer. Pass1-verified function start; restored - it existed
// only in the Natives.hpp enum and was never serialized to JSON.
{
    if (DEBUG_KEYSENABLEINVALID(0x10))
        return FX_ErrorInHumancameraHu_2(a1);

    if (DEBUG_KEYSENABLEINVALID(0x1e))
    {
        int32_t tmpD = *(a1 + 0x11c);
        *(a1 + 0x68) = *(a1 + 0x120);
        *(a1 + 0x118) = tmpD;
        return a1;
    }

    void* valA5 = DEBUG_KEYSENABLEINVALID(0x12);

    if (valA5)
        valA5 = FX_ErrorInHumancameraHu_3(a1);

    return valA5;
}
