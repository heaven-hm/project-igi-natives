// IGI native provenance: CombatState_Invoke6_489200 - 0x00489200 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00489200-CombatState_Invoke6_489200.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_Invoke6_489200.h"

int32_t CombatState_Invoke6_489200(void* arg1)

{
    g_bc2360 = 0;
    Level_SetMission_6();

    if (Script_EvaluateCondition_4(arg1) >= 0)
    {
        int32_t eax_1 = Script_SpawnNewTask_6();
        int32_t ecx_1 = 0;
        ecx_1 = *(arg1 + 0x1c);
        int32_t eax_5 = *(((eax_1 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (eax_5)
            eax_5(arg1);
    }

    Script_CallNativeHandler_6(arg1 + 0x7c);
    Script_CallNativeHandler_6(arg1 + 0xcc);
    int32_t result = Menu_FormatScreen_3(*(arg1 + 0x120));
    *(arg1 + 0x120) = 0;
    return result;
}
