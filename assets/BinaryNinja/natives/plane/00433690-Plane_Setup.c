// IGI native provenance: Plane_Setup - 0x00433690 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00433690-Plane_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Plane_Setup.h"
struct status_msg* Plane_Setup(long double context , void* param_2)

{
    char data_val = Script_FormatString_6(param_2 + 0x838);

    if (data_val)
        Script_SpawnNewTask_7(param_2 + 0x838, param_2);

    struct status_msg* result;

    if (data_val && !context)
        result = Vehicle_UpdateCockpit_3(param_2);
    else
    {
        result = *(param_2 + 0x834);

        if (!result)
        {
            result = SoundSys_SetMasterVolume_7(param_2, "su27");

            if (result)
            {
                result = QTask_LinkEventHandler_2(result);
                *(param_2 + 0x834) = result;
            }
        }
    }

    int32_t* i = *(param_2 + 8);

    if (*i && i)
    {
        int32_t temp_1 = g_afa7e0;

        do
        {
            int32_t* source_1 = *i;
            void* data_5;

            if (!source_1)
                data_5 = nullptr;
            else
            {
                int32_t data_2 = *source_1;
                int32_t data_3 = -(data_2);
                data_5 = (data_3 - data_3) & source_1;
            }

            *((temp_1 << 2) + &g_afa6e0) = data_5;
            int32_t temp_2 = temp_1 + 1;
            int32_t data_6 = 0;
            g_afa7e0 = temp_2;
            data_6 = i[7];
            result = *((data_6 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                temp_2 = g_afa7e0;
            }

            i = *((temp_2 << 2) + &g_afa6dc);
            temp_1 = temp_2 - 1;
            g_afa7e0 = temp_1;
        } while (i);
    }

    return result;
}
