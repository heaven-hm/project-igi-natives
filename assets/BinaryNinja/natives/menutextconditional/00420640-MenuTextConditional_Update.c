// Original IGI.EXE function: MenuTextConditional_Update (VA 0x00420640; static CFG gate PASS, CFG score 1.000).
#include "MenuTextConditional_Update.h"
int32_t MenuTextConditional_Update(long double context , int32_t param_2, int32_t param_3)

{
    void* data_val = *(param_2 + 0x44);
    *(param_2 + 0x28) = 0;
    *(param_2 + 0x2c) = 0;

    if (data_val)
    {
        void* data_1 = Menu_HandleInput_3(data_val, param_2 + 0x94);
        *(param_2 + 0x20c) = Menu_DrawWidget_3(*(param_2 + 0x44), "glow.spr");
        int32_t* data_3 = *(param_2 + 0x114);

        if (data_3)
        {
            Sys_ReadFileBlock_18(data_3);
            *(param_2 + 0x114) = 0;
        }

        if (data_1)
        {
            int32_t temp_2 = (g_c28b44 >> 1) + *(param_2 + 0x20) - 0x140;
            int32_t temp_3 = (g_c28b48 >> 1) + *(param_2 + 0x24) - 0xf0;
            char* data_9;
            int32_t entity_5;
            data_9 = Menu_LocalSS(*(param_2 + 0x44), param_2 + 0x54);
            int32_t item_20_3 = entity_5;
            int32_t item_24_1 = entity_5;
            int32_t** data_10 = Sys_OpenFileStream_18(data_1, temp_2, temp_3, data_9);
            *(param_2 + 0x114) = data_10;
            data_10[8] = 0;
            *(param_2 + 0x28) = Sys_CheckHeap_21(*(param_2 + 0x114));
            *(param_2 + 0x2c) = Sys_AllocateMemory_22(*(param_2 + 0x114));
        }
    }

    Script_Isexists(param_2 + 0x11c, param_2);
    Script_Isexists(param_2 + 0x16c, param_2);
    Script_Isexists(param_2 + 0x1bc, param_2);

    if (*(param_2 + 0x11c))
        *(param_2 + 0x4c) = 1;

    if (Script_FormatString_6(param_2 + 0x16c))
    {
        Script_SpawnNewTask_7(param_2 + 0x16c, param_2);
        int32_t item_8_1 = context;
        *(param_2 + 0x210) = item_8_1;
        *(param_2 + 0x4c) = item_8_1;
    }

    if (Script_FormatString_6(param_2 + 0x1bc))
    {
        Script_SpawnNewTask_7(param_2 + 0x1bc, param_2);
🚫🚫🚫        int32_t item_8_2 = /* int32_t item_8_2 = (unimplemented  {fistp qword [stack_ptr+0x18], fp0}).d */;
        /* unimplemented  {fistp qword [stack_ptr+0x18], fp0} */
        *(param_2 + 0x214) = item_8_2;
    }

    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(param_2, param_3);
}
