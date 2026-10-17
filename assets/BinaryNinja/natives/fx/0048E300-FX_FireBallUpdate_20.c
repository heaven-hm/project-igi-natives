// Original IGI.EXE function: FX_FireBallUpdate_20 (VA 0x0048E300; static CFG gate PASS, CFG score 0.889).
#include "FX_FireBallUpdate_20.h"
❓  int32_t* __stdcall FX_FireBallUpdate_20(void* context , int32_t* param_2, int32_t param_3, int32_t param_4, int32_t param_5)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x1404);
    int32_t* i = param_2;
    int32_t arg_404;
    int32_t* flagP = &arg_404;
    return_addr = nullptr;

    if (i && param_4)
    {
        int32_t temp_1 = *i;
        i = nullptr;
        int32_t context_1 = 1;
        char arg_4[0x400];
        memset(&arg_4, 0, 0x400);
        arg_404 = temp_1;
        int32_t arg_408 = 0xffffffff;
        arg_4[temp_1] = 1;

        if (temp_1 != 0xffffffff)
        {
            do
            {
                void* data_1 = Script_ExecuteLevelScript_23(*(context + 0x3b6c), *flagP);
                int32_t data_2 = param_4(context, data_1, param_5);

                if (data_2)
                {
                    data_2 = 1;
                    return data_2;
                }

                int32_t dest_2 = 0;
                int32_t saved_target;
                int32_t* data_3 = &(&saved_target)[context_1 + 0x105];
                int32_t* source_2 = data_1 + 0x13c;

                while (return_addr < param_3)
                {
                    void* temp_4 = *source_2;

                    if (temp_4)
                    {
                        int32_t entity_4 = *(temp_4 + 8);

                        if (*flagP == entity_4)
                            entity_4 = *(temp_4 + 0xc);

                        if (!arg_4[entity_4])
                        {
                            arg_4[entity_4] = 1;
                            *data_3 = entity_4;
                            context_1 += 1;
                            data_3 = &data_3[1];
                            return_addr += 1;
                            *data_3 = 0xffffffff;
                        }
                    }

                    dest_2 += 1;
                    source_2 = &source_2[1];

                    if (dest_2 >= 0x40)
                        break;
                }

                i = flagP[1];
                flagP = &flagP[1];
            } while (i != 0xffffffff);
        }
    }

    i = 0;
    return i;
}
