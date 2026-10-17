// Original IGI.EXE function: Sys_CloseFileStream_31 (VA 0x004BFC70; static CFG gate PASS, CFG score 0.939).
#include "Sys_CloseFileStream_31.h"
int32_t Sys_CloseFileStream_31(int32_t* context, int32_t* param_2)

{
    int32_t* flagP = param_2;
    int32_t* context_val = *flagP;

    if (*context_val)
    {
        flagP[3] = context_val[2];
        flagP[4] = context_val[3];
        flagP[8] = context_val[8];
        flagP[6] = context_val[6];
        flagP[7] = context_val[7];
        int32_t dest_val = context_val[4];
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_val;
            dest_val += 1;
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t entity_3 = ~i;
        int32_t source_1;
        int32_t dest_3;
        dest_3 = memcpy(flagP[5], dest_val - entity_3, entity_3 & 0xfffffffc);
        memcpy(dest_3, source_1, entity_3 & 3);
        Camera_ApplyHandiCam_33(context_val);
        Sys_ExecuteBytecode_2(context_val);
        return 1;
    }

    param_2 = 1;
    void* const source_2 = nullptr;
    int32_t* dest_4 = *context;

    while (true)
    {
        char* entity_7 = *dest_4;
        char data_4 = *entity_7;

        if (data_4 != 0x20 && data_4 != 9 && data_4 != 0xa && data_4 != 0xd)
        {
            while (!**dest_4)
            {
                if (!Sys_CheckHeap_30(dest_4))
                    return 0;

                while (true)
                {
                    char* entity_10 = *dest_4;
                    char data_6 = *entity_10;

                    if (data_6 != 0x20 && data_6 != 9 && data_6 != 0xa && data_6 != 0xd)
                        break;

                    *dest_4 = &entity_10[1];
                }
            }

            char* data_7 = flagP[5];
            flagP[3] = 8;
            flagP[4] = 0;
            *data_7 = 0;
            char* data_8 = *dest_4;
            int32_t entity_13 = *data_8 - 0x21;

            if (entity_13 > 0x5d)
            {
            label_4c0065:

                if (Terrain_SelectTerrainLOD_5(data_8, dest_4, flagP[5], flagP[9]))
                {
                    flagP[3] = 5;
                    param_2 = nullptr;
                }
            }
            else
            {
                int32_t temp_4 = 0;
                temp_4 = lookup_table_4c0108[entity_13];
                char* i_4;

                switch (temp_4)
                {
                    case 0:
                    {
                        flagP[3] = 1;

                        if (*(*dest_4 + 1) != 0x3d)
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
                            param_2 = 2;
                        }

                        goto label_4bfecc;
                    }
                    case 1:
                    {
                        if (Terrain_SelectTerrainLOD_5(data_8, dest_4, flagP[5], flagP[9]))
                        {
                            flagP[3] = 4;
                            param_2 = nullptr;
                        }
                        break;
                    }
                    case 2:
                    {
                        flagP[3] = 1;
                        flagP[4] = 0xa;
                        i_4 = 1;

                        if (*(*dest_4 + 1) == 0x26)
                        {
                            i_4 = 2;
                            flagP[4] = 0x1c;
                            param_2 = 2;
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
                                    i_4[flagP[5] - 1] = i_4[*dest_4 - 1];

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
                        char data_11 = data_8[1];

                        if (data_11 == 0x3c)
                        {
                            flagP[3] = 1;
                            flagP[4] = 0xb;
                        label_4bfeba:
                            param_2 = 2;
                            source_2 = 1;
                            goto label_4bfec4;
                        }

                        flagP[3] = 1;

                        if (data_11 != 0x3d)
                        {
                            flagP[4] = 0x10;
                            goto label_4bfec4;
                        }

                        flagP[4] = 0x12;
                        goto label_4bfeba;
                    }
                    case 0xd:
                    {
                        char entity_20 = data_8[1];
                        flagP[3] = 1;

                        if (entity_20 == 0x3d)
                        {
                            flagP[4] = 0xe;
                            goto label_4bfeba;
                        }

                        flagP[4] = 0x19;
                    label_4bfec4:
                        i_4 = source_2 + 1;

                        if (i_4)
                            goto label_4bfecc;
                        break;
                    }
                    case 0xe:
                    {
                        char data_21 = data_8[1];

                        if (data_21 == 0x3e)
                        {
                            flagP[3] = 1;
                            flagP[4] = 0xc;
                            goto label_4bfeba;
                        }

                        flagP[3] = 1;

                        if (data_21 == 0x3d)
                        {
                            flagP[4] = 0x13;
                            goto label_4bfeba;
                        }

                        char* entity_19 = flagP[5];
                        flagP[4] = 0x11;
                        *entity_19 = **dest_4;
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

                        if (*(*dest_4 + 1) == 0x7c)
                        {
                            i_4 = 2;
                            flagP[4] = 0x1b;
                            param_2 = 2;
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

            if (param_2)
            {
                void* i_3 = param_2;
                void* i_2;

                do
                {
                    char* data_14 = *dest_4;

                    if (*data_14)
                        *dest_4 = &data_14[1];

                    i_2 = i_3;
                    i_3 -= 1;
                } while (i_2 != 1);
            }

            if (flagP[3] == 5 && DynObj_FindSymbol(flagP))
            {
                if (DynObj_InsertHashItem(flagP))
                {
                    int32_t data_19 = Terrain_UpdateWaterWaves_5(flagP[5]);
                    flagP[3] = 7;
                    int32_t entity_18 = flagP[3];
                    flagP[8] = data_19;
                    int32_t data_20 = 0;
                    data_20 = entity_18 != 8;
                    return data_20;
                }

                *(flagP + 0x18) = Terrain_RenderWaterSurface_5(flagP[5]);
                flagP[3] = 6;
            }

            int32_t data_25 = 0;
            data_25 = flagP[3] != 8;
            return data_25;
        }

        *dest_4 = &entity_7[1];
    }
}
