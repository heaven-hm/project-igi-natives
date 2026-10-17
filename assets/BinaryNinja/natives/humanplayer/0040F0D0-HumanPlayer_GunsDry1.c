// IGI native provenance: HumanPlayer_GunsDry1 - 0x0040F0D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040F0D0-HumanPlayer_GunsDry1.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_GunsDry1.h"
struct status_msg* HumanPlayer_GunsDry1(void* context, void* param_2)

{
    HumanPlayer_CheckCollision_9(param_2, 1.40129846e-45.0f);
    struct status_msg* result = SoundSys_SetMasterVolume_7(*(param_2 + 0x4ec), "guns_dry_1");
    *(context + 0x14) = sub_40f100;
    return result;
}
