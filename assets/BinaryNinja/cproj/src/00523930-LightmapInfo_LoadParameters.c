#include "gi_platform.h"
#include "00523930-LightmapInfo_LoadParameters.h"
int32_t LightmapInfo_LoadParameters(void* a1)

{
    void* srcS = a1;
    int32_t i_1 = 0;
    void* ctxB = (*(int32_t*)(uintptr_t)(srcS + 0x14));
    int32_t dstD = 0;
    bool cond_0 = (*(int32_t*)(uintptr_t)(srcS + 0xcc));
    (*(int32_t*)(uintptr_t)(srcS + 0x8c)) = 0x3f800000;
    a1 = nullptr;
    int32_t v_18 = 0;

    if (!cond_0 && (*(int32_t*)(uintptr_t)(srcS + 0x98)) != 0x3f800000)
        dstD = 1;

    if ((*(int32_t*)(uintptr_t)(srcS + 0x70)) || (*(int32_t*)(uintptr_t)(srcS + 0x6f)) || (*(int32_t*)(uintptr_t)(srcS + 0x71)))
    {
        int32_t* valA2 = (*(int32_t*)(uintptr_t)(srcS + 0x88));
        v_18 = 1;

        if (valA2)
        {
            int32_t i_5 = *valA2;

            if (i_5 > 0)
            {
                int32_t* objC1 = &valA2[6];
                int32_t i;

                do
                {
                    void* valA3 = *objC1;

                    if (valA3 && !*(valA3 + 0x38))
                        a1 = 1;

                    objC1 = &objC1[9];
                    i = i_5;
                    i_5 -= 1;
                } while (i != 1);
            }
        }
    }

    (*(int32_t*)(uintptr_t)(srcS + 0xcc)) = 0;
    void* valA5 = a1 | dstD;
    int32_t v_8 = (*(int32_t*)(uintptr_t)(srcS + 0x88));
    uint32_t valA8 = DynObj_InsertHashItem_16();
    int32_t tmpD1 = 0;
    tmpD1 = (*(int32_t*)(uintptr_t)(ctxB + 0x1c));
    ((int(*)())(uintptr_t)(*(((valA8 * 0x180 + tmpD1) << 2) + &g_a96ae0)))(ctxB, &v_8);
    int32_t v_4;
    long double x87_r7_1;
    long double f0_1;

    if (v_4)
    {
        x87_r7_1 = (*(int32_t*)(uintptr_t)(srcS + 0x98));
        f0_1 = (*(int32_t*)(uintptr_t)(srcS + 0x8c));
        x87_r7_1 - f0_1;
    }

    if (!v_4 || !(*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8
        | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1)
        & 0x40) || valA5 || (*(int32_t*)(uintptr_t)(srcS + 0xdc)))
    {
        int32_t* dstD1 = (*(int32_t*)(uintptr_t)(srcS + 0x88));

        if (dstD1 && *dstD1 > 0)
        {
            int32_t ctxB1 = 0;

            do
            {
                void* valA12 = *(ctxB1 + dstD1 + 0x18);

                if (valA12)
                {
                    Light_SampleLightmap_2(valA12);
                    *(ctxB1 + dstD1 + 0x18) = 0;
                }

                dstD1 = (*(int32_t*)(uintptr_t)(srcS + 0x88));
                i_1 += 1;
                ctxB1 += 0x24;
            } while (i_1 < *dstD1);
        }

        int32_t* valA13 = (*(int32_t*)(uintptr_t)(srcS + 0xc8));

        if (valA13)
        {
            Light_SetLightColor_2(valA13);
            (*(int32_t*)(uintptr_t)(srcS + 0xc8)) = 0;
        }

        int32_t v_14 = (*(int32_t*)(uintptr_t)(srcS + 0x88));

        if (FX_FireBallUpdate_25())
        {
            uint32_t valA16 = DynObj_RegisterSymbol_16();
            int32_t objC5 = 0;
            objC5 = (*(int32_t*)(uintptr_t)(ctxB + 0x1c));
            ((int(*)())(uintptr_t)(*(((valA16 * 0x180 + objC5) << 2) + &g_a96ae0)))(ctxB, &v_14);
        }

        int32_t valA21 = v_14;
        (*(int32_t*)(uintptr_t)(srcS + 0x88)) = valA21;

        if (valA21)
        {
            (*(int32_t*)(uintptr_t)(srcS + 0xa8)) = 0;
            (*(int32_t*)(uintptr_t)(srcS + 0xac)) = 0;
            g_a83b4c = 0;
            g_a839f4 = 0;
            int32_t* dstD2 = (*(int32_t*)(uintptr_t)(srcS + 0x88));
            int32_t i_2 = 0;
            int32_t i_4 = 0;

            if (*dstD2 > 0)
            {
                int32_t flagP = 0;

                do
                {
                    int32_t valA25;

                    if (valA5 || (*(int32_t*)(uintptr_t)(srcS + 0xdc)) || v_18)
                        valA25 = 1;
                    else
                        valA25 = 0;

                    int32_t objC6 = *(dstD2 + flagP + 0x30);
                    int32_t v_2c_4 = (*(int32_t*)(uintptr_t)(srcS + 0x94));
                    int32_t v_30_2 = v_18;
                    int32_t v_40_1 = objC6;
                    float v_40_2 = (1 << (objC6 & 0x1f)) * (*(int32_t*)(uintptr_t)(srcS + 0x8c)) * 4096.0f;
                    int32_t* valA28 =
                        Light_RenderLensflare_3(*(dstD2 + flagP + 0x1c), objC6, srcS + 0x78, i_2, valA25);
                    int32_t j = 0;
                    *(dstD2 + flagP + 0x18) = valA28;
                    *(dstD2 + flagP + 0x38) = 0;

                    if (valA28 && valA28[0xb] > 0)
                    {
                        int32_t* objC8 = valA28;
                        int32_t valA29 = 0;

                        do
                        {
                            (*(int32_t*)(uintptr_t)(srcS + 0xac)) += *(valA29 + objC8 + 0x66) * *(valA29 + objC8 + 0x64);
                            void* objC13 = *(dstD2 + flagP + 0x18) + valA29;
                            valA29 += 0x2c;
                            j += 1;
                            (*(int32_t*)(uintptr_t)(srcS + 0xa8)) += *(objC13 + 0x66) * *(objC13 + 0x64);
                            objC8 = *(dstD2 + flagP + 0x18);
                        } while (j < objC8[0xb]);

                        i_2 = i_4;
                    }

                    dstD2 = (*(int32_t*)(uintptr_t)(srcS + 0x88));
                    i_2 += 1;
                    flagP += 0x24;
                    i_4 = i_2;
                } while (i_2 < *dstD2);
            }

            int32_t i_3 = 0;
            (*(int32_t*)(uintptr_t)(srcS + 0xc0)) = g_a83b4c;
            (*(int32_t*)(uintptr_t)(srcS + 0xc4)) = g_a839f4;
            int32_t* valA31 = (*(int32_t*)(uintptr_t)(srcS + 0x88));

            if (*valA31 > 0)
            {
                int32_t flagP1 = 0;

                do
                {
                    if (valA31 + flagP1 + 0x18)
                    {
                        void* dstD3 = *(valA31 + flagP1 + 0x20);
                        uint32_t valA34 = DynObj_LookupHashItem_16();
                        int32_t tmpD6 = 0;
                        tmpD6 = *(dstD3 + 0x1c);
                        ((int(*)())(uintptr_t)(*(((valA34 * 0x180 + tmpD6) << 2) + &g_a96ae0)))(dstD3, 0);
                    }

                    valA31 = (*(int32_t*)(uintptr_t)(srcS + 0x88));
                    i_3 += 1;
                    flagP1 += 0x24;
                } while (i_3 < *valA31);
            }

            int32_t v_2c_5 = (*(int32_t*)(uintptr_t)(srcS + 0x88));
        }
    }

    int32_t result = (*(int32_t*)(uintptr_t)(srcS + 0x88));
    (*(int32_t*)(uintptr_t)(srcS + 0x98)) = (*(int32_t*)(uintptr_t)(srcS + 0x8c));
    (*(int32_t*)(uintptr_t)(srcS + 0xdc)) = 0;

    if (result)
    {
        result = (*(int32_t*)(uintptr_t)(srcS + 0x6f));

        if (result)
        {
    label_523c91: ;
            (*(int32_t*)(uintptr_t)(srcS + 0xbc)) = Light_ApplyLightmap_2((*(int32_t*)(uintptr_t)(srcS + 0xa4)));
            int32_t* valA38 = (*(int32_t*)(uintptr_t)(srcS + 0xc8));

            if (valA38)
            {
                Light_SetLightColor_2(valA38);
                (*(int32_t*)(uintptr_t)(srcS + 0xc8)) = 0;
            }

            void* v_2c_8 = srcS;
            (*(int32_t*)(uintptr_t)(srcS + 0xc8)) = 0;
            (*(int32_t*)(uintptr_t)(srcS + 0xb0)) = 0;
            result = Light_UpdateGlobalLight_2((*(int32_t*)(uintptr_t)(srcS + 0xbc)));
            (*(int32_t*)(uintptr_t)(srcS + 0xbc)) = 0;
        }
        else
        {
            result = (*(int32_t*)(uintptr_t)(srcS + 0x70));

            if (result)
                goto label_523c91;
        }

        result = (*(int32_t*)(uintptr_t)(srcS + 0x71));

        if (result)
        {
            int32_t v_2c_10 = (*(int32_t*)(uintptr_t)(srcS + 0xb4));
            void* v_30_4 = srcS;
        }
    }

    return result;
}
