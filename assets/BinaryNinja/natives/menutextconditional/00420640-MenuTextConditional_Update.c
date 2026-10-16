#include "MenuTextConditional_Update.h"
int32_t MenuTextConditional_Update(int80_t a1 @ fp0, int32_t a2, int32_t a3)

{
    void* valA = *(a2 + 0x44);
    *(a2 + 0x28) = 0;
    *(a2 + 0x2c) = 0;

    if (valA)
    {
        void* valA1 = Menu_HandleInput_3(valA, a2 + 0x94);
        *(a2 + 0x20c) = Menu_DrawWidget_3(*(a2 + 0x44), "glow.spr");
        int32_t* valA3 = *(a2 + 0x114);

        if (valA3)
        {
            Sys_ReadFileBlock_18(valA3);
            *(a2 + 0x114) = 0;
        }

        if (valA1)
        {
            int32_t tmpD2 = (g_c28b44 >> 1) + *(a2 + 0x20) - 0x140;
            int32_t tmpD3 = (g_c28b48 >> 1) + *(a2 + 0x24) - 0xf0;
            char* valA9;
            int32_t objC5;
            valA9 = Menu_LocalSS(*(a2 + 0x44), a2 + 0x54);
            int32_t v_20_3 = objC5;
            int32_t v_24_1 = objC5;
            int32_t** valA10 = Sys_OpenFileStream_18(valA1, tmpD2, tmpD3, valA9);
            *(a2 + 0x114) = valA10;
            valA10[8] = 0;
            *(a2 + 0x28) = Sys_CheckHeap_21(*(a2 + 0x114));
            *(a2 + 0x2c) = Sys_AllocateMemory_22(*(a2 + 0x114));
        }
    }

    Script_Isexists(a2 + 0x11c, a2);
    Script_Isexists(a2 + 0x16c, a2);
    Script_Isexists(a2 + 0x1bc, a2);

    if (*(a2 + 0x11c))
        *(a2 + 0x4c) = 1;

    if (Script_FormatString_6(a2 + 0x16c))
    {
        Script_SpawnNewTask_7(a2 + 0x16c, a2);
        int32_t v_8_1 = a1;
        *(a2 + 0x210) = v_8_1;
        *(a2 + 0x4c) = v_8_1;
    }

    if (Script_FormatString_6(a2 + 0x1bc))
    {
        Script_SpawnNewTask_7(a2 + 0x1bc, a2);
🚫🚫🚫        int32_t v_8_2 = /* int32_t v_8_2 = (unimplemented  {fistp qword [esp+0x18], fp0}).d */;
        /* unimplemented  {fistp qword [esp+0x18], fp0} */
        *(a2 + 0x214) = v_8_2;
    }

    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(a2, a3);
}
