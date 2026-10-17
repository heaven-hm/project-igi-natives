// Original IGI.EXE function: Display_SetDisplayMode_2 (VA 0x00490B80; static CFG gate PASS, CFG score 0.917).
#include "Display_SetDisplayMode_2.h"
int32_t Display_SetDisplayMode_2(void* context, int32_t param_2)

{
    int32_t result = Display_CheckCapabilities_9();

    if (result)
    {
        int32_t item_814_1 = 0x400;
        void item_800;
        Sys_CloseFileStream_7(&item_800, param_2);
        char* dest_1 = ".wav";
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_1;
            dest_1 = &dest_1[1];
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t entity_1 = ~i;
        void* dest_3 = &item_800;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool flag_1_1 = 0 != *dest_3;
            dest_3 += 1;
            i_1 -= 1;

            if (!flag_1_1)
                break;
        }

        int32_t source_2;
        int32_t dest_5;
        dest_5 = memcpy(dest_3 - 1, dest_1 - entity_1, entity_1 & 0xfffffffc);
        memcpy(dest_5, source_2, entity_1 & 3);
        void item_400;
        Display_SoundInvalidFilename(&item_400, &item_800);
        result = Display_SwapBuffers_11(Display_CheckCapabilities_12(&item_400), Display_RestoreDevice_12(&item_400), 1, nullptr);
        *(context + 0x158) = result;

        if (result)
            *(context + 0x29) = 1;
    }

    result = 1;
    return result;
}
