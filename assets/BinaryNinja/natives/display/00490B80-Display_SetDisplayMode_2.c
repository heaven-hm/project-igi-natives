#include "Display_SetDisplayMode_2.h"
int32_t Display_SetDisplayMode_2(void* a1, int32_t a2)

{
    int32_t result = Display_CheckCapabilities_9();

    if (result)
    {
        int32_t v_814_1 = 0x400;
        void v_800;
        Sys_CloseFileStream_7(&v_800, a2);
        char* dstD1 = ".wav";
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD1;
            dstD1 = &dstD1[1];
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC1 = ~i;
        void* dstD3 = &v_800;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond_1_1 = 0 != *dstD3;
            dstD3 += 1;
            i_1 -= 1;

            if (!cond_1_1)
                break;
        }

        int32_t srcS2;
        int32_t dstD5;
        dstD5 = memcpy(dstD3 - 1, dstD1 - objC1, objC1 & 0xfffffffc);
        memcpy(dstD5, srcS2, objC1 & 3);
        void v_400;
        Display_SoundInvalidFilename(&v_400, &v_800);
        result = Display_SwapBuffers_11(Display_CheckCapabilities_12(&v_400), Display_RestoreDevice_12(&v_400), 1, nullptr);
        *(a1 + 0x158) = result;

        if (result)
            *(a1 + 0x29) = 1;
    }

    result = 1;
    return result;
}
