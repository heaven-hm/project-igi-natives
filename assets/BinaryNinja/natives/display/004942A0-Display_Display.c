// Original IGI.EXE function: Display_Display (VA 0x004942A0; static CFG gate PASS, CFG score 0.872).
#include "Display_Display.h"
int32_t Display_Display(int32_t a1, int32_t a2, int32_t a3, int32_t a4, void* a5, int32_t* a6)

{
    int32_t ctxB = a3;

    if (ctxB == 0xffffffff)
        ctxB = *(a5 + 4);

    int32_t dstD = a4;

    if (dstD == 0xffffffff)
        dstD = *(a5 + 8);

    int32_t valA2;

    if (FX_FragmentSimulate_23())
    {
        ShowCursor(0);
        int32_t objC1 = a1;

        if (objC1 == 0xffffffff)
            objC1 = *(a5 + 0x10);

        int32_t* valA1 = g_5ca10c;
        valA2 = (*(*valA1 + 0x54))(valA1, ctxB, dstD, objC1, 0, 0);

        if (!valA2)
            goto label_494336;
    }
    else
    {
        ShowCursor(1);
        HDC hdc = CreateICA("Display", nullptr, nullptr, nullptr);
        GetDeviceCaps(hdc, 0xc);
        DeleteDC(hdc);
    label_494336:
        g_5ca0d8 = ctxB;
        g_5ca044 = dstD;
        int32_t v_a0;

        if (!FX_FragmentSimulate_23())
        {
            __builtin_memset(&v_a0, 0, 0x7c);
            int32_t* valA10 = g_5ca10c;
            int32_t v_c8_9 = 0;
            v_a0 = 0x7c;
            int32_t v_9c_2 = 1;
            int32_t v_38_2 = 0x80200;
            valA2 = (*(*valA10 + 0x18))(valA10, &v_a0, &g_5ca0fc, v_c8_9);

            if (!valA2)
            {
                int32_t v_94_1 = g_5ca0d8;
                int32_t* valA12 = g_5ca0fc;
                int32_t v_98_1 = g_5ca044;
                int32_t v_9c_3 = 7;
                int32_t v_38_3 = 0x82000;
                int32_t v_58 = 0x20;
                int32_t v_54_1 = 0x40;
                int32_t srcS3 = (*(*valA12 + 0x54))(valA12, &v_58);

                if (srcS3)
                {
                label_494662:
                    int32_t* valA36 = g_5ca0fc;
                    (*(*valA36 + 8))(valA36);
                    return srcS3;
                }

                int32_t* valA14 = g_5ca10c;
                int32_t valA15 = (*(*valA14 + 0x18))(valA14, &v_a0, &g_5ca100, srcS3);

                if (valA15)
                {
                    int32_t* valA16 = g_5ca0fc;
                    (*(*valA16 + 8))(valA16);
                    return valA15;
                }

            label_4944c4:
                __builtin_memset(&v_a0, 0, 0x7c);
                int32_t i = 4;
                int32_t* dstD1 = &g_534a10;
                int32_t* srcS5 = a6;
                bool cond_3_1 = true;

                while (i)
                {
                    int32_t f0_1 = *srcS5;
                    int32_t f1_1 = *dstD1;
                    cond_3_1 = f0_1 == f1_1;
                    srcS5 = &srcS5[1];
                    dstD1 = &dstD1[1];
                    i -= 1;

                    if (f0_1 != f1_1)
                        break;
                }

                int32_t v_9c_4 = 0x1007;
                bool cond_5_1;

                if (!cond_3_1)
                {
                    int32_t i_1 = 4;
                    int32_t* dstD2 = &g_5349f0;
                    int32_t* srcS6 = a6;
                    cond_5_1 = false;

                    while (i_1)
                    {
                        int32_t f2_1 = *srcS6;
                        int32_t f3_1 = *dstD2;
                        cond_5_1 = f2_1 != f3_1;
                        srcS6 = &srcS6[1];
                        dstD2 = &dstD2[1];
                        i_1 -= 1;

                        if (f2_1 != f3_1)
                            break;
                    }

                    int32_t v_38_4 = 0x24000;
                }

                if (cond_3_1 || !cond_5_1)
                    int32_t v_38_5 = 0x20800;

                int32_t v_98_2 = g_5ca044;
                int32_t v_94_2 = g_5ca0d8;
                void v_24;
                __builtin_memset(&v_24, 0, 0x20);
                int32_t* valA19 = g_5ca110;
                int32_t v_4_1 = a2;
                v_a0 = 0x7c;
                int32_t valA20;
                int32_t tmpD7;
                valA20 = (*(*valA19 + 0x18))(valA19, a6, Display_CreateSurface_6, &v_24);
                int32_t v_18;

                if (v_18)
                {
                    if (valA20)
                    {
                        int32_t* valA22 = g_5ca100;
                        (*(*valA22 + 8))(valA22);
                        int32_t* valA23 = g_5ca0fc;
                        (*(*valA23 + 8))(valA23);
                        return valA20;
                    }

                    int32_t* valA25 = g_5ca10c;
                    g_bcada4 = tmpD7 - tmpD7 + 1;
                    int32_t v_c8_17 = 0;
                    memcpy(&v_58, &v_24, 0x20);
                    int32_t valA26 = (*(*valA25 + 0x18))(valA25, &v_a0, &g_5ca104, v_c8_17);
                    int32_t* valA27 = g_5ca100;
                    int32_t objC10 = *valA27;

                    if (valA26)
                    {
                        (*(objC10 + 8))(valA27);
                        int32_t* valA28 = g_5ca0fc;
                        (*(*valA28 + 8))(valA28);
                        return valA26;
                    }

                    srcS3 = (*(objC10 + 0xc))(valA27, g_5ca104);

                    if (!srcS3)
                    {
                        int32_t* valA31 = g_5ca110;
                        int32_t v_b4;
                        srcS3 = (*(*valA31 + 0x10))(valA31, a6, g_5ca100, &v_b4);
                        g_5ca114 = v_b4;

                        if (!srcS3)
                            return 0;

                        int32_t* valA33 = g_5ca100;
                        (*(*valA33 + 0x20))(valA33, 0, g_5ca104);
                    }

                    int32_t* valA34 = g_5ca104;
                    (*(*valA34 + 8))(valA34);
                    int32_t* valA35 = g_5ca100;
                    (*(*valA35 + 8))(valA35);
                }
                else
                {
                    Error_Show("Couldn't find zbuffer format");

                    while (true)
                        /* nop */
                }

                goto label_494662;
            }
        }
        else
        {
            __builtin_memset(&v_a0, 0, 0x7c);
            int32_t v_c8_6 = 0;
            int32_t v_8c_1 = *(a5 + 0xc);
            int32_t* valA5 = g_5ca10c;
            v_a0 = 0x7c;
            int32_t v_9c_1 = 0x21;
            int32_t v_38_1 = 0x82218;
            valA2 = (*(*valA5 + 0x18))(valA5, &v_a0, &g_5ca0fc, v_c8_6);

            if (!valA2)
            {
                int32_t v_b0 = valA2;
                int32_t v_ac_1 = valA2;
                v_b0 = 0x82004;
                int32_t v_a8_1 = valA2;
                int32_t v_a4_1 = valA2;
                int32_t* valA6 = g_5ca0fc;
                int32_t valA7 = (*(*valA6 + 0x30))(valA6, &v_b0, &g_5ca100);

                if (!valA7)
                    goto label_4944c4;

                int32_t* valA8 = g_5ca0fc;
                (*(*valA8 + 8))(valA8);
                return valA7;
            }
        }
    }

    return valA2;
}
