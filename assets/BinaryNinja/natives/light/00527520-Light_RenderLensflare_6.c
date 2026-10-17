// Original IGI.EXE function: Light_RenderLensflare_6 (VA 0x00527520; static CFG gate PASS, CFG score 0.971).
#include "Light_RenderLensflare_6.h"
int32_t* Light_RenderLensflare_6(void* context)

{
    int32_t entity_val;
    int32_t item_4 = entity_val;
    void* source_val = context;
    DynObj_UpdateDynTree_11(*(source_val + 0x20));
    entity_val = g_a84374;

    if (!QTask_DeleteTask_2(source_val, entity_val))
    {
        void* data_22 = source_val + 0x50;
        int32_t i_8 = 5;
        void* dest_41 = nullptr;
        int32_t i;

        do
        {
            *(data_22 - 4) = 0;
            memset(data_22, 0, 0x18);
            data_22 += 0x40;
            i = i_8;
            i_8 -= 1;
        } while (i != 1);
        memset(source_val + 0x24, 0, 0x24);
        Physics_CalculateSplineLength_15(source_val + 0x4c);
        Physics_SolveConstraints_14(source_val + 0x58, *(source_val + 0x64) * 0.000500000024f);
        void* i_1 = &g_b46d00;
        int32_t* data_23 = source_val + 0x58;

        do
        {
            i_1 += 4;
            *(dest_41 + &g_b818a0) = data_23[-3];
            *(dest_41 + &g_b818a4) = data_23[-2];
            *(dest_41 + &g_b818a8) = data_23[-1];
            int32_t* context_23 = data_23;
            int32_t* temp_42 = dest_41 + 0xb818e0;
            dest_41 += 0xc;
            data_23 = &data_23[0x10];
            *temp_42 = *context_23;
            temp_42[1] = context_23[1];
            temp_42[2] = context_23[2];
            *(i_1 - 4) = data_23[-0xd] * 0.000500000024f;
        } while (i_1 < &g_b46d14);
    }
    else
    {
        long double fpu7 = *(source_val + 0x190);
        long double f0_1 = *(source_val + 0x18c);
        fpu7 - f0_1;

        if (*(&((fpu7 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0_1) ? 1 : 0) << 0xa
            | (fpu7 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            int32_t* data_18 = QTask_DeleteTask_2(source_val, g_a84374);
            int32_t* temp_34 = source_val + 0x58;
            int32_t* entity_22 = &data_18[0x16];
            context = 5;
            bool flag_1_1;

            do
            {
                temp_34[-3] = entity_22[-3];
                temp_34[-2] = entity_22[-2];
                temp_34[-1] = entity_22[-1];
                int32_t* dest_28 = entity_22;
                int32_t* context_17 = temp_34;
                entity_22 = &entity_22[0x11];
                temp_34 = &temp_34[0x10];
                *context_17 = *dest_28;
                context_17[1] = dest_28[1];
                context_17[2] = dest_28[2];
                temp_34[-0xd] = entity_22[-0xe];
                flag_1_1 = context != 1;
                context -= 1;
            } while (flag_1_1);
            *(source_val + 0x24) = data_18[8];
            *(source_val + 0x28) = data_18[9];
            *(source_val + 0x2c) = data_18[0xa];
            *(source_val + 0x30) = data_18[0xb];
            *(source_val + 0x34) = data_18[0xc];
            *(source_val + 0x38) = data_18[0xd];
            *(source_val + 0x3c) = data_18[0xe];
            *(source_val + 0x40) = data_18[0xf];
            *(source_val + 0x44) = data_18[0x10];
            Physics_CalculateSplineLength_15(source_val + 0x4c);
            Physics_SolveConstraints_14(source_val + 0x58, *(source_val + 0x64) * 0.000500000024f);
            void* i_2 = &g_b46d00;
            int32_t* data_21 = source_val + 0x58;
            void* entity_29 = nullptr;

            do
            {
                i_2 += 4;
                *(entity_29 + &g_b818a0) = data_21[-3];
                *(entity_29 + &g_b818a4) = data_21[-2];
                *(entity_29 + &g_b818a8) = data_21[-1];
                int32_t* context_19 = data_21;
                int32_t* dest_40 = entity_29 + 0xb818e0;
                entity_29 += 0xc;
                data_21 = &data_21[0x10];
                *dest_40 = *context_19;
                dest_40[1] = context_19[1];
                dest_40[2] = context_19[2];
                *(i_2 - 4) = data_21[-0xd] * 0.000500000024f;
            } while (i_2 < &g_b46d14);
        }
        else
        {
            int32_t* i_10 = nullptr;
            int32_t* i_9 = nullptr;
            int32_t* i_7 = QTask_DeleteTask_2(source_val, g_a84374);
            int32_t* i_4 = i_7;

            if (!i_4)
            {
            label_5275f7:
                int32_t* entity_2 = source_val + 0x58;
                int32_t* data_3 = &i_9[0x16];
                context = 5;
                bool flag_3_1;

                do
                {
                    entity_2[-3] = data_3[-3];
                    entity_2[-2] = data_3[-2];
                    entity_2[-1] = data_3[-1];
                    *entity_2 = *data_3;
                    entity_2[1] = data_3[1];
                    entity_2[2] = data_3[2];
                    entity_2[4] = data_3[4];
                    entity_2[5] = data_3[5];
                    entity_2[6] = data_3[6];
                    entity_2[7] = data_3[7];
                    entity_2[8] = data_3[8];
                    entity_2[9] = data_3[9];
                    int32_t* temp_9 = &data_3[0xa];
                    int32_t* dest_5 = &entity_2[0xa];
                    data_3 = &data_3[0x11];
                    entity_2 = &entity_2[0x10];
                    *dest_5 = *temp_9;
                    dest_5[1] = temp_9[1];
                    dest_5[2] = temp_9[2];
                    entity_2[-0xd] = data_3[-0xe];
                    flag_3_1 = context != 1;
                    context -= 1;
                } while (flag_3_1);
                *(source_val + 0x24) = i_9[8];
                *(source_val + 0x28) = i_9[9];
                *(source_val + 0x2c) = i_9[0xa];
                *(source_val + 0x30) = i_9[0xb];
                *(source_val + 0x34) = i_9[0xc];
                *(source_val + 0x38) = i_9[0xd];
                *(source_val + 0x3c) = i_9[0xe];
                *(source_val + 0x40) = i_9[0xf];
                *(source_val + 0x44) = i_9[0x10];
                Physics_CalculateSplineLength_15(source_val + 0x4c);
                Physics_SolveConstraints_14(source_val + 0x58, *(source_val + 0x64) * 0.000500000024f);
                void* i_3 = &g_b46d00;
                int32_t* data_7 = source_val + 0x58;
                void* entity_9 = nullptr;

                do
                {
                    i_3 += 4;
                    *(entity_9 + &g_b818a0) = data_7[-3];
                    *(entity_9 + &g_b818a4) = data_7[-2];
                    *(entity_9 + &g_b818a8) = data_7[-1];
                    *(entity_9 + 0xb818e0) = *data_7;
                    *(entity_9 + 0xb818e4) = data_7[1];
                    *(entity_9 + 0xb818e8) = data_7[2];
                    *(i_3 - 4) = data_7[3] * 0.000500000024f;
                    *(entity_9 + 0xb816c0) = data_7[4];
                    *(entity_9 + 0xb816c4) = data_7[5];
                    *(entity_9 + 0xb816c8) = data_7[6];
                    *(entity_9 + 0xb81720) = data_7[7];
                    *(entity_9 + 0xb81724) = data_7[8];
                    *(entity_9 + 0xb81728) = data_7[9];
                    int32_t* dest_14 = &data_7[0xa];
                    int32_t* context_7 = entity_9 + 0xb81760;
                    data_7 = &data_7[0x10];
                    entity_9 += 0xc;
                    *context_7 = *dest_14;
                    context_7[1] = dest_14[1];
                    context_7[2] = dest_14[2];
                } while (i_3 < &g_b46d14);

            label_527a6c:
                Light_ApplyLightmap_10(source_val + 0x24);
                Terrain_ConnectGraphNode_9(source_val + 0x24);
                return DynObj_RemoveSymbol_12(*(source_val + 0x20));
            }

            do
            {
                long double fpu_val_7_1 = i_4[0x12];
                long double f3_1 = *(source_val + 0x194);
                fpu_val_7_1 - f3_1;
                i_7 = (fpu_val_7_1 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_1, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_1 == f3_1 ? 1 : 0) << 0xe;

                if (*(&i_7 + 1) & 0x40)
                {
                    i_10 = i_4;
                    i_9 = i_4;
                    break;
                }

                long double fpu_val_7_2 = i_4[0x12];
                long double f5_1 = *(source_val + 0x194);
                fpu_val_7_2 - f5_1;
                i_7 = (fpu_val_7_2 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_2, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_2 == f5_1 ? 1 : 0) << 0xe;

                if (*(&i_7 + 1) & 1)
                {
                    if (i_10)
                    {
                        long double fpu_val_7_3 = i_4[0x12];
                        long double f7_1 = i_10[0x12];
                        fpu_val_7_3 - f7_1;
                        i_7 = (fpu_val_7_3 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_3, f7_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_3 == f7_1 ? 1 : 0) << 0xe;
                    }

                    if (!i_10 || !(*(&i_7 + 1) & 0x41))
                        i_10 = i_4;
                }

                long double fpu_val_7_4 = i_4[0x12];
                long double f6_1 = *(source_val + 0x194);
                fpu_val_7_4 - f6_1;
                i_7 = (fpu_val_7_4 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_4, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_4 == f6_1 ? 1 : 0) << 0xe;

                if (!(*(&i_7 + 1) & 0x41))
                {
                    if (i_9)
                    {
                        long double fpu_val_7_5 = i_4[0x12];
                        long double f8_1 = i_9[0x12];
                        fpu_val_7_5 - f8_1;
                        i_7 = (fpu_val_7_5 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_5, f8_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_5 == f8_1 ? 1 : 0) << 0xe;
                    }

                    if (!i_9 || *(&i_7 + 1) & 1)
                        i_9 = i_4;
                }

                i_7 = g_a84374;
                i_7 = QTask_TriggerEvent_2(i_4, i_7);
                i_4 = i_7;
            } while (i_4);

            if (!i_10)
                goto label_5275f7;

            long double fpu_val_7_10;
            long double f10_1;

            if (i_9 && i_10 != i_9)
            {
                fpu_val_7_10 = i_10[0x12];
                f10_1 = i_9[0x12];
                fpu_val_7_10 - f10_1;
            }

            if (!i_9 || i_10 == i_9 || *(&((fpu_val_7_10 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_10, f10_1) ? 1 : 0) << 0xa
                | (fpu_val_7_10 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            {
                int32_t* entity_13 = source_val + 0x58;
                int32_t* data_11 = &i_10[0x16];
                context = 5;
                bool flag_5_1;

                do
                {
                    entity_13[-3] = data_11[-3];
                    entity_13[-2] = data_11[-2];
                    entity_13[-1] = data_11[-1];
                    int32_t* temp_23 = data_11;
                    int32_t* context_12 = entity_13;
                    data_11 = &data_11[0x11];
                    entity_13 = &entity_13[0x10];
                    *context_12 = *temp_23;
                    context_12[1] = temp_23[1];
                    context_12[2] = temp_23[2];
                    entity_13[-0xd] = data_11[-0xe];
                    flag_5_1 = context != 1;
                    context -= 1;
                } while (flag_5_1);
                *(source_val + 0x24) = i_10[8];
                *(source_val + 0x28) = i_10[9];
                *(source_val + 0x2c) = i_10[0xa];
                *(source_val + 0x30) = i_10[0xb];
                *(source_val + 0x34) = i_10[0xc];
                *(source_val + 0x38) = i_10[0xd];
                *(source_val + 0x3c) = i_10[0xe];
                *(source_val + 0x40) = i_10[0xf];
                *(source_val + 0x44) = i_10[0x10];
                Physics_CalculateSplineLength_15(source_val + 0x4c);
                Physics_SolveConstraints_14(source_val + 0x58, *(source_val + 0x64) * 0.000500000024f);
                void* i_5 = &g_b46d00;
                int32_t* data_15 = source_val + 0x58;
                void* entity_20 = nullptr;

                do
                {
                    i_5 += 4;
                    *(entity_20 + &g_b818a0) = data_15[-3];
                    *(entity_20 + &g_b818a4) = data_15[-2];
                    *(entity_20 + &g_b818a8) = data_15[-1];
                    int32_t* context_14 = data_15;
                    int32_t* dest_24 = entity_20 + 0xb818e0;
                    entity_20 += 0xc;
                    data_15 = &data_15[0x10];
                    *dest_24 = *context_14;
                    dest_24[1] = context_14[1];
                    dest_24[2] = context_14[2];
                    *(i_5 - 4) = data_15[-0xd] * 0.000500000024f;
                } while (i_5 < &g_b46d14);

                goto label_527a6c;
            }

            void* temp_20 = &i_9[0x15];
            void* entity_10 = source_val + 0x50;
            long double fpu_val_7_13 = (*(source_val + 0x194) - i_10[0x12]) / (i_9[0x12] - i_10[0x12]);
            float* data_9 = &i_10[0x13];
            context = 5;
            bool flag_7_1;

            do
            {
                temp_20 += 0x44;
                entity_10 += 0x40;
                long double fpu_val_6_4 = *(data_9 + i_9 - i_10) - *data_9;
                data_9 = &data_9[0x11];
                flag_7_1 = context != 1;
                context -= 1;
                *(entity_10 - 0x44) = fpu_val_6_4 * fpu_val_7_13 + data_9[-0x11];
                *(entity_10 - 0x40) = (*(temp_20 - 0x48) - data_9[-0x10]) * fpu_val_7_13 + data_9[-0x10];
                *(entity_10 - 0x3c) = (*(temp_20 - 0x44) - data_9[-0xf]) * fpu_val_7_13 + data_9[-0xf];
                *(entity_10 - 0x38) = (*(temp_20 - 0x40) - data_9[-0xe]) * fpu_val_7_13 + data_9[-0xe];
                *(entity_10 - 0x34) = (*(temp_20 - 0x3c) - data_9[-0xd]) * fpu_val_7_13 + data_9[-0xd];
                *(entity_10 - 0x30) = (*(temp_20 - 0x38) - data_9[-0xc]) * fpu_val_7_13 + data_9[-0xc];
                *(entity_10 - 0x2c) = (*(temp_20 - 0x34) - data_9[-0xb]) * fpu_val_7_13 + data_9[-0xb];
            } while (flag_7_1);
            *(source_val + 0x24) = (i_9[8] - i_10[8]) * fpu_val_7_13 + i_10[8];
            *(source_val + 0x28) = (i_9[9] - i_10[9]) * fpu_val_7_13 + i_10[9];
            *(source_val + 0x2c) = (i_9[0xa] - i_10[0xa]) * fpu_val_7_13 + i_10[0xa];
            *(source_val + 0x30) = (i_9[0xb] - i_10[0xb]) * fpu_val_7_13 + i_10[0xb];
            *(source_val + 0x34) = (i_9[0xc] - i_10[0xc]) * fpu_val_7_13 + i_10[0xc];
            *(source_val + 0x38) = (i_9[0xd] - i_10[0xd]) * fpu_val_7_13 + i_10[0xd];
            *(source_val + 0x3c) = (i_9[0xe] - i_10[0xe]) * fpu_val_7_13 + i_10[0xe];
            *(source_val + 0x40) = (i_9[0xf] - i_10[0xf]) * fpu_val_7_13 + i_10[0xf];
            *(source_val + 0x44) = (i_9[0x10] - i_10[0x10]) * fpu_val_7_13 + i_10[0x10];
            Physics_CalculateSplineLength_15(source_val + 0x4c);
            Physics_SolveConstraints_14(source_val + 0x58, *(source_val + 0x64) * 0.000500000024f);
            void* i_6 = &g_b46d00;
            int32_t* data_10 = source_val + 0x58;
            void* entity_12 = nullptr;

            do
            {
                i_6 += 4;
                *(entity_12 + &g_b818a0) = data_10[-3];
                *(entity_12 + &g_b818a4) = data_10[-2];
                *(entity_12 + &g_b818a8) = data_10[-1];
                int32_t* context_9 = data_10;
                int32_t* dest_19 = entity_12 + 0xb818e0;
                entity_12 += 0xc;
                data_10 = &data_10[0x10];
                *dest_19 = *context_9;
                dest_19[1] = context_9[1];
                dest_19[2] = context_9[2];
                *(i_6 - 4) = data_10[-0xd] * 0.000500000024f;
            } while (i_6 < &g_b46d14);
        }
    }

    Light_ApplyLightmap_10(source_val + 0x24);
    Terrain_ConnectGraphNode_9(source_val + 0x24);
    return DynObj_RemoveSymbol_12(*(source_val + 0x20));
}
