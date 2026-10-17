// IGI native provenance: AlarmControl_LoadParameters - 0x004408A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004408A0-AlarmControl_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AlarmControl_LoadParameters.h"
int32_t AlarmControl_LoadParameters(long double context , void* param_2)

{
    (*((Env_UpdateCameraLens_3() << 2) + &g_a970e0))(param_2);
    *(param_2 + 0x2a2) = *(param_2 + 0x2a1);
    char data_3 = *(param_2 + 0x190);

    if (data_3)
    {
        *(param_2 + 0x2a0) = 0;
        *(param_2 + 0x2a1) = 0;
    }
    else
    {
        data_3 = *(param_2 + 0x240);

        if (!data_3)
        {
            *(param_2 + 0x2a0) = 0;
            *(param_2 + 0x2a1) = 0;
        }
        else
        {
            if (Script_FormatString_6(param_2 + 0x2ac))
            {
                Script_SpawnNewTask_7(param_2 + 0x2ac, param_2);
                *(param_2 + 0x2a0) = context;
            }

            if (*(param_2 + 0x2a0))
                *(param_2 + 0x2a4) = Script_FormatString_4();

            data_3 = Script_FormatString_6(param_2 + 0x2fc);

            if (data_3)
            {
                int32_t data_7 = Script_SpawnNewTask_7(param_2 + 0x2fc, param_2);
🚫🚫🚫                char item_8_2 = /* char item_8_2 =
                    (unimplemented  {fistp qword [stack_ptr+0x10], fp0}).b */;
                /* unimplemented  {fistp qword [stack_ptr+0x10], fp0} */
                *(param_2 + 0x2a1) = item_8_2;
                return data_7;
            }
        }
    }

    return data_3;
}
