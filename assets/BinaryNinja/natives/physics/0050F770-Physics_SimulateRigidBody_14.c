// Original IGI.EXE function: Physics_SimulateRigidBody_14 (VA 0x0050F770; static CFG gate FAIL, CFG score 0.733).
#include "Physics_SimulateRigidBody_14.h"
int32_t Physics_SimulateRigidBody_14(void* context)

{
    float data_val = g_bcadc0;
    int32_t result = g_b16c9c;
    int32_t* item_74c = &g_b12c60;

    if (result > 0)
    {
        int32_t result_1 = result;
        bool flag_1_1;

        do
        {
            void* temp_1 = *item_74c;
            double item_724;
            memcpy(&item_724, temp_1, 0x18);
            uint32_t i_3 = *(temp_1 + 0x18);
            float* temp_4 = temp_1 + 0x20;

            if (*(temp_1 + 0x1c) == 0x10)
            {
                item_724 = item_724 - g_bcab08;
                double item_71c = item_71c - g_bcab10;
                double item_714 = item_714 - g_bcab18;
                long double fpu_val_7_11 = g_bcab00 * item_714 + g_bcaafc * item_71c
                    + g_bcaaf8 * item_724 - 28377.919921875;
                long double fpu_val_6_5 = *(context + 8);
                fpu_val_6_5 - fpu_val_7_11;

                if (!(*(&((fpu_val_6_5 < fpu_val_7_11 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_5, fpu_val_7_11) ? 1 : 0) << 0xa
                    | (fpu_val_6_5 == fpu_val_7_11 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    if (i_3 > 0)
                    {
                        long double fpu_val_7_12 = g_bcab08;
                        long double fpu_val_6_6 = g_bcab10;
                        long double fpu_val_5_1 = g_bcab18;
                        void item_6e8;
                        int32_t* entity_2 = &item_6e8;
                        uint32_t i;

                        do
                        {
                            long double fpu_val_4_2 = *temp_4 - fpu_val_7_12;
                            long double fpu_val_3_1 = temp_4[1];
                            float data_6 = temp_4[2];
                            temp_4 = &temp_4[4];
                            long double fpu_val_3_2 = fpu_val_3_1 - fpu_val_6_6;
                            long double fpu_val_2_2 = data_6 - fpu_val_5_1;
                            float item_748_1 = g_bcaae8 * fpu_val_2_2 + g_bcaae4 * fpu_val_3_2
                                + g_bcaae0 * fpu_val_4_2;
                            float item_744_1 = g_bcaaf4 * fpu_val_2_2 + g_bcaaf0 * fpu_val_3_2
                                + g_bcaaec * fpu_val_4_2;
                            float item_740_1 = g_bcab00 * fpu_val_2_2 + g_bcaafc * fpu_val_3_2
                                + g_bcaaf8 * fpu_val_4_2;
                            long double fpu_val_4_4 = item_740_1;
                            long double f1_1 = data_val;
                            fpu_val_4_4 - f1_1;
                            float item_73c;
                            float item_738;
                            float item_734;
                            int32_t data_12;

                            if (*(&((fpu_val_4_4 < f1_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_4_4, f1_1) ? 1 : 0) << 0xa
                                    | (fpu_val_4_4 == f1_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                                data_12 = 0x10;
                            else
                            {
                                long double fpu_val_4_6 = 1.0f / item_740_1;
                                item_734 = fpu_val_4_6;
                                long double fpu_val_4_9 =
                                    fpu_val_4_6 * item_748_1 * g_bcab28 + g_bcab30;
                                item_73c = fpu_val_4_9;
                                long double fpu_val_3_7 =
                                    g_bcab2c * item_734 * item_744_1 + g_bcab34;
                                item_738 = fpu_val_3_7;
                                long double f2_1 = g_bcabd0;
                                fpu_val_4_9 - f2_1;
                                int32_t flagP1;

                                flagP1 = !(*(&((fpu_val_4_9 < f2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_4_9, f2_1) ? 1 : 0) << 0xa
                                    | (fpu_val_4_9 == f2_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 1) ? 0 : 1;

                                long double f4_1 = g_bcabd4;
                                fpu_val_3_7 - f4_1;
                                int32_t context_1;

                                context_1 = !(*(&((fpu_val_3_7 < f4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_3_7, f4_1) ? 1 : 0) << 0xa
                                    | (fpu_val_3_7 == f4_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1) ? 0 : 1;

                                long double f5_1 = g_bcabd8;
                                fpu_val_4_9 - f5_1;
                                int32_t dest_1;

                                dest_1 = *(&((fpu_val_4_9 < f5_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_4_9, f5_1) ? 1 : 0) << 0xa
                                    | (fpu_val_4_9 == f5_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41 ? 0
                                    : 1;

                                long double fpu_val_4_10 = item_738;
                                long double f7_1 = g_bcabdc;
                                fpu_val_4_10 - f7_1;

                                data_12 = *(&((fpu_val_4_10 < f7_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_4_10, f7_1) ? 1 : 0) << 0xa
                                    | (fpu_val_4_10 == f7_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41
                                    ? (dest_1 << 1 | context_1) << 1 | flagP1
                                    : ((2 | dest_1) << 1 | context_1) << 1 | flagP1;
                            }

                            *entity_2 = data_12;
                            entity_2[-6] = item_748_1;
                            entity_2[-5] = item_744_1;
                            entity_2[-4] = item_740_1;
                            int32_t* dest_3 = &entity_2[-3];
                            entity_2 = &entity_2[7];
                            i = i_3;
                            i_3 -= 1;
                            *dest_3 = item_73c;
                            dest_3[1] = item_738;
                            dest_3[2] = item_734;
                        } while (i != 1);
                    }

                    int32_t* flagP2 = temp_4[1];
                    int32_t i_4 = temp_4[3];

                    if (i_4 > 0)
                    {
                        int32_t i_2 = i_4;
                        int32_t i_1;

                        do
                        {
                            int24_t entity_3 = *flagP2;
                            int32_t temp_8 = 0;
                            temp_8 = *(&entity_3 + 1);
                            float item_760_1 = data_val;
                            int32_t entity_4 = 0;
                            entity_4 = *(&entity_3 + 2);
                            void* item_764_1 = context + 8;
                            void item_79c;
                            void item_780;
                            memcpy(&item_780, &item_79c + entity_4 * 0x1c + 0x9c, 0x1c);
                            void item_7b8;
                            memcpy(&item_79c, &item_7b8 + temp_8 * 0x1c + 0xb8, 0x1c);
                            memcpy(&item_7b8, &item_7b8 + entity_3 * 0x1c + 0xb8, 0x1c);
                            Camera_SetFieldOfView();
                            flagP2 = &flagP2[1];
                            i_1 = i_2;
                            i_2 -= 1;
                        } while (i_1 != 1);
                    }
                }
            }

            result = result_1 - 1;
            flag_1_1 = result_1 != 1;
            item_74c = &item_74c[1];
            result_1 = result;
        } while (flag_1_1);
    }

    return result;
}
