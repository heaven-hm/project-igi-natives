// Original IGI.EXE function: AIStationaryGun_Setup (VA 0x0046F390; static CFG gate PASS, CFG score 0.933).
#include "AIStationaryGun_Setup.h"
struct status_msg* AIStationaryGun_Setup(long double context , float param_2)

{
    float flagP = param_2;
    float item_64 = 0.0f;
    float item_68 = 0.0f;
    char context_val = 0;
    Table_GetAt(flagP + 0x1c4, 0);
    void* source_val = *(flagP + 0x130);
    struct status_msg* result_1 = nullptr;
    uint32_t data_2 = FX_FireBallUpdate_13();
    int32_t temp_val = 0;
    temp_val = *(source_val + 0x1c);
    int32_t data_3 = *(((data_2 * 0x180 + temp_val) << 2) + &g_a96ae0);

    if (data_3)
        data_3(source_val, &result_1);

    struct status_msg* result = result_1;

    if (result)
    {
        float item_28;
        memcpy(&item_28, *(flagP + 0x130) + 0x70, 0x28);
        int32_t* i_2 = result->head[6];
        int16_t idx;

        for (int32_t* i = *i_2; i; i = *i)
        {
            if (*(i_2 + 0x29) && *i_2[2])
            {
                long double fpu_val_7_2 = *DynObj_UpdateDynTree_4(*i_2[2]) - *(flagP + 0x20);
                int32_t* temp_2 = i_2[2];
                double item_58 = fpu_val_7_2;
                long double fpu_val_7_4 = *(DynObj_UpdateDynTree_4(*temp_2) + 8) - *(flagP + 0x28);
                int32_t* entity_5 = i_2[2];
                double item_50 = fpu_val_7_4;
                long double fpu_val_7_6 = *(DynObj_UpdateDynTree_4(*entity_5) + 0x10) - *(flagP + 0x30);
                double item_48_1 = fpu_val_7_6;
                float item_1c;
                float item_10;
                double item_40 = item_10 * fpu_val_7_6 + item_1c * item_50 + item_28 * item_58;
                float item_24;
                float item_18;
                float item_c;
                double item_38_1 = item_c * fpu_val_7_6 + item_18 * item_50 + item_24 * item_58;
                float item_20;
                float item_14;
                float item_8;
                double item_30_1 = item_8 * fpu_val_7_6 + item_14 * item_50 + item_20 * item_58;
                memcpy(&item_58, &item_40, 0x18);
                void item_90;
                memcpy(&item_90, &item_40, 0x18);
                WeaponType_GetConfig();
                item_68 = context;
                float item_5c_1 = Sys_ReadFileBlock_11(&item_58);
                memcpy(&item_40, &item_58, 0x18);
                item_30_1 = 0;
                *(&item_30_1 + 4) = 0;
                Sys_FreeMemory_11(&item_40);
                Sys_FreeMemory_11(&item_58);
                item_64 = Sys_DispatchOpcode_9(item_30_1 * item_48_1 + item_38_1 * item_50 + item_40 * item_58);
                long double fpu_val_1_2 = item_48_1;
                long double f10_1 = 0.0;
                fpu_val_1_2 - f10_1;
                idx = 2;

                if (*(&((fpu_val_1_2 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_1_2, f10_1) ? 1 : 0) << 0xa
                    | (fpu_val_1_2 == f10_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
                {
                    item_64 = -(item_64);
                    idx = 2;
                }

                context_val = 1;
                break;
            }

            i_2 = i;
        }

        if (!*(flagP + 0x1d8))
        {
            if (context_val)
                *(flagP + 0x1d4) = 0;
        }
        else if (context_val)
            *(flagP + 0x1d4) = 0;
        else
            *(flagP + 0x1d4) = 0x5a;

        int32_t data_13 = *(flagP + 0x1d4);
        *(flagP + 0x1d8) = context_val;

        if (!data_13)
        {
            *(flagP + 0x1dc) = item_64;
            *(flagP + 0x1e0) = item_68;
        }
        else
        {
            item_64 = *(flagP + 0x1dc);
            item_68 = *(flagP + 0x1e0);
            *(flagP + 0x1d4) = data_13 - 1;
        }

🚫🚫        /* unimplemented  {fld fp0, dword [entity_val+0x28]} */
⋯        long double f0_1 = 6.28318548f;
        /* unimplemented  {fcomp fp0, dword [&g_5334a8]} f- f0_1 */ - f0_1;
        bool c0_2 = /* bool c0_2 =
            unimplemented  {fcomp fp0, dword [&g_5334a8]} f< f0_1 */ < f0_1;
        bool c2_2 = FCMP_UO(/* bool c2_2 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5334a8]}, f0_1) */, f0_1);
        bool c3_2 = /* bool c3_2 =
            unimplemented  {fcomp fp0, dword [&g_5334a8]} f== f0_1 */ == f0_1;
        /* unimplemented  {fcomp fp0, dword [&g_5334a8]} */

        if (!(*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb) + 1) & 0x41))
        {
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x10]} */
🚫🚫            /* unimplemented  {fsub fp0, dword [flagP+0x1c0]} */
🚫🚫🚫🚫🚫            long double f2_1 = 0.0f;
            /* unimplemented  {fcom fp0, dword [&g_5333ec]} f- f2_1 */ - f2_1;
            bool c0_3 = /* bool c0_3 =
                unimplemented  {fcom fp0, dword [&g_5333ec]} f< f2_1 */ < f2_1;
            bool c2_3 = FCMP_UO(/* bool c2_3 =
                is_unordered.t(unimplemented  {fcom fp0, dword [&g_5333ec]}, f2_1) */,
                f2_1);
            bool c3_3 = /* bool c3_3 =
                unimplemented  {fcom fp0, dword [&g_5333ec]} f== f2_1 */ == f2_1;

            if (*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                    | ((idx - 1) & 7) << 0xb) + 1) & 1)
