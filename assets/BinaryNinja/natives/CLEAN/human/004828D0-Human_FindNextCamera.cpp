// IGI native provenance: Human_FindNextCamera - 0x004828D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004828D0-Human_FindNextCamera.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Human_FindNextCamera.h"
void* Human_FindNextCamera(void* context)

// Sig: void Human_FindNextCamera(HumanPlayer* human)
// Note: Debug camera cycler: advances to the next camera/view target attached
// to the human player (decompiled body polls input keys). Param: human =
// human-player pointer. Pass1-verified function start; restored - it existed
// only in the Natives.hpp enum and was never serialized to JSON.
{
    if (DEBUG_KEYSENABLEINVALID(0x10))
        return FX_ErrorInHumancameraHu_2(context);

    if (DEBUG_KEYSENABLEINVALID(0x1e))
    {
        int32_t temp_val = *(context + 0x11c);
        *(context + 0x68) = *(context + 0x120);
        *(context + 0x118) = temp_val;
        return context;
    }

    void* data_5 = DEBUG_KEYSENABLEINVALID(0x12);

    if (data_5)
        data_5 = FX_ErrorInHumancameraHu_3(context);

    return data_5;
}
