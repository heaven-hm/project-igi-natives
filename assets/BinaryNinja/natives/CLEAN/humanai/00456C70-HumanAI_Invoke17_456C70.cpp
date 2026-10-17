// IGI native provenance: HumanAI_Invoke17_456C70 - 0x00456C70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00456C70-HumanAI_Invoke17_456C70.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_Invoke17_456C70.h"

int32_t HumanAI_Invoke17_456C70(void* arg1, int32_t arg2)

{
    (*((AI_UpdateOrders_17() << 2) + &g_a96ae0))(arg1, arg2);
    SoundSys_PlaySoundSample_16(arg1 + 0x2ec, HumanAI_ExecutePipeline_456CF0, &data_53e6a8, 0, 1,
        0x53e718);
    *(arg1 + 0x338) = 0x53e720;
    FX_FireBallUpdate_14(arg1, 0x53e798);
    *(arg1 + 0xcf8) = 2;
    *(arg1 + 0xcfc) = 2;
    *(arg1 + 0xd00) = 1;
    *(arg1 + 0xd01) = 0;
    return 2;
}
