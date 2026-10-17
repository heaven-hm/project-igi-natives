// Original IGI.EXE function: FX_FindfreepositionStac (VA 0x0048B050; static CFG gate PASS, CFG score 0.967).
#include "FX_FindfreepositionStac.h"
❓  void* __stdcall FX_FindfreepositionStac(void** context , int32_t* param_2, char param_3, void* param_4)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x142c);
    int32_t* dest_val = context;
    int32_t arg_42c;
    int32_t* context_val = &arg_42c;
    return_addr = nullptr;
    *dest_val = 0;
    int32_t* arg_10 = &arg_42c;

    if (*(param_2[0xedb] + 0x5c) >= 0x400)
        return Warning_Show("FindFreePosition stack not large enough");

    int32_t* data_2 = AI_SelectTarget_4(param_2);

    if (!data_2)
        return Warning_Show("No nodes near target");

    void arg_14;
    AI_UpdatePatrol_3(&arg_14, param_2);
    char item_1c = 1;
    g_5c8bb4 = *data_2;
    g_5c8bac = param_2[0xf8b];
    void* data_5 = FX_SmokeEmit_18(param_2, data_2, param_3, item_1c);

    if (data_5)
    {
        *dest_val = data_2;
        return data_5;
    }

    int32_t source_1 = *data_2;
    void* data_6 = nullptr;
    char arg_2c[0x400];
    memset(&arg_2c, 0, 0x400);
    arg_42c = source_1;
    int32_t arg_4 = 1;
    int32_t arg_430 = 0xffffffff;
    arg_2c[source_1] = 1;

    if (source_1 != 0xffffffff)
    {
    label_48b151:
        data_6 = param_4;

        if (return_addr < data_6)
        {
            int32_t* data_9 = Script_ExecuteLevelScript_23(param_2[0xedb], *context_val) + 0x13c;
            int32_t arg_c = 0;
            int32_t saved_target;
            int32_t* dest_1 = &(&saved_target)[arg_4 + 0x10f];
            int32_t* arg_8 = data_9;

            while (true)
            {
                if (return_addr < param_4)
                {
                    void* data_10 = *data_9;

                    if (data_10)
                    {
                        int32_t source_2 = *(data_10 + 8);

                        if (*context_val == source_2)
                            source_2 = *(data_10 + 0xc);

                        if (!arg_2c[source_2])
                        {
                            int32_t* data_12 = Script_ExecuteLevelScript_23(param_2[0xedb], source_2);
                            data_6 = FX_SmokeEmit_18(param_2, data_12, param_3, 1);

                            if (data_6)
                            {
                                *context = data_12;
                                break;
                            }

                            context_val = arg_10;
                            *dest_1 = source_2;
                            dest_1 = &dest_1[1];
                            arg_2c[source_2] = 1;
                            arg_4 += 1;
                            *dest_1 = 0xffffffff;
                            return_addr += 1;
                        }
                    }

                    data_9 = &arg_8[1];
                    bool flag_2_1 = arg_c + 1 < 0x40;
                    arg_c += 1;
                    arg_8 = data_9;

                    if (flag_2_1)
                        continue;
                }

                int32_t data_17 = context_val[1];
                context_val = &context_val[1];
                arg_10 = context_val;

                if (data_17 != 0xffffffff)
                    goto label_48b151;

                return data_17;
            }
        }
    }

    return data_6;
}
