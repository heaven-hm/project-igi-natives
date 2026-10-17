// Original IGI.EXE function: DynObj_RegisterSymbol_3 (VA 0x004C0780; static CFG gate PASS, CFG score 0.905).
#include "DynObj_RegisterSymbol_3.h"
int32_t DynObj_RegisterSymbol_3(int32_t context, int32_t param_2, int32_t param_3, void* param_4, int32_t* param_5)

{
    int32_t item_4 = param_3;
    int32_t* flagP = param_5;
    int32_t dest_val = 0;
    int32_t* context_val = flagP[2];

    if (*context_val)
    {
        void* dest_1 = &context_val[2];
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_1;
            dest_1 += 1;
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t entity_val = ~i;
        int32_t source_2;
        int32_t dest_4;
        dest_4 = memcpy(param_4 + 8, dest_1 - entity_val, entity_val & 0xfffffffc);
        memcpy(dest_4, source_2, entity_val & 3);
        *(param_4 + 0x2c4) = context_val[0xb1];
        Camera_ApplyHandiCam_33(context_val);
        Sys_ExecuteBytecode_2(context_val);
        return 1;
    }

    int32_t i_1;

    do
    {
        int32_t* data_2 = flagP[1];

        if (**data_2)
        {
            param_5 = nullptr;
            int32_t* j_1 = **flagP;
            int32_t* j = *j_1;

            if (j)
            {
                do
                {
                    if (Sys_AllocateMemory(&item_4, nullptr, *flagP[1], &j_1[0x42], &j_1[0xa42], 0))
                    {
                        int32_t data_7 = item_4;

                        if (data_7 >= dest_val)
                        {
                            dest_val = data_7;
                            param_5 = j_1;

                            if (j_1[0x1242])
                                break;
                        }
                    }

                    j_1 = j;
                    j = *j;
                } while (j);

                if (param_5)
                {
                    int32_t data_10 = dest_val;

                    if (dest_val >= 0x2bc)
                        data_10 = 0x2bc;

                    Camera_ApplyLineFilter_5(param_4 + 8, *flagP[1], data_10);
                    int32_t data_12 = dest_val;

                    if (dest_val >= 0x2bc)
                        data_12 = 0x2bc;

                    *(data_12 + param_4 + 8) = 0;
                    int32_t* data_13 = flagP[1];
                    *data_13 += dest_val;
                    *(param_4 + 0x2c4) = param_5[0x1243];
                    return 1;
                }
            }

            break;
        }

        i_1 = Sys_CheckHeap_30(data_2);
    } while (i_1);
    return 0;
}
