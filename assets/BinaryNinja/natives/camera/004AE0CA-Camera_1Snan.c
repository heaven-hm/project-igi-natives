// Original IGI.EXE function: Camera_1Snan (VA 0x004AE0CA; static CFG gate PASS, CFG score 1.000).
#include "Camera_1Snan.h"
int32_t Camera_1Snan(int16_t a1 @ 0xc, char* a2, char a3, char* a4)

{
    int16_t* ctxB = a4;
    int16_t objC1 = a1 & 0x8000;
    int16_t valA1 = a1 & 0x7fff;
    char v_20 = 0xcc;
    char v_1f = 0xcc;
    char v_1e = 0xcc;
    char v_1d = 0xcc;
    char v_1c = 0xcc;
    char v_1b = 0xcc;
    char v_1a = 0xcc;
    char v_19 = 0xcc;
    char v_18 = 0xcc;
    char v_17 = 0xcc;
    char v_16 = 0xfb;
    char v_15 = 0x3f;
    int32_t result = 1;

    if (!objC1)
        ctxB[1] = 0x20;
    else
        ctxB[1] = 0x2d;

    int32_t arg_8;
    int32_t dstD = arg_8;
    int32_t arg_4;

    if (valA1 || dstD || arg_4 != dstD)
    {
        if (valA1 == 0x7fff)
        {
            *ctxB = 1;

            if ((dstD != 0x80000000 || arg_4) && !(dstD & 0x40000000))
            {
                Camera_ApplyLineFilter_20(&ctxB[2], "1#SNAN");
                *(ctxB + 3) = 6;
            }
            else if (objC1 && dstD == 0xc0000000)
            {
                if (arg_4)
                    goto label_4ae1bf;

                Camera_ApplyLineFilter_20(&ctxB[2], "1#IND");
                *(ctxB + 3) = 5;
            }
            else if (dstD != 0x80000000 || arg_4)
            {
            label_4ae1bf:
                Camera_ApplyLineFilter_20(&ctxB[2], "1#QNAN");
                *(ctxB + 3) = 6;
            }
            else
            {
                Camera_ApplyLineFilter_20(&ctxB[2], "1#INF");
                *(ctxB + 3) = 5;
            }

            return 0;
        }

        uint32_t valA4 = valA1;
        int16_t v_14 = 0;
        int32_t v_e_1 = dstD;
        int32_t srcS4 =
            (((valA4 >> 8) + (dstD >> 0x18 << 1)) * 0x4d + valA4 * 0x4d10 - 0x134312f4) >> 0x10;
        int32_t v_12 = arg_4;
        Camera_UpdateViewCone_29(&v_14, -(srcS4), 1);

        if (valA1 >= 0x3fff)
        {
            srcS4 += 1;
            Camera_ApplyPostProcess_29(&v_14, &v_20);
        }

        *ctxB = srcS4;
        char* dstD2;

        if (!(a3 & 1))
            dstD2 = a2;
        else
        {
            dstD2 = &a2[srcS4];

            if (dstD2 <= 0)
                goto label_4ae141;
        }

        if (dstD2 > 0x15)
            dstD2 = 0x15;

        int16_t v_a_2 = 0;
        a4 = 8;
        char* i;

        do
        {
            Camera_SetFieldOfView_29(&v_14);
            i = a4;
            a4 -= 1;
        } while (i != 1);

        if (valA1 - 0x3ffe < 0)
        {
            uint32_t i_3 = -((valA1 - 0x3ffe));

            if (i_3 > 0)
            {
                uint32_t i_1;

                do
                {
                    Camera_ApplyLineFilter_29(&v_14);
                    i_1 = i_3;
                    i_3 -= 1;
                } while (i_1 != 1);
            }
        }

        char* valA10 = &ctxB[2];
        a4 = valA10;

        if (&dstD2[1] > 0)
        {
            a2 = &dstD2[1];
            char* i_2;

            do
            {
                arg_4 = v_14;
                int32_t* dstD3 = &arg_8;
                int32_t* srcS8 = (&v_12 + 2);
                *dstD3 = *srcS8;
                dstD3[1] = srcS8[1];
                Camera_SetFieldOfView_29(&v_14);
                Camera_SetFieldOfView_29(&v_14);
                Camera_UpdateTransform_29(&v_14, &arg_4);
                Camera_SetFieldOfView_29(&v_14);
                char valA12 = *(&v_a_2 + 1);
                char* objC11 = a4;
                *(&v_a_2 + 1) = 0;
                a4 = &a4[1];
                i_2 = a2;
                a2 -= 1;
                *objC11 = valA12 + 0x30;
            } while (i_2 != 1);
            valA10 = a4;
        }

        char* valA14 = valA10 - 2;

        if (valA10[0xffffffff] >= 0x35)
        {
            while (true)
            {
                if (valA14 >= &ctxB[2])
                {
                    if (*valA14 == 0x39)
                    {
                        *valA14 = 0x30;
                        valA14 -= 1;
                        continue;
                    }
                    else if (valA14 >= &ctxB[2])
                        break;
                }

                valA14 = &valA14[1];
                *ctxB += 1;
                break;
            }

            *valA14 += 1;
            goto label_4ae322;
        }

        while (true)
        {
            if (valA14 < &ctxB[2])
                goto label_4ae345;

            if (*valA14 != 0x30)
                break;

            valA14 -= 1;
        }

        if (valA14 >= &ctxB[2])
        {
        label_4ae322:
            *(ctxB + 3) = valA14 - ctxB - 3;
            *(valA14 - ctxB - 3 + ctxB + 4) = 0;
            return result;
        }

    label_4ae345:
        *ctxB = 0;
        ctxB[1] = 0x20;
        *(ctxB + 3) = 1;
        ctxB[2] = 0x30;
    }
    else
    {
    label_4ae141:
        *ctxB = 0;
        ctxB[1] = 0x20;
        *(ctxB + 3) = 1;
        ctxB[2] = 0x30;
    }

    *(ctxB + 5) = 0;
    return 1;
}