🚫🚫                /* unimplemented  {fchs } */

⋯            long double f5_1 = 3.14159274f;
            /* unimplemented  {fcomp fp0, dword [&g_533400]} f- f5_1 */ - f5_1;
            bool c0_4 = /* bool c0_4 =
                unimplemented  {fcomp fp0, dword [&g_533400]} f< f5_1 */ < f5_1;
            bool c2_4 = FCMP_UO(/* bool c2_4 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [&g_533400]}, f5_1) */,
                f5_1);
            bool c3_4 = /* bool c3_4 =
                unimplemented  {fcomp fp0, dword [&g_533400]} f== f5_1 */ == f5_1;
            /* unimplemented  {fcomp fp0, dword [&g_533400]} */

            if (!(*(&((c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                | (idx & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld fp0, dword [stack_ptr+0x10]} */
🚫🚫                /* unimplemented  {fadd dword [&g_5334a8]} */
🚫🚫🚫                item_68 = /* item_68 = unimplemented  {fstp dword [stack_ptr+0x10], fp0} */;
                /* unimplemented  {fstp dword [stack_ptr+0x10], fp0} */
            }
        }

🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x1bc]} */
⋯        long double f1_1 = item_64;
        /* unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} f- f1_1 */ - f1_1;
        bool c0_5 = /* bool c0_5 =
            unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} f< f1_1 */ < f1_1;
        bool c2_5 = FCMP_UO(/* bool c2_5 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [stack_ptr+0x14]}, f1_1) */, f1_1);
        bool c3_5 = /* bool c3_5 =
            unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} f== f1_1 */ == f1_1;
        /* unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} */
        int16_t top_8;

        if (!(*(&((c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x1bc]} */
⋯            long double f3_1 = item_64;
            /* unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} f- f3_1 */ - f3_1;
            bool c0_7 = /* bool c0_7 =
                unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} f< f3_1 */ < f3_1;
            bool c2_7 = FCMP_UO(/* bool c2_7 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [stack_ptr+0x14]}, f3_1) */, f3_1);
            bool c3_7 = /* bool c3_7 =
                unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} f== f3_1 */ == f3_1;
            /* unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} */
            top_8 = idx;

            if (!(*(&((c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
                | (top_8 & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld fp0, dword [flagP+0x1bc]} */
🚫🚫                /* unimplemented  {fsub fp0, dword [entity_val+0x30]} */
🚫🚫                *(flagP + 0x1bc) = /* *(flagP i+ 0x1bc) =
                    unimplemented  {fst dword [flagP+0x1bc], fp0} */;
⋯                long double f7_1 = item_64;
                /* unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} f- f7_1 */ - f7_1;
                bool c0_8 = /* bool c0_8 =
                    unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} f< f7_1 */ < f7_1;
                bool c2_8 = FCMP_UO(/* bool c2_8 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [stack_ptr+0x14]}, f7_1) */,
                    f7_1);
                bool c3_8 = /* bool c3_8 =
                    unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} f== f7_1 */ == f7_1;
                /* unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} */

                if (*(&((c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe
                        | (top_8 & 7) << 0xb) + 1) & 1)
                    *(flagP + 0x1bc) = item_64;
            }
        }
        else
        {
🚫🚫            /* unimplemented  {fld fp0, dword [entity_val+0x30]} */
🚫🚫            /* unimplemented  {fadd dword [flagP+0x1bc]} */
🚫🚫            *(flagP + 0x1bc) =
⋯            long double f4_1 = item_64;
            /* unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} f- f4_1 */ - f4_1;
            bool c0_6 = /* bool c0_6 =
                unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} f< f4_1 */ < f4_1;
            bool c2_6 = FCMP_UO(/* bool c2_6 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [stack_ptr+0x14]}, f4_1) */, f4_1);
            bool c3_6 = /* bool c3_6 =
                unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} f== f4_1 */ == f4_1;
            /* unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} */
            top_8 = idx;

            if (!(*(&((c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                    | (top_8 & 7) << 0xb) + 1) & 0x41))
                *(flagP + 0x1bc) = item_64;
        }

🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x1c0]} */
⋯        long double f6_1 = item_68;
        /* unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} f- f6_1 */ - f6_1;
        bool c0_9 = /* bool c0_9 =
            unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} f< f6_1 */ < f6_1;
        bool c2_9 = FCMP_UO(/* bool c2_9 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [stack_ptr+0x10]}, f6_1) */, f6_1);
        bool c3_9 = /* bool c3_9 =
            unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} f== f6_1 */ == f6_1;
        /* unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} */
        int16_t top_14;

        if (!(*(&((c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa | (c3_9 ? 1 : 0) << 0xe
            | (top_8 & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x1c0]} */
⋯            long double f8_1 = item_68;
            /* unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} f- f8_1 */ - f8_1;
            bool c0_11 = /* bool c0_11 =
                unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} f< f8_1 */ < f8_1;
            bool c2_11 = FCMP_UO(/* bool c2_11 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [stack_ptr+0x10]}, f8_1) */, f8_1);
            bool c3_11 = /* bool c3_11 =
                unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} f== f8_1 */ == f8_1;
            /* unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} */
            top_14 = top_8;

            if (!(*(&((c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa | (c3_11 ? 1 : 0) << 0xe
                | (top_14 & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld fp0, dword [flagP+0x1c0]} */
🚫🚫                /* unimplemented  {fsub fp0, dword [entity_val+0x34]} */
🚫🚫                *(flagP + 0x1c0) = /* *(flagP i+ 0x1c0) =
                    unimplemented  {fst dword [flagP+0x1c0], fp0} */;
⋯                long double f12_1 = item_68;
                /* unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} f- f12_1 */ - f12_1;
                bool c0_12 = /* bool c0_12 =
                    unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} f< f12_1 */ < f12_1;
                bool c2_12 = FCMP_UO(/* bool c2_12 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [stack_ptr+0x10]}, f12_1) */,
                    f12_1);
                bool c3_12 = /* bool c3_12 =
                    unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} f== f12_1 */ == f12_1;
                /* unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} */

                if (*(&((c0_12 ? 1 : 0) << 8 | (c2_12 ? 1 : 0) << 0xa | (c3_12 ? 1 : 0) << 0xe
                        | (top_14 & 7) << 0xb) + 1) & 1)
                    *(flagP + 0x1c0) = item_68;
            }
        }
        else
        {
🚫🚫            /* unimplemented  {fld fp0, dword [entity_val+0x34]} */
🚫🚫            /* unimplemented  {fadd dword [flagP+0x1c0]} */
🚫🚫            *(flagP + 0x1c0) =
⋯            long double f9_1 = item_68;
            /* unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} f- f9_1 */ - f9_1;
            bool c0_10 = /* bool c0_10 =
                unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} f< f9_1 */ < f9_1;
            bool c2_10 = FCMP_UO(/* bool c2_10 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [stack_ptr+0x10]}, f9_1) */, f9_1);
            bool c3_10 = /* bool c3_10 =
                unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} f== f9_1 */ == f9_1;
            /* unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} */
            top_14 = top_8;

            if (!(*(&((c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
                    | (top_14 & 7) << 0xb) + 1) & 0x41))
                *(flagP + 0x1c0) = item_68;
        }

        AI_TakeCover_30(flagP);
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x1bc]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [stack_ptr+0x18]} */
🚫🚫🚫🚫🚫        long double f11_1 = 0.0f;
        /* unimplemented  {fcom fp0, dword [&g_5333ec]} f- f11_1 */ - f11_1;
        bool c0_13 = /* bool c0_13 =
            unimplemented  {fcom fp0, dword [&g_5333ec]} f< f11_1 */ < f11_1;
        bool c2_13 = FCMP_UO(/* bool c2_13 =
            is_unordered.t(unimplemented  {fcom fp0, dword [&g_5333ec]}, f11_1) */, f11_1);
        bool c3_13 = /* bool c3_13 =
            unimplemented  {fcom fp0, dword [&g_5333ec]} f== f11_1 */ == f11_1;

        if (*(&((c0_13 ? 1 : 0) << 8 | (c2_13 ? 1 : 0) << 0xa | (c3_13 ? 1 : 0) << 0xe
                | ((top_14 - 1) & 7) << 0xb) + 1) & 1)
🚫🚫            /* unimplemented  {fchs } */

🚫🚫🚫        param_2 = /* param_2 = unimplemented  {fstp dword [stack_ptr+0x7c], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x7c], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x1c0]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [stack_ptr+0x10]} */
🚫🚫🚫🚫🚫        long double f13_1 = 0.0f;
        /* unimplemented  {fcom fp0, dword [&g_5333ec]} f- f13_1 */ - f13_1;
        bool c0_14 = /* bool c0_14 =
            unimplemented  {fcom fp0, dword [&g_5333ec]} f< f13_1 */ < f13_1;
        bool c2_14 = FCMP_UO(/* bool c2_14 =
            is_unordered.t(unimplemented  {fcom fp0, dword [&g_5333ec]}, f13_1) */, f13_1);
        bool c3_14 = /* bool c3_14 =
            unimplemented  {fcom fp0, dword [&g_5333ec]} f== f13_1 */ == f13_1;

        if (*(&((c0_14 ? 1 : 0) << 8 | (c2_14 ? 1 : 0) << 0xa | (c3_14 ? 1 : 0) << 0xe
                | ((top_14 - 1) & 7) << 0xb) + 1) & 1)
🚫🚫            /* unimplemented  {fchs } */

        int16_t top_22;

        if (!context_val)
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
            top_22 = top_14;
            AI_MoveToNode_30(flagP, 0);
        }
        else
        {
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x7c]} */
⋯            long double f14_1 = 0.0872664675f;
            /* unimplemented  {fcomp fp0, dword [&g_53387c]} f- f14_1 */ - f14_1;
            bool c0_15 = /* bool c0_15 =
                unimplemented  {fcomp fp0, dword [&g_53387c]} f< f14_1 */ < f14_1;
            bool c2_15 = FCMP_UO(/* bool c2_15 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [&g_53387c]}, f14_1) */,
                f14_1);
            bool c3_15 = /* bool c3_15 =
                unimplemented  {fcomp fp0, dword [&g_53387c]} f== f14_1 */ == f14_1;
            /* unimplemented  {fcomp fp0, dword [&g_53387c]} */
            int32_t source_3;

            if (!(*(&((c0_15 ? 1 : 0) << 8 | (c2_15 ? 1 : 0) << 0xa | (c3_15 ? 1 : 0) << 0xe
                | ((top_14 - 1) & 7) << 0xb) + 1) & 1))
            {
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
                top_22 = top_14;
                source_3 = 0;
            }
            else
            {
⋯                long double f15_1 = 0.0872664675f;
                /* unimplemented  {fcomp fp0, dword [&g_53387c]} f- f15_1 */ - f15_1;
                bool c0_16 = /* bool c0_16 =
                    unimplemented  {fcomp fp0, dword [&g_53387c]} f< f15_1 */ < f15_1;
                bool c2_16 = FCMP_UO(/* bool c2_16 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [&g_53387c]}, f15_1) */,
                    f15_1);
                bool c3_16 = /* bool c3_16 =
                    unimplemented  {fcomp fp0, dword [&g_53387c]} f== f15_1 */ == f15_1;
                /* unimplemented  {fcomp fp0, dword [&g_53387c]} */
                top_22 = top_14;

                if (!(*(&((c0_16 ? 1 : 0) << 8 | (c2_16 ? 1 : 0) << 0xa | (c3_16 ? 1 : 0) << 0xe
                        | (top_22 & 7) << 0xb) + 1) & 1))
                    source_3 = 0;
                else
                {
🚫🚫                    /* unimplemented  {fld fp0, dword [data_val+0x5c]} */
🚫🚫                    /* unimplemented  {fld fp0, fp0} */
🚫🚫                    /* unimplemented  {fmul fp0, fp1} */
🚫🚫                    /* unimplemented  {fld fp0, dword [stack_ptr+0x1c]} */
⋯                    /* unimplemented  {fcompp } f- unimplemented  {fcompp } */
                        - /* unimplemented  {fcompp } f- unimplemented  {fcompp } */;
                    bool c0_17 = /* bool c0_17 =
                        unimplemented  {fcompp } f< unimplemented  {fcompp } */ < /* bool c0_17 =
                        unimplemented  {fcompp } f< unimplemented  {fcompp } */;
                    bool c2_17 = FCMP_UO(/* bool c2_17 =
                        is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */,
                        /* bool c2_17 =
                        is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */);
                    bool c3_17 = /* bool c3_17 =
                        unimplemented  {fcompp } f== unimplemented  {fcompp } */ == /* bool c3_17 =
                        unimplemented  {fcompp } f== unimplemented  {fcompp } */;
                    /* unimplemented  {fcompp } */
                    /* unimplemented  {fcompp } */
🚫🚫🚫                    /* unimplemented  {fstp fp0, fp0} */
                    /* unimplemented  {fstp fp0, fp0} */

                    source_3 = *(&((c0_17 ? 1 : 0) << 8 | (c2_17 ? 1 : 0) << 0xa
                        | (c3_17 ? 1 : 0) << 0xe | ((top_22 - 1) & 7) << 0xb) + 1) & 0x41 ? 0 : 1;
                }
            }

            AI_MoveToNode_30(flagP, source_3);

            if (source_3)
            {
🚫🚫                /* unimplemented  {fld fp0, dword [entity_val+0x58]} */
🚫🚫                /* unimplemented  {fadd dword [flagP+0x1e4]} */
🚫🚫🚫                *(flagP + 0x1e4) = /* *(flagP i+ 0x1e4) =
                    unimplemented  {fstp dword [flagP+0x1e4], fp0} */;
                /* unimplemented  {fstp dword [flagP+0x1e4], fp0} */
            }
        }

🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x14]} */
🚫🚫        /* unimplemented  {fld fp0, dword [entity_val+0x24]} */
🚫🚫        /* unimplemented  {fld fp0, fp1} */
⋯        /* unimplemented  {fcompp } f- unimplemented  {fcompp } */
            - /* unimplemented  {fcompp } f- unimplemented  {fcompp } */;
        bool c0_18 = /* bool c0_18 =
            unimplemented  {fcompp } f< unimplemented  {fcompp } */ < /* bool c0_18 =
            unimplemented  {fcompp } f< unimplemented  {fcompp } */;
        bool c2_18 = FCMP_UO(/* bool c2_18 =
            is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */, /* bool c2_18 =
            is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */);
        bool c3_18 = /* bool c3_18 =
            unimplemented  {fcompp } f== unimplemented  {fcompp } */ == /* bool c3_18 =
            unimplemented  {fcompp } f== unimplemented  {fcompp } */;
        /* unimplemented  {fcompp } */
        /* unimplemented  {fcompp } */
        int16_t top_33;

        if (!(*(&((c0_18 ? 1 : 0) << 8 | (c2_18 ? 1 : 0) << 0xa | (c3_18 ? 1 : 0) << 0xe
            | ((top_22 - 1) & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld fp0, dword [entity_val+0x20]} */
🚫🚫            /* unimplemented  {fld fp0, fp1} */
⋯            /* unimplemented  {fcompp } f- unimplemented  {fcompp } */
                - /* unimplemented  {fcompp } f- unimplemented  {fcompp } */;
            bool c0_19 = /* bool c0_19 =
                unimplemented  {fcompp } f< unimplemented  {fcompp } */ < /* bool c0_19 =
                unimplemented  {fcompp } f< unimplemented  {fcompp } */;
            bool c2_19 = FCMP_UO(/* bool c2_19 =
                is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */,
                /* bool c2_19 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */);
            bool c3_19 = /* bool c3_19 =
                unimplemented  {fcompp } f== unimplemented  {fcompp } */ == /* bool c3_19 =
                unimplemented  {fcompp } f== unimplemented  {fcompp } */;
            /* unimplemented  {fcompp } */
            /* unimplemented  {fcompp } */
            top_33 = top_22 - 1;

            if (!(*(&((c0_19 ? 1 : 0) << 8 | (c2_19 ? 1 : 0) << 0xa | (c3_19 ? 1 : 0) << 0xe
                | (top_33 & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
🚫🚫                /* unimplemented  {fld fp0, dword [entity_val+0x20]} */
            }
        }
        else
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫            top_33 = top_22 - 1;
            /* unimplemented  {fld fp0, dword [entity_val+0x24]} */
        }

🚫🚫        /* unimplemented  {fld fp0, dword [entity_val+0x28]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x10]} */
⋯        /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
            - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
        bool c0_20 = /* bool c0_20 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_20 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
        bool c2_20 = FCMP_UO(/* bool c2_20 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
            /* bool c2_20 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
        bool c3_20 = /* bool c3_20 =
            unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */
            == /* bool c3_20 = unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
        /* unimplemented  {fcomp fp0, fp1} */
        int16_t top_39 = top_33 - 1;

        if (*(&((c0_20 ? 1 : 0) << 8 | (c2_20 ? 1 : 0) << 0xa | (c3_20 ? 1 : 0) << 0xe
                | (top_39 & 7) << 0xb) + 1) & 1)
            goto label_46f839;

🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [entity_val+0x28]} */
⋯        long double f16_1 = item_68;
        /* unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} f- f16_1 */ - f16_1;
        bool c0_21 = /* bool c0_21 =
            unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} f< f16_1 */ < f16_1;
        bool c2_21 = FCMP_UO(/* bool c2_21 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [stack_ptr+0x10]}, f16_1) */, f16_1);
        bool c3_21 = /* bool c3_21 =
            unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} f== f16_1 */ == f16_1;
        /* unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} */
        int16_t top_42 = top_39 + 1;

        if (*(&((c0_21 ? 1 : 0) << 8 | (c2_21 ? 1 : 0) << 0xa | (c3_21 ? 1 : 0) << 0xe
            | (top_42 & 7) << 0xb) + 1) & 1)
        {
🚫🚫            top_39 = top_42 - 1;
            /* unimplemented  {fld fp0, dword [entity_val+0x28]} */
🚫🚫🚫        label_46f839:
            float item_68_1 = /* float item_68_1 = unimplemented  {fstp dword [stack_ptr+0x10], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr+0x10], fp0} */
            top_42 = top_39 + 1;
        }

🚫🚫        /* unimplemented  {fsubr fp0, dword [flagP+0x1bc]} */
🚫🚫🚫🚫🚫        long double f17_1 = 0.0f;
        /* unimplemented  {fcom fp0, dword [&g_5333ec]} f- f17_1 */ - f17_1;
        bool c0_22 = /* bool c0_22 =
            unimplemented  {fcom fp0, dword [&g_5333ec]} f< f17_1 */ < f17_1;
        bool c2_22 = FCMP_UO(/* bool c2_22 =
            is_unordered.t(unimplemented  {fcom fp0, dword [&g_5333ec]}, f17_1) */, f17_1);
        bool c3_22 = /* bool c3_22 =
            unimplemented  {fcom fp0, dword [&g_5333ec]} f== f17_1 */ == f17_1;

        if (*(&((c0_22 ? 1 : 0) << 8 | (c2_22 ? 1 : 0) << 0xa | (c3_22 ? 1 : 0) << 0xe
                | (top_42 & 7) << 0xb) + 1) & 1)
🚫🚫            /* unimplemented  {fchs } */

🚫🚫🚫        param_2 = /* param_2 = unimplemented  {fstp dword [stack_ptr+0x7c], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x7c], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x1c0]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [stack_ptr+0x10]} */
🚫🚫🚫🚫🚫        long double f18_1 = 0.0f;
        /* unimplemented  {fcom fp0, dword [&g_5333ec]} f- f18_1 */ - f18_1;
        bool c0_23 = /* bool c0_23 =
            unimplemented  {fcom fp0, dword [&g_5333ec]} f< f18_1 */ < f18_1;
        bool c2_23 = FCMP_UO(/* bool c2_23 =
            is_unordered.t(unimplemented  {fcom fp0, dword [&g_5333ec]}, f18_1) */, f18_1);
        bool c3_23 = /* bool c3_23 =
            unimplemented  {fcom fp0, dword [&g_5333ec]} f== f18_1 */ == f18_1;

        if (*(&((c0_23 ? 1 : 0) << 8 | (c2_23 ? 1 : 0) << 0xa | (c3_23 ? 1 : 0) << 0xe
                | (top_42 & 7) << 0xb) + 1) & 1)
🚫🚫            /* unimplemented  {fchs } */

🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x7c]} */
⋯        long double f19_1 = 0.0349065848f;
        /* unimplemented  {fcomp fp0, dword [&g_533834]} f- f19_1 */ - f19_1;
        bool c0_24 = /* bool c0_24 =
            unimplemented  {fcomp fp0, dword [&g_533834]} f< f19_1 */ < f19_1;
        bool c2_24 = FCMP_UO(/* bool c2_24 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_533834]}, f19_1) */,
            f19_1);
        bool c3_24 = /* bool c3_24 =
            unimplemented  {fcomp fp0, dword [&g_533834]} f== f19_1 */ == f19_1;
        /* unimplemented  {fcomp fp0, dword [&g_533834]} */

        if (!(*(&((c0_24 ? 1 : 0) << 8 | (c2_24 ? 1 : 0) << 0xa | (c3_24 ? 1 : 0) << 0xe
            | (top_42 & 7) << 0xb) + 1) & 0x41))
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
        label_46f8ae:
            result = *(flagP + 0x1d0);

            if (result)
                result = SoundSys_StopSoundSample_7(result, flagP + 0x20);
            else
            {
                result = SoundSys_SetMasterVolume_7(flagP, *(flagP + 0x1b8) + 0x38);
                *(flagP + 0x1d0) = result;

                if (result)
                    result = SoundSys_StopSoundSample_7(result, flagP + 0x20);
            }
        }
        else
        {
⋯            long double f20_1 = 0.0349065848f;
            /* unimplemented  {fcomp fp0, dword [&g_533834]} f- f20_1 */ - f20_1;
            bool c0_25 = /* bool c0_25 =
                unimplemented  {fcomp fp0, dword [&g_533834]} f< f20_1 */ < f20_1;
            bool c2_25 = FCMP_UO(/* bool c2_25 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [&g_533834]}, f20_1) */,
                f20_1);
            bool c3_25 = /* bool c3_25 =
                unimplemented  {fcomp fp0, dword [&g_533834]} f== f20_1 */ == f20_1;
            /* unimplemented  {fcomp fp0, dword [&g_533834]} */

            if (!(*(&((c0_25 ? 1 : 0) << 8 | (c2_25 ? 1 : 0) << 0xa | (c3_25 ? 1 : 0) << 0xe
                    | ((top_42 + 1) & 7) << 0xb) + 1) & 0x41))
                goto label_46f8ae;

            result = *(flagP + 0x1d0);

            if (result)
            {
                result = SoundSys_SetFrequency_7(result);
                *(flagP + 0x1d0) = 0;
            }
        }

        int32_t* i_1 = *(flagP + 8);

        if (*i_1 && i_1)
        {
            int32_t temp_8 = g_afa7e0;

            do
            {
                int32_t* source_4 = *i_1;
                void* data_26;

                if (!source_4)
                    data_26 = nullptr;
                else
                {
                    int32_t data_23 = *source_4;
                    int32_t data_24 = -(data_23);
                    data_26 = (data_24 - data_24) & source_4;
                }

                *((temp_8 << 2) + &g_afa6e0) = data_26;
                int32_t temp_9 = temp_8 + 1;
                int32_t data_27 = 0;
                g_afa7e0 = temp_9;
                data_27 = i_1[7];
                result = *((data_27 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i_1);
                    temp_9 = g_afa7e0;
                }

                i_1 = *((temp_9 << 2) + &g_afa6dc);
                temp_8 = temp_9 - 1;
                g_afa7e0 = temp_8;
            } while (i_1);
        }
    }

    return result;
}
