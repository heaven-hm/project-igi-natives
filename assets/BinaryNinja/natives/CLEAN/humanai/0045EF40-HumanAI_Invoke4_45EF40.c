// IGI native provenance: HumanAI_Invoke4_45EF40 - 0x0045EF40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045EF40-HumanAI_Invoke4_45EF40.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanAI_Invoke4_45EF40.h"

int32_t HumanAI_Invoke4_45EF40(void* arg1)

{
    DynObj_TryingToRemoveUnrigi(Level_InitTextures_4(), arg1);
    DynObj_TryingToRemoveUnrigi(g_5bdc24, arg1);
    FX_SmokeEmit_13(arg1);
    FX_ErrorInHumancameraHu_5(arg1);
    AI_CheckVisibility_17(arg1);
    int32_t* dest_ptr = arg1 + 0x854;
    int32_t i_1 = 0x20;
    int32_t i;

    do
    {
        int32_t* eax_2 = *dest_ptr;

        if (eax_2)
            Sys_ReadFileBlock_18(eax_2);

        dest_ptr = &dest_ptr[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    int32_t result = Script_EvaluateCondition_4(arg1);

    if (result >= 0)
    {
        int32_t eax_3 = Script_SpawnNewTask_6();
        int32_t edx_1 = 0;
        edx_1 = *(arg1 + 0x1c);
        result = *(((eax_3 * 0x180 + edx_1) << 2) + &g_a96ae0);

        if (result)
            return result(arg1);
    }

    return result;
}
