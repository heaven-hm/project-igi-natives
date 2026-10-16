#include "gi_platform.h"
#include "0050B4F0-Physics_CouldnTGetSurfacedes.h"
int32_t Physics_CouldnTGetSurfacedes(int32_t* a1, int32_t a2, int32_t a3, int32_t* a4, int32_t* a5, int32_t* a6)

{
    int32_t objC = *a1;
    int32_t v_b4 = 0x7c;
    int32_t valA1 = ((int(*)())(uintptr_t)(*(objC + 0x58)))(a1, &v_b4);
    char v_530;

    if (valA1)
    {
        Game_DataSymbolLoad(&v_530, "Couldn't get surfacedesc");
        int32_t v_54c = DDERR_GENERIC(valA1);
        void* v_550 = &v_530;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t v_130;
    __builtin_memset(&v_130, 0, 0x7c);
    int32_t* valA3 = g_5ca10c;
    v_130 = 0x7c;
    int32_t ctxB = a2;
    int32_t v_128 = a3;
    int32_t v_12c = 0x1007;
    int32_t v_124 = ctxB;
    int32_t v_c8 = 0x1800;
    char v_e8;
    char v_6c;
    memcpy(&v_e8, &v_6c, 0x20);
    int32_t* v_8;
    int32_t valA4 = ((int(*)())(uintptr_t)(*(*valA3 + 0x18)))(valA3, &v_130, &v_8, 0);

    if (valA4)
    {
        Game_DataSymbolLoad(&v_530, "Couldn't create surface");
        int32_t v_54c_2 = DDERR_GENERIC(valA4);
        void* v_550_1 = &v_530;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t* valA6 = v_8;
    int32_t valA7 = ((int(*)())(uintptr_t)(*(*valA6 + 0x64)))(valA6, 0, &v_130, 1, 0);

    if (valA7)
    {
        Game_DataSymbolLoad(&v_530, "Couldn't lock surface");
        int32_t v_54c_3 = DDERR_GENERIC(valA7);
        void* v_550_3 = &v_530;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    int32_t v_50;
    char v_34;
    char objC5;

    if (!v_50)
    {
        v_34 = 0;
        objC5 = 0;
    }
    else
    {
        int32_t eflags_1;
        char valA10;
        valA10 = __bsf_gprv_memv(v_50);
        v_34 = valA10;
        int32_t eflags_2;
        char valA12;
        valA12 = __bsr_gprv_memv(v_50);
        objC5 = valA12 - valA10 + 1;
    }

    int32_t v_5c;
    int32_t eflags_3;
    char valA13;
    valA13 = __bsf_gprv_memv(v_5c);
    int32_t v_58;
    int32_t eflags_4;
    char valA15;
    valA15 = __bsf_gprv_memv(v_58);
    int32_t v_54;
    int32_t eflags_5;
    char valA16;
    valA16 = __bsf_gprv_memv(v_54);
    int32_t eflags_6;
    char valA18;
    valA18 = __bsr_gprv_memv(v_5c);
    int32_t eflags_7;
    char valA19;
    valA19 = __bsr_gprv_memv(v_58);
    int32_t eflags_8;
    char valA21;
    valA21 = __bsr_gprv_memv(v_54);
    char v_68;

    if (!(v_68 & 0x40))
    {
        Error_Show("Invalid texture format");

        while (true)
            /* nop */

        return;
    }

    int32_t v_60;
    int32_t v_120;
    int32_t* v_10c;

    if (v_60 == 0x20)
    {
        int32_t* srcS5 = a5;

        if (v_5c != 0xff0000 || v_58 != 0xff00 || v_54 != 0xff || srcS5 != ctxB || a6 != a3
            || v_120 != ctxB << 2)
        {
            int32_t* valA43 = a6;
            int32_t dstD4 = 0;
            int32_t v_c_2 = 0;

            if (valA43 > 0)
            {
                int32_t* v_24_1 = a4;

                do
                {
                    int32_t* v_20_1 = v_24_1;
                    void* dstD6 = dstD4 * v_120 + v_10c;

                    if (srcS5 > 0)
                    {
                        int32_t* v_14_1 = srcS5;
                        bool cond_8_1;

                        do
                        {
                            dstD6 += 4;
                            int32_t valA35 = *v_20_1;
                            uint32_t srcS13 =
                                valA35 >> ((valA16 - valA21 + 7) & 0x1f) << (valA16 & 0x1f)
                                | (valA35 & 0xff0000) >> ((valA13 - valA18 + 0x17) & 0x1f)
                                << (valA13 & 0x1f) | (valA35 & 0xff00)
                                >> ((valA15 - valA19 + 0xf) & 0x1f) << (valA15 & 0x1f);
                            *(dstD6 - 4) = srcS13 | (valA35 & 0xff000000) >> ((0x20 - objC5) & 0x1f)
                                << (v_34 & 0x1f);
                            cond_8_1 = v_14_1 != 1;
                            v_20_1 = &v_20_1[1];
                            v_14_1 -= 1;
                        } while (cond_8_1);
                        ctxB = a2;
                        srcS5 = a5;
                    }

                    int32_t objC27;
                    int32_t dstD7;

                    if (srcS5 < ctxB)
                        dstD7 = __memfill_u32(dstD6, *(dstD6 - 4), ctxB - srcS5);
                    dstD4 = v_c_2 + 1;
                    valA43 = a6;
                    v_c_2 = dstD4;
                    v_24_1 = &v_24_1[srcS5];
                } while (dstD4 < valA43);
            }

            int32_t* dstD9 = valA43;
            int32_t* v_c_3 = dstD9;

            if (valA43 < a3)
            {
                int32_t* valA46 = &a4[(valA43 - 1) * srcS5];

                do
                {
                    a6 = valA46;
                    void* dstD11 = dstD9 * v_120 + v_10c;

                    if (srcS5 > 0)
                    {
                        int32_t* v_14_2 = srcS5;
                        bool cond_12_1;

                        do
                        {
                            dstD11 += 4;
                            int32_t valA48 = *a6;
                            uint32_t srcS22 =
                                valA48 >> ((valA16 - valA21 + 7) & 0x1f) << (valA16 & 0x1f)
                                | (valA48 & 0xff0000) >> ((valA13 - valA18 + 0x17) & 0x1f)
                                << (valA13 & 0x1f) | (valA48 & 0xff00)
                                >> ((valA15 - valA19 + 0xf) & 0x1f) << (valA15 & 0x1f);
                            *(dstD11 - 4) = srcS22 | (valA48 & 0xff000000)
                                >> ((0x20 - objC5) & 0x1f) << (v_34 & 0x1f);
                            cond_12_1 = v_14_2 != 1;
                            a6 = &a6[1];
                            v_14_2 -= 1;
                        } while (cond_12_1);
                        ctxB = a2;
                        srcS5 = a5;
                    }

                    int32_t objC44;
                    int32_t dstD12;

                    if (srcS5 < ctxB)
                        dstD12 = __memfill_u32(dstD11, *(dstD11 - 4), ctxB - srcS5);
                    dstD9 = v_c_3 + 1;
                    v_c_3 = dstD9;
                } while (dstD9 < a3);
            }
        }
        else
        {
            int32_t objC11 = (ctxB * a3) << 2;
            int32_t srcS7;
            int32_t dstD3;
            dstD3 = memcpy(v_10c, a4, objC11 & 0xfffffffc);
            memcpy(dstD3, srcS7, objC11 & 3);
        }
    }
    else if (v_60 != 0x10)
    {
        Error_Show("Invalid texture format");

        while (true)
            /* nop */
    }
    else
    {
        int32_t* objC45 = a6;
        int32_t* srcS26 = a5;
        int32_t v_c_4 = 0;

        if (objC45 > 0)
        {
            int32_t* v_20_2 = a4;

            do
            {
                int32_t* v_24_2 = v_20_2;
                void* dstD16 = v_c_4 * v_120 + v_10c;

                if (srcS26 > 0)
                {
                    int32_t* v_14_3 = srcS26;
                    bool cond_6_1;

                    do
                    {
                        dstD16 += 2;
                        int32_t valA59 = *v_24_2;
                        uint16_t srcS31 =
                            valA59 >> ((valA16 - valA21 + 7) & 0x1f) << (valA16 & 0x1f)
                            | (valA59 & 0xff0000) >> ((valA13 - valA18 + 0x17) & 0x1f)
                            << (valA13 & 0x1f);
                        uint16_t srcS33 = srcS31 | (valA59 & 0xff00)
                            >> ((valA15 - valA19 + 0xf) & 0x1f) << (valA15 & 0x1f)
                            | (valA59 & 0xff000000) >> ((0x20 - objC5) & 0x1f) << (v_34 & 0x1f);
                        *(dstD16 - 2) = srcS33;
                        cond_6_1 = v_14_3 != 1;
                        v_24_2 = &v_24_2[1];
                        v_14_3 -= 1;
                    } while (cond_6_1);
                    ctxB = a2;
                    srcS26 = a5;
                    objC45 = a6;
                }

                int16_t valA64 = *(dstD16 - 2);

                if (srcS26 < ctxB)
                {
                    int32_t objC55 = ctxB;
                    ctxB = valA64;
                    int32_t ctxB25 = ctxB << 0x10;
                    void* objC56 = objC55 - srcS26;
                    ctxB25 = valA64;
                    ctxB = a2;
                    int32_t objC58;
                    int32_t dstD17;
                    dstD17 = __memfill_u32(dstD16, ctxB25, objC56 >> 1);
                    int32_t objC60;
                    int32_t dstD18;
                    dstD18 = __memfill_u16(dstD17, ctxB25, objC58 + objC58);
                    objC45 = a6;
                }

                v_c_4 += 1;
                v_20_2 = &v_20_2[srcS26];
            } while (v_c_4 < objC45);
        }

        int32_t* dstD21 = objC45;
        int32_t* v_c_5 = dstD21;

        if (objC45 < a3)
        {
            int32_t* objC63 = &a4[(objC45 - 1) * srcS26];

            do
            {
                void* dstD23 = dstD21 * v_120 + v_10c;
                a6 = objC63;

                if (srcS26 > 0)
                {
                    int32_t* v_14_4 = srcS26;
                    bool cond_10_1;

                    do
                    {
                        dstD23 += 2;
                        int32_t valA73 = *a6;
                        uint16_t srcS40 =
                            valA73 >> ((valA16 - valA21 + 7) & 0x1f) << (valA16 & 0x1f)
                            | (valA73 & 0xff0000) >> ((valA13 - valA18 + 0x17) & 0x1f)
                            << (valA13 & 0x1f);
                        uint16_t srcS42 = srcS40 | (valA73 & 0xff00)
                            >> ((valA15 - valA19 + 0xf) & 0x1f) << (valA15 & 0x1f)
                            | (valA73 & 0xff000000) >> ((0x20 - objC5) & 0x1f) << (v_34 & 0x1f);
                        *(dstD23 - 2) = srcS42;
                        cond_10_1 = v_14_4 != 1;
                        a6 = &a6[1];
                        v_14_4 -= 1;
                    } while (cond_10_1);
                    ctxB = a2;
                    srcS26 = a5;
                }

                int16_t valA78 = *(dstD23 - 2);

                if (srcS26 < ctxB)
                {
                    int32_t objC74 = ctxB;
                    ctxB = valA78;
                    int32_t ctxB34 = ctxB << 0x10;
                    void* objC75 = objC74 - srcS26;
                    ctxB34 = valA78;
                    ctxB = a2;
                    int32_t objC77;
                    int32_t dstD24;
                    dstD24 = __memfill_u32(dstD23, ctxB34, objC75 >> 1);
                    int32_t objC79;
                    int32_t dstD25;
                    dstD25 = __memfill_u16(dstD24, ctxB34, objC77 + objC77);
                }

                dstD21 = v_c_5 + 1;
                v_c_5 = dstD21;
            } while (dstD21 < a3);
        }
    }
    int32_t* valA81 = v_8;
    int32_t valA82 = ((int(*)())(uintptr_t)(*(*valA81 + 0x80)))(valA81, 0);

    if (!valA82)
    {
        int32_t valA85 = ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)(*a1 + 0x14))))(a1, 0, v_8, 0, 0x1000000, 0);

        if (!valA85)
        {
            int32_t* valA87 = v_8;
            return ((int(*)())(uintptr_t)(*(*valA87 + 8)))(valA87);
        }

        Game_DataSymbolLoad(&v_530, "Couldn't blit surface");
        int32_t v_54c_6 = DDERR_GENERIC(valA85);
        void* v_550_5 = &v_530;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */
    }
    else
    {
        Game_DataSymbolLoad(&v_530, "Couldn't unlock surface");
        int32_t v_54c_4 = DDERR_GENERIC(valA82);
        void* v_550_4 = &v_530;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */
    }
}
