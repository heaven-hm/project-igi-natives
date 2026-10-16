#include "Sys_CloseFileStream_31.h"
int32_t Sys_CloseFileStream_31(int32_t* a1, int32_t* a2)

{
    int32_t* flagP = a2;
    int32_t* ctxB = *flagP;

    if (*ctxB)
    {
        flagP[3] = ctxB[2];
        flagP[4] = ctxB[3];
        flagP[8] = ctxB[8];
        flagP[6] = ctxB[6];
        flagP[7] = ctxB[7];
        int32_t dstD = ctxB[4];
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD;
            dstD += 1;
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC3 = ~i;
        int32_t srcS1;
        int32_t dstD3;
        dstD3 = memcpy(flagP[5], dstD - objC3, objC3 & 0xfffffffc);
        memcpy(dstD3, srcS1, objC3 & 3);
        Camera_ApplyHandiCam_33(ctxB);
        Sys_ExecuteBytecode_2(ctxB);
        return 1;
    }

    a2 = 1;
    void* const srcS2 = nullptr;
    int32_t* dstD4 = *a1;

    while (true)
    {
        char* objC7 = *dstD4;
        char valA4 = *objC7;

        if (valA4 != 0x20 && valA4 != 9 && valA4 != 0xa && valA4 != 0xd)
        {
            while (!**dstD4)
            {
                if (!Sys_CheckHeap_30(dstD4))
                    return 0;

                while (true)
                {
                    char* objC10 = *dstD4;
                    char valA6 = *objC10;

                    if (valA6 != 0x20 && valA6 != 9 && valA6 != 0xa && valA6 != 0xd)
                        break;

                    *dstD4 = &objC10[1];
                }
            }

            char* valA7 = flagP[5];
            flagP[3] = 8;
            flagP[4] = 0;
            *valA7 = 0;
            char* valA8 = *dstD4;
            int32_t objC13 = *valA8 - 0x21;

            if (objC13 > 0x5d)
            {
            label_4c0065:

                if (Terrain_SelectTerrainLOD_5(valA8, dstD4, flagP[5], flagP[9]))
                {
                    flagP[3] = 5;
                    a2 = nullptr;
                }
            }
            else
            {
                int32_t tmpD4 = 0;
                tmpD4 = lookup_table_4c0108[objC13];
                char* i_4;

                switch (tmpD4)
                {
                    case 0:
                    {
                        flagP[3] = 1;

                        if (*(*dstD4 + 1) != 0x3d)
                        {
                            i_4 = 2;
                            flagP[4] = 0x14;
                            flagP[3] = 2;
                        }
                        else
                        {
                            i_4 = 2;
                            flagP[3] = 1;
                            flagP[4] = 0xf;
                            a2 = 2;
                        }

                        goto label_4bfecc;
                    }
                    case 1:
                    {
                        if (Terrain_SelectTerrainLOD_5(valA8, dstD4, flagP[5], flagP[9]))
                        {
                            flagP[3] = 4;
                            a2 = nullptr;
                        }
                        break;
                    }
                    case 2:
                    {
                        flagP[3] = 1;
                        flagP[4] = 0xa;
                        i_4 = 1;

                        if (*(*dstD4 + 1) == 0x26)
                        {
                            i_4 = 2;
                            flagP[4] = 0x1c;
                            a2 = 2;
                        }

                        goto label_4bfecc;
                    }
                    case 3:
                    {
                        flagP[3] = 1;
                        flagP[4] = 0x15;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 4:
                    {
                        flagP[3] = 0;
                        flagP[4] = 0x16;
                        i_4 = 1;
                    label_4bfecc:

                        if (i_4 < flagP[9])
                            i_4[flagP[5]] = 0;

                        if (i_4)
                        {
                            char* i_1;

                            do
                            {
                                if (i_4 < flagP[9])
                                    i_4[flagP[5] - 1] = i_4[*dstD4 - 1];

                                i_1 = i_4;
                                i_4 -= 1;
                            } while (i_1 != 1);
                        }
                        break;
                    }
                    case 5:
                    {
                        flagP[3] = 1;
                        flagP[4] = 5;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 6:
                    {
                        flagP[3] = 1;
                        flagP[4] = 1;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 7:
                    {
                        flagP[3] = 1;
                        flagP[4] = 0x18;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 8:
                    {
                        flagP[3] = 1;
                        flagP[4] = 2;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 9:
                    {
                        flagP[3] = 1;
                        flagP[4] = 6;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 0xa:
                    {
                        flagP[3] = 3;
                        flagP[4] = 0x1e;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 0xb:
                    {
                        flagP[3] = 0;
                        flagP[4] = 0x17;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 0xc:
                    {
                        char valA11 = valA8[1];

                        if (valA11 == 0x3c)
                        {
                            flagP[3] = 1;
                            flagP[4] = 0xb;
                        label_4bfeba:
                            a2 = 2;
                            srcS2 = 1;
                            goto label_4bfec4;
                        }

                        flagP[3] = 1;

                        if (valA11 != 0x3d)
                        {
                            flagP[4] = 0x10;
                            goto label_4bfec4;
                        }

                        flagP[4] = 0x12;
                        goto label_4bfeba;
                    }
                    case 0xd:
                    {
                        char objC20 = valA8[1];
                        flagP[3] = 1;

                        if (objC20 == 0x3d)
                        {
                            flagP[4] = 0xe;
                            goto label_4bfeba;
                        }

                        flagP[4] = 0x19;
                    label_4bfec4:
                        i_4 = srcS2 + 1;

                        if (i_4)
                            goto label_4bfecc;
                        break;
                    }
                    case 0xe:
                    {
                        char valA21 = valA8[1];

                        if (valA21 == 0x3e)
                        {
                            flagP[3] = 1;
                            flagP[4] = 0xc;
                            goto label_4bfeba;
                        }

                        flagP[3] = 1;

                        if (valA21 == 0x3d)
                        {
                            flagP[4] = 0x13;
                            goto label_4bfeba;
                        }

                        char* objC19 = flagP[5];
                        flagP[4] = 0x11;
                        *objC19 = **dstD4;
                        goto label_4bfec4;
                    }
                    case 0xf:
                    {
                        flagP[3] = 3;
                        flagP[4] = 0x1d;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 0x10:
                    {
                        flagP[3] = 1;
                        flagP[4] = 9;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 0x11:
                    {
                        flagP[4] = 0x1f;
                        flagP[3] = 0;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 0x12:
                    {
                        flagP[3] = 1;
                        flagP[4] = 8;
                        i_4 = 1;

                        if (*(*dstD4 + 1) == 0x7c)
                        {
                            i_4 = 2;
                            flagP[4] = 0x1b;
                            a2 = 2;
                        }

                        goto label_4bfecc;
                    }
                    case 0x13:
                    {
                        flagP[4] = 0x20;
                        flagP[3] = 0;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 0x14:
                    {
                        flagP[3] = 2;
                        flagP[4] = 0xd;
                        i_4 = 1;
                        goto label_4bfecc;
                    }
                    case 0x15:
                    {
                        goto label_4c0065;
                    }
                }
            }

            if (a2)
            {
                void* i_3 = a2;
                void* i_2;

                do
                {
                    char* valA14 = *dstD4;

                    if (*valA14)
                        *dstD4 = &valA14[1];

                    i_2 = i_3;
                    i_3 -= 1;
                } while (i_2 != 1);
            }

            if (flagP[3] == 5 && DynObj_FindSymbol(flagP))
            {
                if (DynObj_InsertHashItem(flagP))
                {
                    int32_t valA19 = Terrain_UpdateWaterWaves_5(flagP[5]);
                    flagP[3] = 7;
                    int32_t objC18 = flagP[3];
                    flagP[8] = valA19;
                    int32_t valA20 = 0;
                    valA20 = objC18 != 8;
                    return valA20;
                }

                *(flagP + 0x18) = Terrain_RenderWaterSurface_5(flagP[5]);
                flagP[3] = 6;
            }

            int32_t valA25 = 0;
            valA25 = flagP[3] != 8;
            return valA25;
        }

        *dstD4 = &objC7[1];
    }
}
