#include "Mesh_SkinBones.h"
int32_t* Mesh_SkinBones(int32_t* a1)

{
    int32_t* result = a1;
    float flagP = *result;
    float v_1bc = flagP;
    int32_t srcS = *(flagP + 0x74);
    int32_t v_1cc = srcS;

    if (srcS)
    {
        uint32_t v_1d0;
        result = Render_DrawLightmapMesh(flagP, &v_1d0);

        if (!result)
        {
            int32_t ctxB1 = DynObj_ParseConfigFile_16(flagP);
            result = *(flagP + 0xd4);

            if (!result)
            {
                ctxB1 = 0;
            label_49f760:
                void v_a8;

                if (!result)
                {
                    memcpy(&v_a8, &g_bcaae0, 0xa8);
                    void v_190;
                    memcpy(&v_190, &v_a8, 0xa8);
                    float v_150 = (&g_b81700)[*(flagP + 0xd4)];
                    float v_14c_1 =
                        g_bcabc4 * (&g_b81700)[*(flagP + 0xd4)] / (Display_ClearSurfaces_4() * g_bcabc0);
                    int32_t v_130_1 = 0;
                    int32_t* v_1e8_2 = &v_190;
                    float v_144_1 = Display_ClearSurfaces_4() * g_bcabc8 / v_150;
                    Transcontext_SetActiveTransContext(v_1e8_2);
                    srcS = v_1cc;
                }

                void* valA2 = *(srcS + (ctxB1 << 2));
                void* srcS1 = *(*(valA2 + 0xc) + 0xc);
                float v_1c8;
                int32_t* v_1e8_3 = &v_1c8;
                v_1c8 = *(flagP + 0x20) - g_bcab08;
                float v_1c4_1 = *(flagP + 0x28) - g_bcab10;
                long double x87_r7_16 = *(flagP + 0x30) - g_bcab18;
                float v_1b8;
                int32_t* v_1ec_1 = &v_1b8;
                void v_e8;
                int32_t* v_1f0_1 = &v_e8;
                int32_t v_194_1 = 0;
                v_1c8 = g_bcabec * v_1c8;
                float v_1c4_2 = g_bcabec * v_1c4_1;
                float v_1c0_1 = g_bcabec * x87_r7_16;
                long double x87_r7_18 = g_bcabec;
                v_1b8 = x87_r7_18;
                long double x87_r6_7 = 0f;
                float v_1b4_1 = x87_r6_7;
                float v_1b0_1 = x87_r6_7;
                float v_1ac_1 = x87_r6_7;
                float v_1a8_1 = x87_r7_18;
                float v_1a4_1 = x87_r6_7;
                float v_1a0_1 = x87_r6_7;
                float v_19c_1 = x87_r6_7;
                float v_198_1 = x87_r7_18;
                Display_SetGammaRamp_7(v_1f0_1, v_1ec_1, v_1e8_3);
                int32_t* valA3 = g_5ca114;
                (*(*valA3 + 0x2c))(valA3, 1, &v_e8);
                Display_CreateSurface_18(flagP + 0x20, *(srcS1 + 0x3c));

                if (*(srcS1 + 0x20) == 1)
                {
                    int32_t* dstD2 = *(srcS1 + 0x24);
                    void* srcS2 = dstD2[7];
                    int32_t valA6 = Bone_PaletteSkinner(dstD2, v_1cc, flagP + 0x68, ctxB1);
                    int32_t objC3 = g_7205b0;
                    void* valA7 = g_bcade8;

                    if (*(valA7 + 4) != objC3)
                    {
                        *(valA7 + 4) = objC3;
                        (*(g_bcade8 + (g_7205b0 << 2) + 0x14))(0);
                    }

                    void* valA9 = g_bcad7c;
                    int32_t objC5 = g_7ac09c;

                    if (*(valA9 + 4) != objC5)
                    {
                        *(valA9 + 4) = objC5;
                        (*(g_bcad7c + (g_7ac09c << 2) + 0x14))(0);
                    }

                    void* valA11 = g_bcadac;
                    int32_t objC6 = g_7234b8;

                    if (*(valA11 + 4) != objC6)
                    {
                        *(valA11 + 4) = objC6;
                        (*(g_bcadac + (g_7234b8 << 2) + 0x14))(0);
                    }

                    uint32_t valA15 = v_1d0;
                    int32_t objC8 = g_bcade0;

                    if (!valA15)
                        objC8 = g_bcacec;

                    void* tmpD6 = g_bcadc4;

                    if (*(tmpD6 + 4) != objC8)
                    {
                        int32_t valA12 = g_bcade0;

                        if (!valA15)
                            valA12 = g_bcacec;

                        *(tmpD6 + 4) = valA12;
                        int32_t valA14 = g_bcade0;

                        if (!v_1d0)
                            valA14 = g_bcacec;

                        (*(g_bcadc4 + (valA14 << 2) + 0x14))(0);
                    }

                    while (true)
                    {
                        int16_t valA16 = *(srcS2 + 0x10);

                        if (valA16 == 0xffff)
                        {
                            int32_t* valA22 = g_5ca114;
                            (*(*valA22 + 0x94))(valA22, 0, 1, 3);
                            int32_t* valA23 = g_5ca114;
                            (*(*valA23 + 0x8c))(valA23, 0, 0);
                            int32_t tmpD16 = 0;
                            tmpD16 = *(srcS2 + 0xc);
                            int32_t* valA24 = g_5ca114;
                            int32_t tmpD18 = 0;
                            tmpD18 = *(srcS2 + 0x14);
                            int32_t tmpD19 = 0;
                            tmpD19 = *(srcS2 + 0x12);
                            (*(*valA24 + 0x80))(valA24, *dstD2, g_bcad90, tmpD19 + valA6,
                                tmpD18, srcS2 + 0x1c, tmpD16, 0);
                            int32_t* valA25 = g_5ca114;
                            (*(*valA25 + 0x94))(valA25, 0, 1, 4);
                        }
                        else
                        {
                            int32_t* objC10 = g_5ca114;
                            (*(*objC10 + 0x8c))(objC10, 0,
                                *(*(*(valA2 + 0x10) + (valA16 << 2)) + 0x20));
                            int32_t tmpD8 = 0;
                            tmpD8 = *(srcS2 + 0xc);
                            int32_t* valA20 = g_5ca114;
                            int32_t tmpD10 = 0;
                            tmpD10 = *(srcS2 + 0x14);
                            int32_t tmpD11 = 0;
                            tmpD11 = *(srcS2 + 0x12);
                            (*(*valA20 + 0x80))(valA20, *dstD2, g_bcad90, tmpD11 + valA6,
                                tmpD10, srcS2 + 0x1c, tmpD8, 0);
                            flagP = v_1bc;
                        }

                        int16_t valA26 = *(srcS2 + 0xe);

                        if (valA26 == 0xffff)
                            break;

                        srcS2 = srcS2 + valA26 + 0x1c;
                    }
                }

                result = *(flagP + 0xd4);

                if (!result)
                    return Transcontext_SetActiveTransContext(&v_a8);
            }
            else if (ctxB1 != 0xffffffff)
                goto label_49f760;
        }
    }

    return result;
}
