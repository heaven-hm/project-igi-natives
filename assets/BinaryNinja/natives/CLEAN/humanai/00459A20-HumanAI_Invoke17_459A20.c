// IGI native provenance: HumanAI_Invoke17_459A20 - 0x00459A20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00459A20-HumanAI_Invoke17_459A20.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_Invoke17_459A20.h"

int32_t* HumanAI_Invoke17_459A20(void* arg1, int32_t arg2)

{
    (*((AI_UpdateOrders_17() << 2) + &g_a96ae0))(arg1, arg2);
    SoundSys_PlaySoundSample_16(arg1 + 0x2ec, AI_TakeCover_12, &data_53e8b8, 0, 1, 0x53e980);
    *(arg1 + 0x338) = 0x53e9b8;
    int32_t* result = FX_FireBallUpdate_14(arg1, 0x53eae8);
    *(arg1 + 0xcf8) = 3;
    *(arg1 + 0xcfc) = 0xffffffff;
    *(arg1 + 0xd00) = 1;
    *(arg1 + 0xd01) = 0;
    *(arg1 + 0xd08) = 0;
    *(arg1 + 0xd04) = 0x3ea8f5c3;
    return result;
}
