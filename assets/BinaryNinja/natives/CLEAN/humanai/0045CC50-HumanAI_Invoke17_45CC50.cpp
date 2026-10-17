// IGI native provenance: HumanAI_Invoke17_45CC50 - 0x0045CC50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045CC50-HumanAI_Invoke17_45CC50.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_Invoke17_45CC50.h"

int32_t* HumanAI_Invoke17_45CC50(void* arg1, int32_t arg2)

{
    __builtin_memset(arg1 + 0xcf8, 0, 0x58);
    (*((AI_UpdateOrders_17() << 2) + &g_a96ae0))(arg1, arg2);
    SoundSys_PlaySoundSample_16(arg1 + 0x2ec, AI_FireWeapon_16, &data_53ec10, 0, 1, 0x53ecd8);
    *(arg1 + 0x338) = 0x53ed10;
    int32_t* result = FX_FireBallUpdate_14(arg1, 0x53f1d0);
    *(arg1 + 0xcfc) = 0xffffffff;
    *(arg1 + 0xd00) = 1;
    *(arg1 + 0xd01) = 0;
    *(arg1 + 0xd08) = 0;
    *(arg1 + 0xd04) = 0x3ea8f5c3;
    *(arg1 + 0xcf8) = 1;
    return result;
}
