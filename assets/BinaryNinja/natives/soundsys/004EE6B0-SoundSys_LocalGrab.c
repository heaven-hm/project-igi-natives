// Original IGI.EXE function: SoundSys_LocalGrab (VA 0x004EE6B0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_LocalGrab.h"
void* SoundSys_LocalGrab(int32_t context)

{
    void* result = SoundSys_SetFrequency_19();

    if (result)
    {
        if (g_a70c5a)
            g_a70c5a = 0;

        if (g_54dcbc == 0x186a0)
        {
            int32_t data_1;
            int32_t temp_1;
            temp_1 = HIGHD(0x14f8b589 * g_a70c64);
            data_1 = LOWD(0x14f8b589 * g_a70c64);
            int32_t temp_2 = temp_1 >> 0xd;
            g_a70c64 = (temp_2 + (temp_2 >> 0x1f)) * 0x186a0;
        }

        char* item_818_1;
        void item_800;

        if (!context)
        {
            char* item_810_2 = "LOCAL:grab";
            void* item_814_2 = &g_53f730;
            item_818_1 = &item_800;
        }
        else
        {
            int32_t dest_1 = context;
            int32_t i = 0xffffffff;

            while (i)
            {
                bool flag_0_1 = 0 != *dest_1;
                dest_1 += 1;
                i -= 1;

                if (!flag_0_1)
                    break;
            }

            char* entity_6 = ~i - 1 + context;
            char data_9 = *entity_6;

            if (data_9 == 0x5c || data_9 == 0x2f)
                *entity_6 = 0;

            int32_t item_810_1 = context;
            void* item_814_1 = &g_53f730;
            item_818_1 = &item_800;
        }

        Game_DataSymbolLoad(item_818_1, "%s");
        void* item_810_3 = &item_800;
        void item_400;
        Game_DataSymbolLoad(&item_400, "%s/empty.dat");
        int32_t* data_10 = QFile_ReadWrite(&item_400, "w");

        if (!data_10)
        {
            void* item_810_4 = &item_800;
            return Warning_Show("%s DOESN'T EXIST");
        }

        Sys_ReadFileBlock_4(data_10);
        int32_t* i_1;

        do
        {
            int32_t item_810_6 = g_a70c64;
            void* item_814_3 = &item_800;
            Game_DataSymbolLoad(&item_400, "%s/A%07d.tga");
            i_1 = QFile_ReadWrite(&item_400, "r");

            if (!i_1)
                g_54dcbc = 1;
            else
                Sys_ReadFileBlock_4(i_1);

            g_a70c64 += g_54dcbc;
        } while (i_1);
        char data_13 = QHash_ValueGet();

        if (!data_13)
            QHash_ValueSet();

        result = Mem_Alloc(g_c28b48 * g_c28b44 * 3, 4);

        if (!data_13)
            Sys_DispatchOpcode_2();

        if (result)
        {
            int32_t* data_14 = QFile_ReadWrite(&item_400, "w");

            if (data_14)
            {
                Display_CheckCapabilities_4(result);
                SoundSys_SetMasterVolume_19(data_14, 0xa70c48, g_c28b44, g_c28b48);
                Sys_CloseFileStream_4(data_14, result, g_c28b48 * g_c28b44 * 3);
                Sys_ResolveSymbol_4(data_14);
                Sys_ReadFileBlock_4(data_14);
            }

            return Sys_ExecuteBytecode_2(result);
        }
    }

    return result;
}
