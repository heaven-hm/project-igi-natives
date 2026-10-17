// IGI native provenance: HumanPlayer_Invoke12_40FB90 - 0x0040FB90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040FB90-HumanPlayer_Invoke12_40FB90.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_Invoke12_40FB90.h"

void* HumanPlayer_Invoke12_40FB90(void* arg1, void* arg2)

{
    void* result = arg2;

    if (*(arg1 + 8) & 1)
    {
        result = Bones_PlayAnimation(*(result + 0x4ec) + 0x68, 0,
            *(HumanPlayer_LoadParameters_13(Table_GetAt(result + 0x4c4, 0)) + 0x688), 1, 0f);
        *(arg1 + 0x14) = HumanPlayer_ApplyRecoil_8;
    }

    return result;
}
