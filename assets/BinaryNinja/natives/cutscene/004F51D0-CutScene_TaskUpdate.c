// IGI native provenance: CutScene_TaskUpdate - 0x004F51D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F51D0-CutScene_TaskUpdate.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CutScene_TaskUpdate.h"
int32_t* CutScene_TaskUpdate(long double context , void* param_2)

// Sig: int CutScene_TaskUpdate(void* cutsceneTask)
// Note: Per-frame UPDATE of the running CutScene task. Alternative
// cutscene-kill point: force an immediate completion return here and any
// created cutscene ends on frame one. Verified: referenced as update cb inside
// CutScene_TaskCreate 0x4F4B00.
{
    int32_t* i = *(param_2 + 8);

    if (*i && i)
    {
        int32_t temp_val = g_afa7e0;

        do
        {
            int32_t* dest_1 = *i;
            void* data_4;

            if (!dest_1)
                data_4 = nullptr;
            else
            {
                int32_t data_1 = *dest_1;
                int32_t data_2 = -(data_1);
                data_4 = (data_2 - data_2) & dest_1;
            }

            *((temp_val << 2) + &g_afa6e0) = data_4;
            int32_t temp_1 = temp_val + 1;
            int32_t data_5 = 0;
            g_afa7e0 = temp_1;
            data_5 = i[7];
            int32_t data_6 = *((data_5 << 2) + &g_a970e0);

            if (data_6)
            {
                data_6(i);
                temp_1 = g_afa7e0;
            }

            i = *((temp_1 << 2) + &g_afa6dc);
            temp_val = temp_1 - 1;
            g_afa7e0 = temp_val;
        } while (i);
    }

    if (Script_FormatString_6(param_2 + 0x7c))
    {
        Script_SpawnNewTask_7(param_2 + 0x7c, param_2);
        *(param_2 + 0x60) = context;
    }

    if (Script_FormatString_6(param_2 + 0xcc))
    {
        Script_SpawnNewTask_7(param_2 + 0xcc, param_2);
🚫🚫🚫        char item_8_2 = /* char item_8_2 = (unimplemented  {fistp qword [stack_ptr+0x14], fp0}).b */;
        /* unimplemented  {fistp qword [stack_ptr+0x14], fp0} */

        if (item_8_2)
        {
            *(param_2 + 0x64) = 0;
            *(param_2 + 0x61) = 0;
        }
    }

    if (!*(param_2 + 0x26d))
        goto label_4f52a8;

    int32_t* data_12;

    if (*(param_2 + 0x60))
    {
    label_4f52ae:
        *(param_2 + 0x26c) = 0;
        Script_ParseEnumInt32_18(param_2);
        data_12 = Script_FormatString_6(param_2 + 0x11c);

        if (!data_12)
            *(param_2 + 0x64) += 1;
        else
        {
            Script_SpawnNewTask_7(param_2 + 0x11c, param_2);
🚫🚫            /* unimplemented  {fimul fp0, dword [&g_a76c54]} */
            void* data_13 = *(param_2 + 0x64);
🚫🚫🚫            int32_t item_8_3 = /* int32_t item_8_3 =
                (unimplemented  {fistp qword [stack_ptr+0xc], fp0}).d */;
            /* unimplemented  {fistp qword [stack_ptr+0xc], fp0} */
            data_12 = data_13 + item_8_3;
            *(param_2 + 0x64) = data_12;

            if (data_13 + item_8_3 < 0)
                *(param_2 + 0x64) = 0;
        }
    }
    else
    {
        *(param_2 + 0x270) = SoundSys_SetFrequency_9();
    label_4f52a8:

        if (*(param_2 + 0x60))
            goto label_4f52ae;

        data_12 = SoundSys_SetFrequency_9();

        if (*(param_2 + 0x270) != data_12)
        {
            int32_t* data_14 = *(param_2 + 0x260);

            if (data_14)
            {
                QTask_FindType(data_14);
                *(param_2 + 0x260) = 0;
            }

            int32_t* data_15 = *(param_2 + 0x25c);

            if (data_15)
            {
                QTask_FindType(data_15);
                *(param_2 + 0x25c) = 0;
            }

            int32_t* data_16 = *(param_2 + 0x264);

            if (data_16)
            {
                QTask_FindType(data_16);
                *(param_2 + 0x264) = 0;
            }

            data_12 = *(param_2 + 0x268);

            if (data_12)
            {
                data_12 = QTask_FindType(data_12);
                *(param_2 + 0x268) = 0;
            }
        }
    }

    if (*(param_2 + 0x26d))
    {
    label_4f539d:

        if (*(param_2 + 0x60))
        {
            *(param_2 + 0x26d) = *(param_2 + 0x60);
            return data_12;
        }

        int32_t* data_17 = Script_FormatString_6(param_2 + 0x1bc);

        if (!data_17)
        {
            *(param_2 + 0x26d) = *(param_2 + 0x60);
            return data_17;
        }

        data_12 = Script_SpawnNewTask_7(param_2 + 0x1bc, param_2);
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
    }
    else
    {
        if (*(param_2 + 0x60))
        {
            data_12 = Script_FormatString_6(param_2 + 0x16c);

            if (data_12)
            {
                data_12 = Script_SpawnNewTask_7(param_2 + 0x16c, param_2);
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
            }
        }

        if (*(param_2 + 0x26d))
            goto label_4f539d;
    }

    data_12 = *(param_2 + 0x60);
    *(param_2 + 0x26d) = data_12;
    return data_12;
}
