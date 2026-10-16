#include "Menu_RequestScreen_13.h"
int32_t Menu_RequestScreen_13(int32_t a1, float a2)

{
    int32_t dstD = *(a1 + 0x354);
    int32_t result = dstD + 0xa;
    int32_t v_1c = (g_c28b48 >> 1) + *(a1 + 0x24) - 0xf0;
    int32_t result_1 = result;

    if (dstD < result)
    {
        int32_t* objC2 = a1 + (dstD << 2) + 0x154;
        int32_t* v_18_1 = objC2;
        float v_10_1 = a2 * 0.5f;
        long double x87_r7_3 = (g_c28b44 >> 1) + *(a1 + 0x20) - 0x140;
        a1 = x87_r7_3;

        while (true)
        {
            int32_t* valA4 = objC2[-0x40];
            int32_t* srcS1 = *objC2;

            if (valA4 && srcS1)
            {
                int32_t tmpD2 = valA4[9];
                valA4[5] = 0;
                valA4[7] = 0;
                valA4[1] = a1 + 4f;
                valA4[6] = 0x43000000;
                valA4[9] = tmpD2 | 0x80000;
                valA4[4] = a2;
                long double x87_r7_8 = v_1c + 5f;
                valA4[2] = x87_r7_8;
                Sys_CloseFileStream_18(valA4);
                srcS1[9] |= 0x80000;
                srcS1[5] = 0x43000000;
                srcS1[6] = 0x42aa0000;
                srcS1[1] = a1 + 214f;
                srcS1[7] = 0;
                srcS1[4] = a2;
                srcS1[2] = x87_r7_8;
                Sys_CloseFileStream_18(srcS1);
            }

            float v_14_1 = 16f;
            int32_t ctxB2 = dstD & 1;

            if (!ctxB2)
                v_14_1 = 32f;

            float v_c_2 = v_1c;
            Sys_ExecuteBytecode_14(a1, v_c_2, 210f, 20f, 0f, v_14_1, 0f, v_10_1, 0x80000, 0);
            float v_10_2 = 32f;

            if (!ctxB2)
                v_10_2 = 48f;

            Sys_ExecuteBytecode_14(x87_r7_3 + 210f, v_c_2, 150f, 20f, 0f, v_10_2, 0f, v_10_1, 0x80000, 0);
            result = result_1;
            dstD += 1;
            v_1c += 0x14;
            v_18_1 = &v_18_1[1];

            if (dstD >= result)
                break;

            objC2 = v_18_1;
        }
    }

    return result;
}
