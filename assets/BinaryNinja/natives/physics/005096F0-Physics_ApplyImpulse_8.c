// Original IGI.EXE function: Physics_ApplyImpulse_8 (VA 0x005096F0; static CFG gate PASS, CFG score 0.852).
#include "Physics_ApplyImpulse_8.h"
int32_t Physics_ApplyImpulse_8(int32_t* context, void* param_2, double* param_3)

{
    int32_t dest_val = 0;
    int32_t item_34 = 0x41838800;
    *context = 0;
    void* data_1 = param_2;
    bool flag_0 = *(data_1 + 0x58) <= 0;
    int32_t item_30 = 0;
    int32_t item_2c = 0x41838800;
    int32_t item_28 = 0;
    int32_t item_24 = 0x41838800;
    int32_t item_48_1;
    memset(&item_48_1, 0, 0x14);

    if (!flag_0)
    {
        void* item_44;
        int32_t item_38;
        double item_20[0x3];

        while (true)
        {
            void* data_2 = Script_ExecuteLevelScript_23(data_1, dest_val);

            if (data_2)
            {
                int32_t data_3 = Physics_SolveConstraints_8();

                if (!(*(data_2 + 0x30) & data_3))
                {
                    Script_CallNativeHandler_23(&item_20, data_2);
                    int32_t temp_2 = 0;
                    int32_t* source_1 = &item_38;
                    int32_t* entity_1 = &item_44;
                    long double fpu_val_7_2 = Sys_DispatchOpcode_11(&item_20, param_3) - *(data_2 + 0x24) * 4096.0f;

                    while (true)
                    {
                        if (*entity_1)
                        {
                            long double f1_1 = *source_1;
                            fpu_val_7_2 - f1_1;

                            if (*(&((fpu_val_7_2 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                            {
                                int32_t saved_target;
                                memcpy(&(&saved_target)[temp_2 + 6],
                                    &(&saved_target)[temp_2 + 5], (2 - temp_2) << 2);
                                int32_t entity_3 = (2 - temp_2) << 3;
                                int32_t source_5;
                                int32_t dest_3;
                                dest_3 = memcpy(&(&saved_target)[temp_2 * 2 + 0xa],
                                    &(&saved_target)[temp_2 * 2 + 8], entity_3 & 0xfffffffc);
                                memcpy(dest_3, source_5, entity_3 & 3);
                                dest_val = item_48_1;
                            }
                            else
                            {
                                temp_2 += 1;
                                entity_1 = &entity_1[1];
                                source_1 = &source_1[2];

                                if (temp_2 >= 3)
                                    break;

                                continue;
                            }
                        }

                        if (temp_2 >= 3)
                            break;

                        *(&item_38 + (temp_2 << 3)) = fpu_val_7_2;
                        (&item_44)[temp_2] = data_2;
                        break;
                    }
                }
            }

            data_1 = param_2;
            dest_val += 1;
            item_48_1 = dest_val;

            if (dest_val >= *(data_1 + 0x58))
                break;
        }

        void* source_2 = item_44;

        if (source_2)
        {
            Script_CallNativeHandler_23(&item_20, source_2);
            long double fpu_val_7_4 = item_38;
            long double f0 = 0.0;
            fpu_val_7_4 - f0;

            if (!(*(&((fpu_val_7_4 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f0) ? 1 : 0) << 0xa
                | (fpu_val_7_4 == f0 ? 1 : 0) << 0xe) + 1) & 1))
            {
                *context = source_2;
                return 1;
            }

            *context = source_2;
            return 2;
        }
    }

    return 0;
}
