// IGI native provenance: HumanAI_Invoke4_453680 - 0x00453680 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00453680-HumanAI_Invoke4_453680.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_Invoke4_453680.h"

void* HumanAI_Invoke4_453680(void* arg1)

{
    int32_t result_val = Script_EvaluateCondition_4(arg1);
    void* result = PatrolPath_OnEvent(arg1);
    *(arg1 + 0x2c) = result;

    if (result_val != 0xffffffff)
    {
        if (*(arg1 + 0x30))
        {
            Camera_ApplyHandiCam_33(arg1 + 0x20);
            *(arg1 + 0x20) = 0;
            *(arg1 + 0x24) = 0;
        }

        *(arg1 + 0x28) = result_val;
        result = Camera_SetFieldOfView_33(&g_5bda70, arg1 + 0x20);
        *(arg1 + 0x30) = 1;
    }

    return result;
}
