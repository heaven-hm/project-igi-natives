// Original IGI.EXE function: SoundSys_LocalGrab (VA 0x004EE6B0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_LocalGrab.h"
void* SoundSys_LocalGrab(int32_t a1)

{
    void* result = SoundSys_SetFrequency_19();

    if (result)
    {
        if (g_a70c5a)
            g_a70c5a = 0;

        if (g_54dcbc == 0x186a0)
        {
            int32_t valA1;
            int32_t tmpD1;
            tmpD1 = HIGHD(0x14f8b589 * g_a70c64);
            valA1 = LOWD(0x14f8b589 * g_a70c64);
            int32_t tmpD2 = tmpD1 >> 0xd;
            g_a70c64 = (tmpD2 + (tmpD2 >> 0x1f)) * 0x186a0;
        }

        char* v_818_1;
        void v_800;

        if (!a1)
        {
            char* v_810_2 = "LOCAL:grab";
            void* v_814_2 = &g_53f730;
            v_818_1 = &v_800;
        }
        else
        {
            int32_t dstD1 = a1;
            int32_t i = 0xffffffff;

            while (i)
            {
                bool cond_0_1 = 0 != *dstD1;
                dstD1 += 1;
                i -= 1;

                if (!cond_0_1)
                    break;
            }

            char* objC6 = ~i - 1 + a1;
            char valA9 = *objC6;

            if (valA9 == 0x5c || valA9 == 0x2f)
                *objC6 = 0;

            int32_t v_810_1 = a1;
            void* v_814_1 = &g_53f730;
            v_818_1 = &v_800;
        }

        Game_DataSymbolLoad(v_818_1, "%s");
        void* v_810_3 = &v_800;
        void v_400;
        Game_DataSymbolLoad(&v_400, "%s/empty.dat");
        int32_t* valA10 = QFile_ReadWrite(&v_400, "w");

        if (!valA10)
        {
            void* v_810_4 = &v_800;
            return Warning_Show("%s DOESN'T EXIST");
        }

        Sys_ReadFileBlock_4(valA10);
        int32_t* i_1;

        do
        {
            int32_t v_810_6 = g_a70c64;
            void* v_814_3 = &v_800;
            Game_DataSymbolLoad(&v_400, "%s/A%07d.tga");
            i_1 = QFile_ReadWrite(&v_400, "r");

            if (!i_1)
                g_54dcbc = 1;
            else
                Sys_ReadFileBlock_4(i_1);

            g_a70c64 += g_54dcbc;
        } while (i_1);
        char valA13 = QHash_ValueGet();

        if (!valA13)
            QHash_ValueSet();

        result = Mem_Alloc(g_c28b48 * g_c28b44 * 3, 4);

        if (!valA13)
            Sys_DispatchOpcode_2();

        if (result)
        {
            int32_t* valA14 = QFile_ReadWrite(&v_400, "w");

            if (valA14)
            {
                Display_CheckCapabilities_4(result);
                SoundSys_SetMasterVolume_19(valA14, 0xa70c48, g_c28b44, g_c28b48);
                Sys_CloseFileStream_4(valA14, result, g_c28b48 * g_c28b44 * 3);
                Sys_ResolveSymbol_4(valA14);
                Sys_ReadFileBlock_4(valA14);
            }

            return Sys_ExecuteBytecode_2(result);
        }
    }

    return result;
}
