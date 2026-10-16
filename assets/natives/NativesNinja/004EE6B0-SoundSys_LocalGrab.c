#include "004EE6B0-SoundSys_LocalGrab.h"
/* 0x004ee6b0 SoundSys_LocalGrab full linked: callers=1 callees=26 */
void* sub_4ee6b0(int32_t a1)

{
    void* result = sub_4ee940();

    if (result)
    {
        if (g_a70c5a)
            g_a70c5a = 0;

        if (g_54dcbc == 0x186a0)
        {
            int32_t eax_1;
            int32_t edx_1;
            edx_1 = HIGHD(0x14f8b589 * g_a70c64);
            eax_1 = LOWD(0x14f8b589 * g_a70c64);
            int32_t edx_2 = edx_1 >> 0xd;
            g_a70c64 = (edx_2 + (edx_2 >> 0x1f)) * 0x186a0;
        }

        char* var_818_1;
        void var_800;

        if (!a1)
        {
            char* var_810_2 = "LOCAL:grab";
            void* var_814_2 = &g_53f730;
            var_818_1 = &var_800;
        }
        else
        {
            int32_t edi_1 = a1;
            int32_t i = 0xffffffff;

            while (i)
            {
                bool cond:0_1 = 0 != *edi_1;
                edi_1 += 1;
                i -= 1;

                if (!cond:0_1)
                    break;
            }

            char* ecx_6 = ~i - 1 + a1;
            char eax_9 = *ecx_6;

            if (eax_9 == 0x5c || eax_9 == 0x2f)
                *ecx_6 = 0;

            int32_t var_810_1 = a1;
            void* var_814_1 = &g_53f730;
            var_818_1 = &var_800;
        }

        Game_DataSymbolLoad(var_818_1, "%s");
        void* var_810_3 = &var_800;
        void var_400;
        Game_DataSymbolLoad(&var_400, "%s/empty.dat");
        int32_t* eax_10 = QFile_ReadWrite(&var_400, "w");

        if (!eax_10)
        {
            void* var_810_4 = &var_800;
            return Warning_Show("%s DOESN'T EXIST");
        }

        sub_4b1690(eax_10);
        int32_t* i_1;

        do
        {
            int32_t var_810_6 = g_a70c64;
            void* var_814_3 = &var_800;
            Game_DataSymbolLoad(&var_400, "%s/A%07d.tga");
            i_1 = QFile_ReadWrite(&var_400, "r");

            if (!i_1)
                g_54dcbc = 1;
            else
                sub_4b1690(i_1);

            g_a70c64 += g_54dcbc;
        } while (i_1);
        char eax_13 = QHash_ValueGet();

        if (!eax_13)
            QHash_ValueSet();

        result = Mem_Alloc(g_c28b48 * g_c28b44 * 3, 4);

        if (!eax_13)
            sub_4b0d50();

        if (result)
        {
            int32_t* eax_14 = QFile_ReadWrite(&var_400, "w");

            if (eax_14)
            {
                sub_491d80(result);
                sub_4ee8e0(eax_14, 0xa70c48, g_c28b44, g_c28b48);
                sub_4b1700(eax_14, result, g_c28b48 * g_c28b44 * 3);
                sub_4b17c0(eax_14);
                sub_4b1690(eax_14);
            }

            return sub_4b0d10(result);
        }
    }

    return result;
}
