// IGI native provenance: MenuUI_Processglowspr - 0x00420F40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00420F40-MenuUI_Processglowspr.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Processglowspr.h"

int32_t MenuUI_Processglowspr(int32_t arg1, int32_t arg2)

{
    int32_t context_val;
    int32_t var_4 = context_val;
    void* result_val = *(arg1 + 0x44);
    *(arg1 + 0x28) = 0;
    *(arg1 + 0x2c) = 0;

    if (result_val)
    {
        void* eax_1 = Menu_HandleInput_3(result_val, arg1 + 0x94);
        *(arg1 + 0x16c) = Menu_DrawWidget_3(*(arg1 + 0x44), "glow.spr");
        int32_t* eax_3 = *(arg1 + 0x114);

        if (eax_3)
        {
            Sys_ReadFileBlock_18(eax_3);
            *(arg1 + 0x114) = 0;
        }

        if (eax_1)
        {
            var_4 = (g_c28b44 >> 1) + *(arg1 + 0x20) - 0x140;
            int32_t edx_3 = (g_c28b48 >> 1) + *(arg1 + 0x24) - 0xf0;
            char* eax_9;
            int32_t ecx_5;
            eax_9 = Menu_LocalSS(*(arg1 + 0x44), arg1 + 0x54);
            int32_t var_18_3 = ecx_5;
            int32_t var_1c_1 = ecx_5;
            int32_t** eax_10 = Sys_OpenFileStream_18(eax_1, var_4, edx_3, eax_9);
            *(arg1 + 0x114) = eax_10;
            eax_10[8] = 0;
            *(arg1 + 0x28) = Sys_CheckHeap_21(*(arg1 + 0x114));
            *(arg1 + 0x2c) = Sys_AllocateMemory_22(*(arg1 + 0x114));
        }
    }

    Script_Isexists(arg1 + 0x11c, arg1);

    if (*(arg1 + 0x11c))
        *(arg1 + 0x4c) = 1;

    return (*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(arg1,
        arg2);
}
