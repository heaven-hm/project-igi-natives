// Original IGI.EXE function: ElevatorFloorIndicator_Setup (VA 0x0043CA10; static CFG gate PASS, CFG score 1.000).
#include "ElevatorFloorIndicator_Setup.h"
struct status_msg* ElevatorFloorIndicator_Setup(long double context , int32_t param_2)

{
    int32_t* i = *(param_2 + 8);

    if (*i && i)
    {
        int32_t temp_1 = g_afa7e0;

        do
        {
            int32_t* source_1 = *i;
            void* data_4;

            if (!source_1)
                data_4 = nullptr;
            else
            {
                int32_t data_1 = *source_1;
                int32_t data_2 = -(data_1);
                data_4 = (data_2 - data_2) & source_1;
            }

            *((temp_1 << 2) + &g_afa6e0) = data_4;
            int32_t temp_2 = temp_1 + 1;
            int32_t data_5 = 0;
            g_afa7e0 = temp_2;
            data_5 = i[7];
            int32_t data_6 = *((data_5 << 2) + &g_a970e0);

            if (data_6)
            {
                data_6(i);
                temp_2 = g_afa7e0;
            }

            i = *((temp_2 << 2) + &g_afa6dc);
            temp_1 = temp_2 - 1;
            g_afa7e0 = temp_1;
        } while (i);
    }

    int32_t context_val;

    if (!Script_FormatString_6(param_2 + 0x1a4))
        context_val = param_2;
    else
    {
        Script_SpawnNewTask_7(param_2 + 0x1a4, param_2);
        context_val = context;
    }

    int32_t source_4;

    if (!Script_FormatString_6(param_2 + 0x1f4))
        source_4 = param_2;
    else
    {
        Script_SpawnNewTask_7(param_2 + 0x1f4, param_2);
🚫🚫🚫        int32_t item_8_2 = /* int32_t item_8_2 = (unimplemented  {fistp qword [stack_ptr+0x14], fp0}).d */;
        /* unimplemented  {fistp qword [stack_ptr+0x14], fp0} */
        source_4 = item_8_2;
    }

    char* data_9 = param_2 + 0x170;

    if (!context_val)
        data_9 = param_2 + 0x180;

    struct status_msg* result = DynObj_CreateMagicObject_5(param_2, DynObj_Missing(data_9));

    if (source_4)
    {
        result = SoundSys_SetMasterVolume_7(Script_FormatString(), param_2 + 0x190);

        if (result)
            return SoundSys_StopSoundSample_7(result, param_2 + 0x20);
    }

    return result;
}
