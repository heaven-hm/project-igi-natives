// Original IGI.EXE function: HumanPlayerInput_Setup (VA 0x0045DE20; static CFG gate PASS, CFG score 0.889).
#include "HumanPlayerInput_Setup.h"
char* HumanPlayerInput_Setup(void* context)

{
    if (*(context + 0x80) && *(context + 0x190))
    {
        int32_t item_100 = g_53f30c[0];
        int16_t item_fc_1 = g_53f30c[4][0];
        char item_fa_1 = g_53f30c[6][0];
        void item_f9;
        *memset(&item_f9, 0, 0xf8) = 0;
        void* dest_3 = context + 0x82;
        int32_t i = 0xffffffff;
        char* item_114_1 = &g_538354;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_3;
            dest_3 += 1;
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t entity_2 = ~i;
        int32_t* dest_5 = &item_100;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool flag_1_1 = 0 != *dest_5;
            dest_5 += 1;
            i_1 -= 1;

            if (!flag_1_1)
                break;
        }

        int32_t source_2;
        int32_t dest_7;
        dest_7 = memcpy(dest_5 - 1, dest_3 - entity_2, entity_2 & 0xfffffffc);
        int32_t* item_118_1 = &item_100;
        memcpy(dest_7, source_2, entity_2 & 3);
        int32_t* data_3 = QFile_ReadWrite(item_118_1, item_114_1);

        if (data_3)
        {
            Sys_CloseFileStream_4(data_3, *(context + 0x188), *(context + 0x190) * 0xa0);
            Sys_ReadFileBlock_4(data_3);
        }
    }
    else if (*(context + 0x81))
    {
        void* data_5 = *(context + 0x184);

        if (data_5)
            Sys_OpenFileStream_5(data_5);
    }

    void* data_6 = *(context + 0x188);

    if (data_6)
    {
        Sys_ExecuteBytecode_2(data_6);
        *(context + 0x188) = 0;
    }

    return Script_CallNativeHandler_6(context + 0x194);
}
