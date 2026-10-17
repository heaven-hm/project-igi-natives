// Original IGI.EXE function: Terrain_GenerateOctree (VA 0x004D14E0; static CFG gate PASS, CFG score 0.867).
#include "Render_ShouldHaveAllocatedD.h"
int32_t Render_ShouldHaveAllocatedD(void* a1)

{
    double* valA1 = *(g_a44344 + 0xdfc);
    int32_t v_5bc;

    if (!valA1)
        v_5bc = 0xe0000000;
    else
        v_5bc = *valA1;

    int16_t valA2 = g_c10380;
    void* ctxB = a1;
    void* v_5a8 = &g_b16d10;
    uint32_t valA3 = valA2;
    g_b12b80 = 0;
    int32_t valA4 = g_b16c6c;
    int32_t v_61c = 0;
    int32_t v_5d4 = 0;
    int32_t tmpD = *(ctxB + 0xc);
    uint32_t objC3 = valA2 - 1;
    int32_t* v_5ac = &g_b12c60;
    DynObj_ParseConfigFile_6();
    float objC4 = g_bcab20;
    float tmpD1 = g_bcab24;
    long double fp1;
    bool c1;
    fp1 = __fpatan(1, objC4);
    int32_t i = 0;
    void v_448;
    memcpy(&v_448, &g_b12be0, 0x40);
    char* objC5 = &g_548060;
    long double fp0;
    bool c1_1;
    bool c2;
    fp0 = __fcos(fp1);
    float v_5dc = 1.73210001f / fp0 * 1.07374182e+09f;
    long double fp1_1;
    bool c1_2;
    fp1_1 = __fpatan(1, tmpD1);
    long double fp0_1;
    bool c1_3;
    bool c2_1;
    fp0_1 = __fcos(fp1_1);
    float v_5f8 = 1.73210001f / fp0_1 * 1.07374182e+09f;

    do
    {
        char tmpD2 = *objC5;
        objC5 = &objC5[4];
        char v_488[0x40];
        v_488[i] = tmpD2;
        i += 1;
    } while (i < 0x40);

    long double x87_r7_12 = g_bcab08;
    float v_5a0 = g_bcab10;
    float v_59c = g_bcab18;
    float v_570;
    memcpy(&v_570, &g_bcaae0, 0x28);
    int32_t v_634_2 = x87_r7_12;
    int32_t valA7 = -((v_634_2 + g_b12bc0));
    int32_t v_634_3 = v_5a0;
    int32_t valA10 = -((g_b12bc4 + v_634_3));
    int32_t v_634_4 = v_59c;
    int32_t valA12 = -((v_634_4 + g_b12bc8));
    long double x87_r7_15 = valA7;
    long double x87_r6_4 = valA10;
    long double fpu5 = valA12;
    float v_56c;
    float v_568;
    float v_5a4 = v_568 * fpu5 + v_56c * x87_r6_4 + v_570 * x87_r7_15;
    int32_t v_634_5 = v_5a4;
    int32_t objC9 = 0;
    float v_564;
    float v_560;
    float v_55c;
    float v_558;
    float v_554;
    float v_550;
    int32_t v_548;
    int32_t v_544;
    int32_t v_540;

    for (int32_t i_1 = 0; i_1 < 0x60; )
    {
        *(&v_548 + i_1) = 0xc0000000;

        if (objC9 & 1)
            memcpy(&v_548 + i_1, "\x00\x00\x00\x40\x00\x00\x00\xc0", 8);

        if (objC9 & 2)
            memcpy(&v_544 + i_1, "\x00\x00\x00\x40\x00\x00\x00\xc0", 8);

        if (objC9 & 4)
            *(&v_540 + i_1) = 0x40000000;

        long double x87_r7_17 = *(&v_548 + i_1);
        long double x87_r6_8 = *(&v_544 + i_1);
        long double x87_r5_2 = *(&v_540 + i_1);
        i_1 += 0xc;
        objC9 += 1;
        v_5a4 = x87_r5_2 * v_568 + x87_r6_8 * v_56c + x87_r7_17 * v_570;
        float v_5a0_2 = x87_r5_2 * v_55c + x87_r6_8 * v_560 + x87_r7_17 * v_564;
        void v_4f4;
        *(&v_4f4 + i_1) = v_5a4;
        void v_4f0;
        *(&v_4f0 + i_1) = v_5a0_2;
        void v_4ec;
        *(&v_4ec + i_1) = x87_r5_2 * v_550 + x87_r6_8 * v_554 + x87_r7_17 * v_558;
    }

    void* valA14 = *(ctxB + 0xc);
    int32_t v_404 = 0;
    void* v_408;

    if (valA14)
    {
        char objC10 = *(valA14 + 0x38) & 0xf0;
        v_408 = valA14 + 0x20;
        *(valA14 + 0x38) = objC10;
        v_404 = 2;
    }

    int32_t objC11 = 0xa;
    void* valA16 = nullptr;
    int32_t v_62c = 0xa;
    float* v_63c = &v_5a4;
    void* v_620 = nullptr;

    do
    {
        void* tmpD6 = *(ctxB + (*(0x54843a + objC11) << 2) + 0x10);

        if (tmpD6)
        {
            memcpy(valA16 + 0xa4ef38, tmpD6, 0x40);
            *(tmpD6 + 0xc) = *(valA16 + 0xa4ef60);
            *(tmpD6 + 0x10) = *(valA16 + 0xa4ef5c);
            *(tmpD6 + 0x14) = *(valA16 + 0xa4ef58);
            *(tmpD6 + 0x18) = *(valA16 + 0xa4ef54);
            *(tmpD6 + 0x1c) = *(valA16 + 0xa4ef50);
            *(tmpD6 + 0x20) = *(valA16 + 0xa4ef4c);
            *(tmpD6 + 0x24) = *(valA16 + 0xa4ef48);
            *(tmpD6 + 0x28) = *(valA16 + 0xa4ef44);
            int32_t valA18 = 0;
            valA18 = *(tmpD6 + 0x30);
            char objC21 = ((((((valA18 >> 1 & 1) + ((valA18 & 1) << 1)) << 1) + (valA18 >> 2 & 1))
                << 1) + (valA18 >> 3 & 1)) << 1;
            ctxB = a1;
            objC21 = ((((((objC21 + (valA18 >> 4 & 1)) << 1) + (valA18 >> 5 & 1)) << 1)
                + (valA18 >> 6 & 1)) << 1) + (valA18 >> 7 & 1);
            valA16 = v_620;
            *(tmpD6 + 0x30) = objC21;
            objC11 = v_62c;
            *(valA16 + 0xa5374c) = tmpD6;
            v_404 |= 1 << (objC11 & 0x1f);
            *v_63c = valA16 + 0xa53740;
        }

        objC11 += 1;
        valA16 += 0x40;
        v_63c = &v_63c[1];
        v_62c = objC11;
        v_620 = valA16;
    } while (objC11 - 0xa < 5);

    int32_t v_4e8;
    int32_t v_604_1 = v_634_5 - v_4e8;
    int32_t v_614_1 = valA10 - v_544;
    int32_t v_610_1 = valA7 - v_548;
    int32_t* i_2 = &v_408;
    int32_t v_4e4;
    int32_t v_600_1 = v_55c * fpu5 + v_560 * x87_r6_4 + v_564 * x87_r7_15 - v_4e4;
    int32_t v_4e0;
    int32_t v_608_1 = v_550 * fpu5 + v_554 * x87_r6_4 + v_558 * x87_r7_15 - v_4e0;
    int32_t v_60c_1 = valA12 - v_540;
    int32_t ctxB19 = 0xffffffff;
    void** i_6 = &v_408;
    int32_t v_5e0 = 0;
    int32_t v_634_10;

    do
    {
        int32_t valA41 = i_2[1];
        int32_t tmpD18 = valA41 >> 7 & 7;
        int32_t objC27 = valA41 >> 0xa;
        int32_t saved_dst;
        int32_t* dstD7 = &(&saved_dst)[tmpD18 * 3 + 0x58];
        int32_t v_624_1 = tmpD18;
        int32_t* v_5fc_1 = dstD7;

        if (!(valA41 & 1))
        {
            valA41 |= 1;
            i_2[1] = valA41;
            int32_t v_638_1 = 0;
            int32_t v_5d8_1 = 0;
            void* v_57c;

            if (valA41 & 2)
            {
                void* objC44 = *i_2;
                v_57c = objC44;
                v_638_1 = valA41 >> 4 & 7;
                int32_t valA44 = 0;
                valA44 = *(objC44 + 0x18);
                v_5d8_1 = valA44;
            }

            int32_t v_5cc_1 = 0;
            g_b12bb8 = 0;

            if (objC27)
            {
                float* objC45 = &v_5a4;
                int32_t v_63c_2 = 1;
                float* v_62c_2 = &v_5a4;
                int32_t v_620_1 = 5;
                bool cond_10_1;

                do
                {
                    if (objC27 & v_63c_2)
                    {
                        float valA48 = *(*objC45 + (tmpD18 << 2) + 0xc);
                        *objC45 = valA48;
                        int32_t objC46 = 0;
                        objC46 = *(valA48 + 0x30);
                        float v_628_1 = valA48;
                        v_5cc_1 |= objC46;

                        if (*(valA48 + 0x38) & 0x80)
                        {
                            void* j = *(valA48 + 0x2c);

                            do
                            {
                                if (*(j + 0x5c) & 0x80)
                                {
                                    int32_t tmpD30 = 0;
                                    tmpD30 = *(j + 0x1c);
                                    (*((tmpD30 << 2) + &g_a9c4e0))(j, *(j + 0x48));
                                    tmpD18 = v_624_1;
                                    valA48 = v_628_1;
                                }

                                j = *(j + 0x58);
                            } while (j);
                        }

                        if (*(valA48 + 0x38) & 1)
                        {
                            void* j_1 = *(valA48 + 0x2c);

                            do
                            {
                                if (*(j_1 + 0x5c) & 1 && !*(j_1 + 0x60))
                                {
                                    *(g_b12c58 + 4) = j_1;
                                    **&g_b12c58 = 4;
                                    int32_t objC52 = g_b12c20 + 1;
                                    g_b12c58 += 8;
                                    g_b12c20 = objC52;
                                }

                                j_1 = *(j_1 + 0x58);
                            } while (j_1);
                        }

                        objC45 = v_62c_2;
                    }

                    objC45 = &objC45[1];
                    v_63c_2 <<= 1;
                    cond_10_1 = v_620_1 != 1;
                    v_62c_2 = objC45;
                    v_620_1 -= 1;
                } while (cond_10_1);
            }

            ctxB19 += 1;
            v_5e0 -= 1;
            int32_t v_5f0_1 = ctxB19;
            v_604_1 += *v_5fc_1 >> (ctxB19 & 0x1f);
            char objC56 = ctxB19;
            v_5dc = v_5dc * 0.5f;
            v_608_1 += v_5fc_1[2] >> (objC56 & 0x1f);
            v_600_1 += v_5fc_1[1] >> (objC56 & 0x1f);
            v_610_1 += (&saved_dst)[tmpD18 * 3 + 0x40] >> (ctxB19 & 0x1f);
            v_5f8 = v_5f8 * 0.5f;
            v_614_1 += (&saved_dst)[tmpD18 * 3 + 0x41] >> (ctxB19 & 0x1f);
            v_60c_1 += (&saved_dst)[tmpD18 * 3 + 0x42] >> (ctxB19 & 0x1f);
            int32_t* tmpD41 = &v_4e8;
            char* v_5c0_1 = &(&saved_dst)[v_638_1 * 2 + 0x70];
            int32_t* v_5fc_2 = &v_4e8;

            if (g_b12bb8)
                v_5d8_1 = 0;

            int32_t* dstD27 = &v_548 - &v_4e8;
            int32_t v_620_2 = 0;
            int32_t v_63c_3 = 1;
            int32_t* v_62c_3 = 0xc;
            int32_t* v_624_3 = dstD27;

            do
            {
                int32_t objC68 = *v_5c0_1;
                v_5c0_1 = &v_5c0_1[1];
                int32_t valA66 = 1 << (objC68 & 0x1f);
                int32_t objC70 = v_63c_3 & v_5cc_1;

                if (objC70)
                    goto label_4d1e7c;

                if (v_5d8_1 & valA66)
                {
                    ctxB19 = v_5f0_1;
                label_4d1e7c:
                    long double x87_r7_28 = (tmpD41[2] >> ((ctxB19 + 1) & 0x1f)) + v_608_1;
                    float v_638_2 = x87_r7_28;
                    long double x87_r6_16 = 64.0 - v_5f8;
                    x87_r6_16 - x87_r7_28;

                    if (*(&((x87_r6_16 < x87_r7_28 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_16, x87_r7_28) ? 1 : 0) << 0xa
                        | (x87_r6_16 == x87_r7_28 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        long double x87_r7_29 = (*tmpD41 >> ((ctxB19 + 1) & 0x1f)) + v_604_1;
                        long double x87_r6_19 = v_638_2 * objC4 + v_5dc;
                        x87_r7_29 - x87_r6_19;

                        if (*(&((x87_r7_29 < x87_r6_19 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_29, x87_r6_19) ? 1 : 0) << 0xa
                            | (x87_r7_29 == x87_r6_19 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                        {
                            long double x87_r6_20 = -(x87_r6_19);
                            x87_r7_29 - x87_r6_20;

                            if (!(*(&((x87_r7_29 < x87_r6_20 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_29, x87_r6_20) ? 1 : 0) << 0xa
                                | (x87_r7_29 == x87_r6_20 ? 1 : 0) << 0xe) + 1) & 0x41))
                            {
                                x87_r7_29 = (tmpD41[1] >> ((ctxB19 + 1) & 0x1f)) + v_600_1;
                                x87_r6_19 = v_638_2 * tmpD1 + v_5f8;
                                x87_r7_29 - x87_r6_19;

                                if (*(&((x87_r7_29 < x87_r6_19 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_29, x87_r6_19) ? 1 : 0) << 0xa
                                    | (x87_r7_29 == x87_r6_19 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                                {
                                    long double x87_r6_24 = -(x87_r6_19);
                                    x87_r7_29 - x87_r6_24;

                                    if (!(*(&((x87_r7_29 < x87_r6_24 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_29, x87_r6_24) ? 1 : 0) << 0xa
                                        | (x87_r7_29 == x87_r6_24 ? 1 : 0) << 0xe) + 1) & 0x41))
                                    {
                                        int32_t ctxB25 = (*(dstD27 + tmpD41 + 8)
                                            >> ((ctxB19 + 1) & 0x1f)) + v_60c_1;
                                        int32_t valA80 = 0x40000000 >> ((ctxB19 + 1) & 0x1f);

                                        if (valA80 + ctxB25 + v_634_4 >= v_5bc)
                                        {
                                            int32_t tmpD44 = (*(dstD27 + tmpD41 + 4)
                                                >> ((ctxB19 + 1) & 0x1f)) + v_614_1;
                                            int32_t srcS9 = (*(dstD27 + tmpD41)
                                                >> ((ctxB19 + 1) & 0x1f)) + v_610_1;
                                            v_634_10 = tmpD44;
                                            int32_t valA84 = srcS9;

                                            if (srcS9 < 0)
                                                valA84 = -(valA84);

                                            if (tmpD44 < 0)
                                                tmpD44 = -(tmpD44);

                                            if (tmpD44 > valA84)
                                                valA84 = tmpD44;

                                            int32_t objC72 = ctxB25;

                                            if (ctxB25 < 0)
                                                objC72 = -(objC72);

                                            if (objC72 > valA84)
                                                valA84 = objC72;

                                            int32_t v_638_3 = 0;
                                            int32_t v_628_6 = 0;
                                            int32_t valA86 =
                                                (valA84 - valA80) >> ((v_5e0 + 0x19) & 0x1f);

                                            if (objC70)
                                            {
                                                long double x87_r7_33 = valA86 * g_bcab20;
                                                long double f3_1 = 9600f;
                                                x87_r7_33 - f3_1;

                                                if (*(&((x87_r7_33 < f3_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_33, f3_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_33 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
                                                {
                                                    int32_t dstD29 = 1;
                                                    float* objC76 = &v_5a4;
                                                    int32_t v_5ec_2 = 5;
                                                    bool cond_21_1;

                                                    do
                                                    {
                                                        if (objC27 & dstD29)
                                                        {
                                                            float valA89 = *objC76;

                                                            if (*(valA89 + 0x30) & v_63c_3)
                                                            {
                                                                int32_t* tmpD46 = v_62c_3;
                                                                void* valA90 = *(tmpD46 + valA89);
                                                                tmpD46 = *(valA90 + 0x3a);
                                                                tmpD46 |= *(valA90 + 0x38);

                                                                if (tmpD46 & 0x183)
                                                                {
                                                                    v_628_6 = 1;
                                                                    v_638_3 |= dstD29 << 0xa;
                                                                }
                                                            }
                                                        }

                                                        objC76 = &objC76[1];
                                                        dstD29 <<= 1;
                                                        cond_21_1 = v_5ec_2 != 1;
                                                        v_5ec_2 -= 1;
                                                    } while (cond_21_1);
                                                }
                                            }

                                            void* v_5b4;
                                            void* valA98;

                                            if (v_5d8_1 & valA66)
                                            {
                                                int32_t valA96 = 0;
                                                valA96 = *(v_57c + (objC68 << 1));
                                                valA98 = (valA96 << 5) + tmpD;
                                                void* const tmpD50 = nullptr;
                                                tmpD50 = *(objC68 + v_57c + 0x10);
                                                v_5b4 = valA98;
                                                int32_t objC80 = *(tmpD50 +
                                                    &(&saved_dst)[v_638_1 * 2 + 0x80]);

                                                if (valA86 < valA4 && v_5f0_1 + 1 < 0x10)
                                                {
                                                    v_638_3 |= objC80 << 4 | 2;
                                                    goto label_4d22bd;
                                                }

                                                if (v_5f0_1 + 1 > 6)
                                                {
                                                    int32_t srcS10 = srcS9 + v_634_2;
                                                    int32_t ctxB26 = ctxB25 + v_634_4;
                                                    int32_t dstD32 = v_634_10 + v_634_3;
                                                    int32_t valA110 = ((((ctxB26 >> 2 & 0x1ffc000)
                                                        ^ (srcS10 & 0x1ffc000)) >> 3
                                                        ^ (dstD32 & 0x3ff800)) >> 5
                                                        ^ ((ctxB26 ^ dstD32 ^ srcS10) & 0x1ffc0)) >> 6;
                                                    int32_t objC89 = valA110 * 0x1c;
                                                    int32_t tmpD63 = *(objC89 + 0xb04350);

                                                    if (tmpD63 != 0xffffffff)
                                                    {
                                                        while (objC3 != tmpD63
                                                            || *(objC89 + &g_b04340) != srcS10
                                                            || *(objC89 + 0xb04344) != dstD32
                                                            || *(objC89 + 0xb04348) != ctxB26)
                                                        {
                                                            valA110 = (valA110 + 1) & 0x7ff;
                                                            objC89 = valA110 * 0x1c;
                                                            tmpD63 = *(objC89 + 0xb04350);

                                                            if (tmpD63 == 0xffffffff)
                                                                break;
                                                        }
                                                    }

                                                    int32_t tmpD64 = 1;

                                                    if (objC3 == *(valA110 * 0x1c + 0xb04350))
                                                    {
                                                        int32_t objC95 =
                                                            *(valA110 * 0x1c + &g_b04358);
                                                        *(valA110 * 0x1c + 0xb04350) = valA3;
                                                        tmpD64 = 0;

                                                        if (!objC95)
                                                        {
                                                            Error_Show("Should have allocated data "
                                                            "for cube existing previous frame");

                                                            while (true)
                                                                /* nop */
                                                        }
                                                        else
                                                        {
                                                            *v_5ac = objC95;
                                                            v_5ac = &v_5ac[1];
                                                            v_5d4 += 1;
                                                        }
                                                    }
                                                    else if (*(valA110 * 0x1c + &g_b04358))
                                                    {
                                                        Error_Show("Should't have allocate hash data! ERROR!");

                                                        while (true)
                                                            /* nop */
                                                    }
                                                    else
                                                    {
                                                        *(valA110 * 0x1c + 0xb04354) = 3;
                                                        *(valA110 * 0x1c + 0xb0434c) = valA86;
                                                        *(valA110 * 0x1c + &g_b04340) = srcS10;
                                                        *(valA110 * 0x1c + 0xb04344) = dstD32;
                                                        *(valA110 * 0x1c + 0xb04348) = ctxB26;
                                                        *(valA110 * 0x1c + 0xb04350) = valA3;
                                                    }

                                                    if (v_61c > 0xfff)
                                                        g_b12b80 += 1;
                                                    else if (tmpD64)
                                                    {
                                                        int32_t tmpD66 = g_ba5060;
                                                        *(v_5a8 - 4) =
                                                            valA110 * 0x1c + &g_b04340;
                                                        int32_t valA113 = g_b97d24;
                                                        *(v_5a8 - 8) = tmpD66;
                                                        int32_t* objC104;

                                                        if (!valA113)
                                                        {
                                                            objC104 = v_5a8 - 0xc;
                                                            *objC104 = g_ba2058 << 0x10 | 0xffff;
                                                        }
                                                        else
                                                        {
                                                            objC104 = v_5a8 - 0xc;
                                                            *objC104 =
                                                                *((valA113 << 2) + &g_b97b1c)
                                                                | g_ba2058 << 0x10;
                                                        }

                                                        *(objC104 - 4) = *(v_5b4 + 0x1c);
                                                        *(objC104 - 8) = objC80;
                                                        *(objC104 - 0xc) = v_5f0_1 + 1;
                                                        *(objC104 - 0x14) = ctxB26;
                                                        *(objC104 - 0x1c) = dstD32;
                                                        *(objC104 - 0x24) = srcS10;
                                                        v_5a8 = &objC104[0xf];
                                                        v_61c += 1;
                                                    }
                                                }
                                            }

                                            if (!v_628_6)
                                            {
                                                tmpD41 = v_5fc_2;
                                                i_2 = i_6;
                                            }
                                            else
                                            {
                                                valA98 = v_5b4;
                                            label_4d22bd:
                                                i_2 = &i_6[2];
                                                tmpD41 = v_5fc_2;
                                                i_6 = i_2;
                                                i_2[1] = v_620_2 << 7 | v_638_3;
                                                *i_2 = valA98;
                                            }

                                            dstD27 = v_624_3;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

                tmpD41 = &tmpD41[3];
                ctxB19 = v_5f0_1;
                v_5fc_2 = tmpD41;
                v_620_2 += 1;
                v_63c_3 <<= 1;
                v_62c_3 = &v_62c_3[1];
            } while (&v_62c_3[1] < 0x2c);
        }
        else
        {
            if (objC27)
            {
                int32_t v_63c_1 = 1;
                float* v_618 = &v_5a4;
                int32_t v_62c_1 = 5;
                bool cond_8_1;

                do
                {
                    if (objC27 & v_63c_1)
                    {
                        float valA27 = *v_618;
                        float v_624_2 = valA27;
                        bool cond_9_1 = !(*(valA27 + 0x38) & 0x100);
                        *v_618 = *(valA27 + 8);

                        if (!cond_9_1)
                        {
                            void* j_2 = *(valA27 + 0x2c);

                            do
                            {
                                if (*(j_2 + 0x5c) & 0x100)
                                {
                                    int32_t objC31 = 0;
                                    objC31 = *(j_2 + 0x1c);
                                    (*((objC31 << 2) + &g_a9cae0))(j_2, *(j_2 + 0x48));
                                    valA27 = v_624_2;
                                }

                                j_2 = *(j_2 + 0x58);
                            } while (j_2);
                        }

                        if (*(valA27 + 0x38) & 2)
                        {
                            void* j_3 = *(valA27 + 0x2c);

                            do
                            {
                                if (*(j_3 + 0x5c) & 2 && !*(j_3 + 0x60))
                                {
                                    *(g_b12c58 + 4) = j_3;
                                    **&g_b12c58 = 5;
                                    g_b12c58 += 8;
                                    g_b12c20 += 1;
                                }

                                j_3 = *(j_3 + 0x58);
                            } while (j_3);
                        }

                        dstD7 = v_5fc_1;
                    }

                    v_63c_1 <<= 1;
                    cond_8_1 = v_62c_1 != 1;
                    v_618 = &v_618[1];
                    v_62c_1 -= 1;
                } while (cond_8_1);
            }

            long double x87_r7_20 = v_5dc;
            v_604_1 -= *dstD7 >> (ctxB19 & 0x1f);
            char objC35 = ctxB19;
            v_5dc = x87_r7_20 + x87_r7_20;
            long double x87_r7_22 = v_5f8;
            v_600_1 -= dstD7[1] >> (objC35 & 0x1f);
            v_5f8 = x87_r7_22 + x87_r7_22;
            v_608_1 -= dstD7[2] >> (objC35 & 0x1f);
            v_610_1 -= (&saved_dst)[tmpD18 * 3 + 0x40] >> (ctxB19 & 0x1f);
            char objC41 = ctxB19;
            v_614_1 -= (&saved_dst)[tmpD18 * 3 + 0x41] >> (objC41 & 0x1f);
            ctxB19 -= 1;
            i_2 -= 8;
            v_60c_1 -= (&saved_dst)[tmpD18 * 3 + 0x42] >> (objC41 & 0x1f);
            v_5e0 += 1;
            i_6 = i_2;
        }
    } while (i_2 >= &v_408);

    void* tmpD75 = nullptr;

    for (int32_t i_3 = 0xa4ef38; i_3 < 0xa4f078; )
    {
        int32_t dstD33 = *(a1 + (*(tmpD75 + 0x548444) << 2) + 0x10);

        if (dstD33)
            memcpy(dstD33, i_3, 0x40);

        i_3 += 0x40;
        tmpD75 += 1;
    }

    g_b16ca4 = v_61c;
    int32_t* objC118 = &g_b04358;
    int32_t tmpD78 = valA3 & 0xffff0000;
    int32_t srcS16 = valA3 & 0xffff;
    g_b16c9c = v_5d4;
    v_634_10 = tmpD78;
    int32_t v_5e4_1 = srcS16;
    int32_t i_5 = 0;
    int32_t* v_61c_1 = &g_b04358;
    int32_t i_4;

    do
    {
        int32_t valA127 = objC118[-2];

        if ((tmpD78 == (valA127 & 0xffff0000) && valA127 != srcS16)
            || (valA127 & 0xffff) + 1 < srcS16)
        {
            int32_t valA130 = *objC118;

            if (valA130)
            {
                int32_t tmpD79 = objC118[-1];
                int32_t valA135;
                int32_t tmpD80;

                if (!tmpD79)
                {
                    int32_t* srcS17 = g_b12b74;
                    tmpD80 = *(srcS17 + valA130);
                    int32_t valA132 = g_b12b68 - 1;
                    g_b12b68 = valA132;

                    if (tmpD80 != valA132)
                    {
                        int32_t objC119 = g_b12b64;
                        valA135 = *(objC119 + (valA132 << 2)) * g_b12b70 + g_b12b60;
                        int32_t dstD39 = *(objC119 + (tmpD80 << 2));
                        int32_t srcS18 = *(srcS17 + valA135);
                        *(objC119 + (tmpD80 << 2)) = *(objC119 + (srcS18 << 2));
                        *(g_b12b64 + (srcS18 << 2)) = dstD39;
                        *(g_b12b74 + valA135) = tmpD80;
                        objC118 = v_61c_1;
                    }
                }
                else if (tmpD79 == 1)
                {
                    int32_t* srcS19 = g_b12c54;
                    tmpD80 = *(srcS19 + valA130);
                    int32_t valA137 = g_b12c48 - 1;
                    g_b12c48 = valA137;

                    if (tmpD80 != valA137)
                    {
                        int32_t objC122 = g_b12c44;
                        valA135 = *(objC122 + (valA137 << 2)) * g_b12c50 + g_b12c40;
                        int32_t dstD41 = *(objC122 + (tmpD80 << 2));
                        int32_t srcS20 = *(srcS19 + valA135);
                        *(objC122 + (tmpD80 << 2)) = *(objC122 + (srcS20 << 2));
                        *(g_b12c44 + (srcS20 << 2)) = dstD41;
                        *(g_b12c54 + valA135) = tmpD80;
                        objC118 = v_61c_1;
                    }
                }
                else if (tmpD79 != 2)
                {
                    Error_Show("Illegal alloc info");

                    while (true)
                        /* nop */
                }
                else
                {
                    int32_t* srcS21 = g_b16cd4;
                    tmpD80 = *(srcS21 + valA130);
                    int32_t valA141 = g_b16cc8 - 1;
                    g_b16cc8 = valA141;

                    if (tmpD80 != valA141)
                    {
                        int32_t objC124 = g_b16cc4;
                        valA135 = *(objC124 + (valA141 << 2)) * g_b16cd0 + g_b16cc0;
                        int32_t dstD43 = *(objC124 + (tmpD80 << 2));
                        int32_t srcS22 = *(srcS21 + valA135);
                        *(objC124 + (tmpD80 << 2)) = *(objC124 + (srcS22 << 2));
                        *(g_b16cc4 + (srcS22 << 2)) = dstD43;
                        *(g_b16cd4 + valA135) = tmpD80;
                        objC118 = v_61c_1;
                    }
                }
                *objC118 = 0;
            }

            srcS16 = v_5e4_1;
            tmpD78 = v_634_10;
            objC118[-2] = 0xffffffff;
        }

        objC118 = &objC118[7];
        i_4 = i_5 + 1;
        v_61c_1 = objC118;
        i_5 = i_4;
    } while (i_4 < 0x800);

    return i_4;
}
