// IGI native provenance: Display_SetGammaRamp_13 - 0x00497700 - CFG score 96.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 00497700-Display_SetGammaRamp_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SetGammaRamp_13.h"
void Display_SetGammaRamp_13()

{
    Display_SwapBuffers_15();
    int32_t* i_1 = g_684100;

    for (int32_t* i = *i_1; i; i = *i)
    {
        memcpy(0xbcaba0, i_1, 0x4c);
        int32_t data_1 = i_1[2];

        if (data_1 != 0xffffffff)
            Sys_ExecuteBytecode_3(data_1);

        Display_SyncVSync_14(&i_1[3]);
        Display_SetDisplayMode_14(i_1[0x11] + i_1[0x10] * 0xc - 0xc);
        Display_SwapBuffers_14(i_1[0x11], i_1[0x10]);

        if (i_1[2] != 0xffffffff)
            Sys_CloseFileStream_3();

        i_1 = i;
    }

    g_684100 = &g_684104;
    g_684108 = &g_684100;
    g_684104 = 0;
    Display_SwapBuffers_15();
}
