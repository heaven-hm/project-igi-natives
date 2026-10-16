#include "gi_platform.h"
#include "004EF8C0-CameraBase_Cleanup_2.h"
int32_t CameraBase_Cleanup_2(float* a1, void* a2)

{
    char* valA1 = (*(int32_t*)(uintptr_t)(a2 + 4));
    char* v_20 = valA1;

    if (*valA1)
    {
        char i;

        do
        {
            i = valA1[1];
            valA1 = &valA1[1];
        } while (i);
        v_20 = valA1;
    }

    int32_t i_1 = 0;
    float* v_1c = a1;

    do
    {
        double v_38_1 = *v_1c;
        char v_18;
        Game_DataSymbolLoad(&v_18, "%f");
        void* dstD1 = &v_18;
        int32_t j = 0xffffffff;

        while (j)
        {
            bool cond_3_1 = 0 != *dstD1;
            dstD1 += 1;
            j -= 1;

            if (!cond_3_1)
                break;
        }

        int32_t objC2 = ~j;
        char* dstD3 = v_20;
        int32_t j_1 = 0xffffffff;

        while (j_1)
        {
            bool cond_4_1 = 0 != *dstD3;
            dstD3 = &dstD3[1];
            j_1 -= 1;

            if (!cond_4_1)
                break;
        }

        int32_t srcS2;
        int32_t dstD5;
        dstD5 = memcpy(dstD3 - 1, dstD1 - objC2, objC2 & 0xfffffffc);
        memcpy(dstD5, srcS2, objC2 & 3);

        if (i_1 != 0xa)
        {
            void* dstD6 = &g_547a44;
            int32_t j_2 = 0xffffffff;

            while (j_2)
            {
                bool cond_1_1 = 0 != *dstD6;
                dstD6 += 1;
                j_2 -= 1;

                if (!cond_1_1)
                    break;
            }

            int32_t objC7 = ~j_2;
            char* dstD8 = v_20;
            int32_t j_3 = 0xffffffff;

            while (j_3)
            {
                bool cond_2_1 = 0 != *dstD8;
                dstD8 = &dstD8[1];
                j_3 -= 1;

                if (!cond_2_1)
                    break;
            }

            int32_t srcS4;
            int32_t dstD10;
            dstD10 = memcpy(dstD8 - 1, dstD6 - objC7, objC7 & 0xfffffffc);
            memcpy(dstD10, srcS4, objC7 & 3);
        }

        i_1 += 1;
        v_1c = &v_1c[1];
    } while (i_1 < 0xb);

    return 0;
}
