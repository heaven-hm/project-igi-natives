// Original IGI.EXE function: Physics_InterpolateWaypoint_12 (VA 0x0050AD90; static CFG gate PASS, CFG score 0.991).
#include "Physics_InterpolateWaypoint_12.h"
int32_t Physics_InterpolateWaypoint_12(int32_t* a1)

{
    int32_t v_590 = g_a7ceb0;

    if (a1[0xa])
    {
        int32_t valA2 = a1[6];
        int32_t valA3;

        if ((~(valA2 - 1) & valA2) == valA2)
            valA3 = a1[7];

        if ((~(valA2 - 1) & valA2) != valA2 || (~(valA3 - 1) & valA3) != valA3)
        {
            Error_Show("
                Trying to download mipmap texture that is not power of 2 in width or height");

            while (true)
                /* nop */
        }
    }

    int32_t* valA4 = g_5ca114;
    (*(*valA4 + 0x8c))(valA4, 0, 0);
    int32_t* valA5 = g_5ca114;
    (*(*valA5 + 0x8c))(valA5, 1, 0);
    int32_t* valA9 = Mem_Alloc((a1[7] * a1[6]) << 3, 4);
    int32_t objC5 = a1[6];
    int32_t dstD = a1[3];
    int32_t* srcS = a1[7];
    int32_t ctxB = a1[0xb];
    int32_t* v_578 = valA9;
    int32_t* v_594 = valA9;
    int32_t v_598 = objC5;
    int32_t ctxB1;

    while (true)
    {
        int32_t objC7 = a1[8] - 1;

        if (objC7 <= 0x42)
        {
            int32_t tmpD5 = 0;
            tmpD5 = lookup_table_50b47c[objC7];

            switch (tmpD5)
            {
                case 0:
                {
                    Terrain_RenderWaterSurface_7(valA9, v_598, srcS, 0, ctxB, *(a1[1] + 8), dstD, srcS, nullptr);
                    ctxB += srcS * dstD;
                label_50aed0:
                    int32_t valA13 = v_598 >> 1;
                    int32_t* objC18 = &v_594[srcS * v_598];
                    v_598 = valA13;
                    v_594 = objC18;
                    srcS s>>= 1;
                    dstD s>>= 1;

                    if (a1[8] & 0x40 && valA13 > 0 && srcS > 0)
                    {
                        valA9 = v_594;
                        continue;
                    }

                    ctxB1 = 0;
                    *(*a1 + 0x18) = Physics_EvaluateAreaCriteria_11(v_578, a1[6], a1[7]);
                    break;
                    break;
                }
                case 1:
                {
                    Terrain_RenderQuadtree_7(valA9, v_598, srcS, ctxB, dstD >> 1, srcS, nullptr);
                    goto label_50aec1;
                }
                case 2:
                {
                    Terrain_UpdateWaterWaves_7(valA9, v_598, srcS, ctxB, dstD >> 2, srcS, nullptr);
                    goto label_50aec1;
                }
                case 3:
                {
                    Terrain_SelectTerrainLOD_7(valA9, v_598, srcS, ctxB, dstD >> 1, srcS, nullptr);
                label_50aec1:
                    ctxB += srcS * dstD;
                    goto label_50aed0;
                }
            }
        }

        Error_Show("Unsupported texture format");

        while (true)
            /* nop */
    }

    if (*(*a1 + 0x20))
    {
        g_a7ceb4 -= 1;
        int32_t valA18 = Physics_CouldnTGetSurfaceDes(*(*a1 + 0x20));
        int32_t objC23 = g_a7ceb8 - valA18;
        int32_t valA19 = g_a7ceb4;
        g_a7ceb8 = objC23;
        g_5ca124 = valA19;
        g_5ca128 = objC23;
        int32_t* valA20 = *(*a1 + 0x20);
        (*(*valA20 + 8))(valA20);
        *(*a1 + 0x20) = 0;
    }

    int32_t v_574;
    __builtin_memset(&v_574, 0, 0x7c);
    bool cond_0 = !(g_bcac00 & 0x80000);
    v_574 = 0x7c;
    int32_t v_570 = 0x1007;
    int32_t v_50c = 0x1000;
    int32_t v_508 = 8;

    if (!cond_0)
        int32_t v_508_1 = 0x18;

    int32_t objC25 = a1[0xa];
    int32_t v_588;
    int32_t v_56c;
    int32_t v_568;
    void* objC27;

    if (objC25 || !(*(&g_bcac5c + 1) & 1))
    {
        int32_t valA24 = a1[6];
        int32_t tmpD19 = a1[7];
        v_588 = valA24;
        int32_t v_584_1 = tmpD19;

        if (objC25)
        {
            char objC28 = v_590;
            int32_t valA25 = valA24 >> (objC28 & 0x1f);
            int32_t tmpD20 = tmpD19 >> (objC28 & 0x1f);
            v_588 = valA25;
            v_584_1 = tmpD20;

            if (valA25 <= 1)
                v_588 = 1;

            if (tmpD20 <= 1)
                v_584_1 = 1;
        }

        int32_t* v_5ac_11 = &v_588;
        int32_t valA26 = Sys_OpenFileStream_9();
        Sys_DispatchOpcode_3(Display_CheckCapabilities_7(), valA26, v_5ac_11);
        int32_t v_580;
        v_568 = v_580;
        int32_t v_57c;
        v_56c = v_57c;
        *(*a1 + 0x10) = v_588 / v_580;
        objC27 = *a1;
        *(objC27 + 0x14) = v_584_1 / v_57c;
    }
    else
    {
        v_568 = a1[6];
        objC27 = *a1;
        v_56c = a1[7];
        *(objC27 + 0x10) = 0x3f800000;
        *(*a1 + 0x14) = 0x3f800000;
    }

    if (g_a7ceac != 0xffffffff)
    {
        v_570 |= 0x100000;
        int32_t v_4fc_1 = Sys_DispatchOpcode_8(objC27);
    }

    int32_t v_55c;

    if (a1[0xa])
    {
        int32_t v_50c_1 = v_50c | &__dos_header.e_cparhdr;
        int32_t v_570_1 = v_570 | 0x20000;
        int32_t valA31 = Physics_EvaluateAreaCriteria_12(v_568, v_56c);
        v_55c = valA31;

        if (v_590 >= valA31 - 1)
            v_590 = valA31 - 1;
    }

    int32_t v_5b4_8 = a1[8];
    void v_52c;
    Physics_CalculateSplineLength_12(&v_52c, a1[9], *(*a1 + 0x18));
    int32_t* valA34 = g_5ca10c;
    int32_t valA35 = (*(*valA34 + 0x18))(valA34, &v_574, *a1 + 0x20, 0);
    void v_400;

    if (valA35)
    {
        Game_DataSymbolLoad(&v_400, "Couldn't create texture surface");
        int32_t v_5b8_7 = DDERR_GENERIC(valA35);
        void* v_5bc_5 = &v_400;
        Error_Show("%s\n\nDirectX error message: %s");

        while (true)
            /* nop */

        return;
    }

    void* tmpD28 = *a1;
    int32_t v_47c = 0x7c;
    int32_t* valA37 = *(tmpD28 + 0x20);
    int32_t valA38 = (*(*valA37 + 0x58))(valA37, &v_47c);

    if (!valA38)
    {
        int32_t valA40 = a1[0xa];
        int32_t* srcS3 = a1[6];
        int32_t* i = a1[7];

        if (!valA40)
            Physics_CouldnTGetSurfacedes(*(*a1 + 0x20), v_568, v_56c, v_578, srcS3, i);
        else
        {
            int32_t* v_58c;

            if (a1[8] & 0x40)
            {
                int32_t* valA41 = *(*a1 + 0x20);
                v_588 = 0;
                v_594 = valA41;
                int32_t v_584_2 = 0;
                v_588 = QTask_CreateTask;
                int32_t v_580_1 = 0;
                v_58c = v_578;
                int32_t v_57c_1 = 0;

                if (srcS3)
                {
                    while (i)
                    {
                        if (ctxB1 >= v_55c + v_590)
                            break;

                        if (ctxB1 >= v_590)
                        {
                            Physics_CouldnTGetSurfacedes(v_594, srcS3, i, v_58c, srcS3, i);

                            if (ctxB1 != v_55c + v_590 - 1)
                            {
                                int32_t* valA45 = v_594;
                                int32_t valA46 = (*(*valA45 + 0x30))(valA45, &v_588, &v_594);

                                if (valA46)
                                {
                                    Game_DataSymbolLoad(&v_400, "Couldn't get mipmap");
                                    int32_t v_5b8_10 = DDERR_GENERIC(valA46);
                                    void* v_5bc_8 = &v_400;
                                    Error_Show("%s\n\nDirectX error message: %s");

                                    while (true)
                                        /* nop */
                                }
                            }
                        }

                        int32_t valA48 = i * srcS3;
                        srcS3 s>>= 1;
                        i s>>= 1;
                        ctxB1 += 1;
                        v_58c = &v_58c[valA48];

                        if (!srcS3)
                            break;
                    }
                }
            }
            else if (!valA40)
                Physics_CouldnTGetSurfacedes(*(*a1 + 0x20), v_568, v_56c, v_578, srcS3, i);
            else
            {
                int32_t* ctxB2 = v_578;
                int32_t* valA51 = *(*a1 + 0x20);
                v_588 = 0;
                int32_t v_584_3 = 0;
                v_58c = valA51;
                int32_t v_580_2 = 0;
                v_588 = QTask_CreateTask;
                int32_t v_57c_2 = 0;
                int32_t v_4f8 = 0x7c;
                int32_t valA52 = (*(*valA51 + 0x58))(valA51, &v_4f8);

                if (!valA52)
                {
                    v_594 = nullptr;
                    int32_t v_4e0;

                    if (v_4e0 + v_590 > 0)
                    {
                        bool cond_5_1;

                        do
                        {
                            if (v_594 >= v_590)
                            {
                                Physics_CouldnTGetSurfacedes(v_58c, srcS3, i, ctxB2, srcS3, i);

                                if (v_594 != v_55c + v_590 - 1)
                                {
                                    int32_t* valA59 = v_58c;
                                    int32_t valA60 =
                                        (*(*valA59 + 0x30))(valA59, &v_588, &v_58c);

                                    if (valA60)
                                    {
                                        Game_DataSymbolLoad(&v_400, "Couldn't get mipmap");
                                        int32_t v_5b8_14 = DDERR_GENERIC(valA60);
                                        void* v_5bc_11 = &v_400;
                                        Error_Show("%s\n\nDirectX error message: %s");

                                        while (true)
                                            /* nop */
                                    }
                                }
                            }

                            int32_t valA63 = &ctxB2[i * srcS3];
                            Terrain_BuildMipMaps_6(valA63, ctxB2, srcS3, i);
                            ctxB2 = valA63;
                            srcS3 s>>= 1;
                            i s>>= 1;
                            cond_5_1 = v_594 + 1 < v_4e0 + v_590;
                            v_594 += 1;
                        } while (cond_5_1);
                    }
                }
                else
                {
                    Game_DataSymbolLoad(&v_400, "Couldn't get surface description");
                    int32_t v_5b8_11 = DDERR_GENERIC(valA52);
                    void* v_5bc_9 = &v_400;
                    Error_Show("%s\n\nDirectX error message: %s");

                    while (true)
                        /* nop */
                }
            }
        }

        Sys_ExecuteBytecode_2(v_578);
        g_a7ceb4 += 1;
        int32_t result = Physics_CouldnTGetSurfaceDes(*(*a1 + 0x20));
        int32_t tmpD42 = g_a7ceb4;
        int32_t objC53 = g_a7ceb8 + result;
        g_a7ceb8 = objC53;
        g_5ca124 = tmpD42;
        g_5ca128 = objC53;
        return result;
    }

    Game_DataSymbolLoad(&v_400, "Couldn't get surface description");
    int32_t v_5b8_8 = DDERR_GENERIC(valA38);
    void* v_5bc_6 = &v_400;
    Error_Show("%s\n\nDirectX error message: %s");

    while (true)
        /* nop */
}
