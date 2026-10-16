#include "gi_platform.h"
#include "0046F390-AIStationaryGun_Setup.h"
struct status_msg* AIStationaryGun_Setup(long double a1 , float a2)

{
    float flagP = a2;
    float v_64 = 0.0f;
    float v_68 = 0.0f;
    char ctxB = 0;
    Table_GetAt(flagP + 0x1c4, 0);
    void* srcS = *(flagP + 0x130);
    struct status_msg* result_1 = nullptr;
    uint32_t valA2 = FX_FireBallUpdate_13();
    int32_t tmpD = 0;
    tmpD = (*(int32_t*)(uintptr_t)(srcS + 0x1c));
    int32_t valA3 = *(((valA2 * 0x180 + tmpD) << 2) + &g_a96ae0);

    if (valA3)
        valA3(srcS, &result_1);

    struct status_msg* result = result_1;

    if (result)
    {
        float v_28;
        memcpy(&v_28, *(flagP + 0x130) + 0x70, 0x28);
        int32_t* i_2 = result->head[6];
        int16_t idx;

        for (int32_t* i = *i_2; i; i = *i)
        {
            if (*(i_2 + 0x29) && *i_2[2])
            {
                long double x87_r7_2 = *DynObj_UpdateDynTree_4(*i_2[2]) - *(flagP + 0x20);
                int32_t* tmpD2 = i_2[2];
                double v_58 = x87_r7_2;
                long double x87_r7_4 = *(DynObj_UpdateDynTree_4(*tmpD2) + 8) - *(flagP + 0x28);
                int32_t* objC5 = i_2[2];
                double v_50 = x87_r7_4;
                long double x87_r7_6 = *(DynObj_UpdateDynTree_4(*objC5) + 0x10) - *(flagP + 0x30);
                double v_48_1 = x87_r7_6;
                float v_1c;
                float v_10;
                double v_40 = v_10 * x87_r7_6 + v_1c * v_50 + v_28 * v_58;
                float v_24;
                float v_18;
                float v_c;
                double v_38_1 = v_c * x87_r7_6 + v_18 * v_50 + v_24 * v_58;
                float v_20;
                float v_14;
                float v_8;
                double v_30_1 = v_8 * x87_r7_6 + v_14 * v_50 + v_20 * v_58;
                memcpy(&v_58, &v_40, 0x18);
                char v_90;
                memcpy(&v_90, &v_40, 0x18);
                WeaponType_GetConfig();
                v_68 = a1;
                float v_5c_1 = Sys_ReadFileBlock_11(&v_58);
                memcpy(&v_40, &v_58, 0x18);
                v_30_1 = 0;
                *(&v_30_1 + 4) = 0;
                Sys_FreeMemory_11(&v_40);
                Sys_FreeMemory_11(&v_58);
                v_64 = Sys_DispatchOpcode_9(v_30_1 * v_48_1 + v_38_1 * v_50 + v_40 * v_58);
                long double x87_r1_2 = v_48_1;
                long double f10_1 = 0.0;
                x87_r1_2 - f10_1;
                idx = 2;

                if (*(&((x87_r1_2 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r1_2, f10_1) ? 1 : 0) << 0xa
                    | (x87_r1_2 == f10_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
                {
                    v_64 = -(v_64);
                    idx = 2;
                }

                ctxB = 1;
                break;
            }

            i_2 = i;
        }

        if (!*(flagP + 0x1d8))
        {
            if (ctxB)
                *(flagP + 0x1d4) = 0;
        }
        else if (ctxB)
            *(flagP + 0x1d4) = 0;
        else
            *(flagP + 0x1d4) = 0x5a;

        int32_t valA13 = *(flagP + 0x1d4);
        *(flagP + 0x1d8) = ctxB;

        if (!valA13)
        {
            *(flagP + 0x1dc) = v_64;
            *(flagP + 0x1e0) = v_68;
        }
        else
        {
            v_64 = *(flagP + 0x1dc);
            v_68 = *(flagP + 0x1e0);
            *(flagP + 0x1d4) = valA13 - 1;
        }

🚫🚫        /* unimplemented  {fld fp0, dword [objC+0x28]} */
⋯        long double f0_1 = 6.28318548.0f;
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
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x10]} */
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

⋯            long double f5_1 = 3.14159274.0f;
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
🚫🚫                /* unimplemented  {fld fp0, dword [esp+0x10]} */
🚫🚫                /* unimplemented  {fadd dword [&g_5334a8]} */
🚫🚫🚫                v_68 = /* v_68 = unimplemented  {fstp dword [esp+0x10], fp0} */;
                /* unimplemented  {fstp dword [esp+0x10], fp0} */
            }
        }

🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x1bc]} */
⋯        long double f1_1 = v_64;
        /* unimplemented  {fcomp fp0, dword [esp+0x14]} f- f1_1 */ - f1_1;
        bool c0_5 = /* bool c0_5 =
            unimplemented  {fcomp fp0, dword [esp+0x14]} f< f1_1 */ < f1_1;
        bool c2_5 = FCMP_UO(/* bool c2_5 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0x14]}, f1_1) */, f1_1);
        bool c3_5 = /* bool c3_5 =
            unimplemented  {fcomp fp0, dword [esp+0x14]} f== f1_1 */ == f1_1;
        /* unimplemented  {fcomp fp0, dword [esp+0x14]} */
        int16_t top_8;

        if (!(*(&((c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x1bc]} */
⋯            long double f3_1 = v_64;
            /* unimplemented  {fcomp fp0, dword [esp+0x14]} f- f3_1 */ - f3_1;
            bool c0_7 = /* bool c0_7 =
                unimplemented  {fcomp fp0, dword [esp+0x14]} f< f3_1 */ < f3_1;
            bool c2_7 = FCMP_UO(/* bool c2_7 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0x14]}, f3_1) */, f3_1);
            bool c3_7 = /* bool c3_7 =
                unimplemented  {fcomp fp0, dword [esp+0x14]} f== f3_1 */ == f3_1;
            /* unimplemented  {fcomp fp0, dword [esp+0x14]} */
            top_8 = idx;

            if (!(*(&((c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
                | (top_8 & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld fp0, dword [flagP+0x1bc]} */
🚫🚫                /* unimplemented  {fsub fp0, dword [objC+0x30]} */
🚫🚫                *(flagP + 0x1bc) = /* *(flagP i+ 0x1bc) =
                    unimplemented  {fst dword [flagP+0x1bc], fp0} */;
⋯                long double f7_1 = v_64;
                /* unimplemented  {fcomp fp0, dword [esp+0x14]} f- f7_1 */ - f7_1;
                bool c0_8 = /* bool c0_8 =
                    unimplemented  {fcomp fp0, dword [esp+0x14]} f< f7_1 */ < f7_1;
                bool c2_8 = FCMP_UO(/* bool c2_8 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0x14]}, f7_1) */,
                    f7_1);
                bool c3_8 = /* bool c3_8 =
                    unimplemented  {fcomp fp0, dword [esp+0x14]} f== f7_1 */ == f7_1;
                /* unimplemented  {fcomp fp0, dword [esp+0x14]} */

                if (*(&((c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe
                        | (top_8 & 7) << 0xb) + 1) & 1)
                    *(flagP + 0x1bc) = v_64;
            }
        }
        else
        {
🚫🚫            /* unimplemented  {fld fp0, dword [objC+0x30]} */
🚫🚫            /* unimplemented  {fadd dword [flagP+0x1bc]} */
🚫🚫            *(flagP + 0x1bc) =
⋯            long double f4_1 = v_64;
            /* unimplemented  {fcomp fp0, dword [esp+0x14]} f- f4_1 */ - f4_1;
            bool c0_6 = /* bool c0_6 =
                unimplemented  {fcomp fp0, dword [esp+0x14]} f< f4_1 */ < f4_1;
            bool c2_6 = FCMP_UO(/* bool c2_6 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0x14]}, f4_1) */, f4_1);
            bool c3_6 = /* bool c3_6 =
                unimplemented  {fcomp fp0, dword [esp+0x14]} f== f4_1 */ == f4_1;
            /* unimplemented  {fcomp fp0, dword [esp+0x14]} */
            top_8 = idx;

            if (!(*(&((c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                    | (top_8 & 7) << 0xb) + 1) & 0x41))
                *(flagP + 0x1bc) = v_64;
        }

🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x1c0]} */
⋯        long double f6_1 = v_68;
        /* unimplemented  {fcomp fp0, dword [esp+0x10]} f- f6_1 */ - f6_1;
        bool c0_9 = /* bool c0_9 =
            unimplemented  {fcomp fp0, dword [esp+0x10]} f< f6_1 */ < f6_1;
        bool c2_9 = FCMP_UO(/* bool c2_9 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0x10]}, f6_1) */, f6_1);
        bool c3_9 = /* bool c3_9 =
            unimplemented  {fcomp fp0, dword [esp+0x10]} f== f6_1 */ == f6_1;
        /* unimplemented  {fcomp fp0, dword [esp+0x10]} */
        int16_t top_14;

        if (!(*(&((c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa | (c3_9 ? 1 : 0) << 0xe
            | (top_8 & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x1c0]} */
⋯            long double f8_1 = v_68;
            /* unimplemented  {fcomp fp0, dword [esp+0x10]} f- f8_1 */ - f8_1;
            bool c0_11 = /* bool c0_11 =
                unimplemented  {fcomp fp0, dword [esp+0x10]} f< f8_1 */ < f8_1;
            bool c2_11 = FCMP_UO(/* bool c2_11 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0x10]}, f8_1) */, f8_1);
            bool c3_11 = /* bool c3_11 =
                unimplemented  {fcomp fp0, dword [esp+0x10]} f== f8_1 */ == f8_1;
            /* unimplemented  {fcomp fp0, dword [esp+0x10]} */
            top_14 = top_8;

            if (!(*(&((c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa | (c3_11 ? 1 : 0) << 0xe
                | (top_14 & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld fp0, dword [flagP+0x1c0]} */
🚫🚫                /* unimplemented  {fsub fp0, dword [objC+0x34]} */
🚫🚫                *(flagP + 0x1c0) = /* *(flagP i+ 0x1c0) =
                    unimplemented  {fst dword [flagP+0x1c0], fp0} */;
⋯                long double f12_1 = v_68;
                /* unimplemented  {fcomp fp0, dword [esp+0x10]} f- f12_1 */ - f12_1;
                bool c0_12 = /* bool c0_12 =
                    unimplemented  {fcomp fp0, dword [esp+0x10]} f< f12_1 */ < f12_1;
                bool c2_12 = FCMP_UO(/* bool c2_12 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0x10]}, f12_1) */,
                    f12_1);
                bool c3_12 = /* bool c3_12 =
                    unimplemented  {fcomp fp0, dword [esp+0x10]} f== f12_1 */ == f12_1;
                /* unimplemented  {fcomp fp0, dword [esp+0x10]} */

                if (*(&((c0_12 ? 1 : 0) << 8 | (c2_12 ? 1 : 0) << 0xa | (c3_12 ? 1 : 0) << 0xe
                        | (top_14 & 7) << 0xb) + 1) & 1)
                    *(flagP + 0x1c0) = v_68;
            }
        }
        else
        {
🚫🚫            /* unimplemented  {fld fp0, dword [objC+0x34]} */
🚫🚫            /* unimplemented  {fadd dword [flagP+0x1c0]} */
🚫🚫            *(flagP + 0x1c0) =
⋯            long double f9_1 = v_68;
            /* unimplemented  {fcomp fp0, dword [esp+0x10]} f- f9_1 */ - f9_1;
            bool c0_10 = /* bool c0_10 =
                unimplemented  {fcomp fp0, dword [esp+0x10]} f< f9_1 */ < f9_1;
            bool c2_10 = FCMP_UO(/* bool c2_10 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0x10]}, f9_1) */, f9_1);
            bool c3_10 = /* bool c3_10 =
                unimplemented  {fcomp fp0, dword [esp+0x10]} f== f9_1 */ == f9_1;
            /* unimplemented  {fcomp fp0, dword [esp+0x10]} */
            top_14 = top_8;

            if (!(*(&((c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
                    | (top_14 & 7) << 0xb) + 1) & 0x41))
                *(flagP + 0x1c0) = v_68;
        }

        AI_TakeCover_30(flagP);
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x1bc]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [esp+0x18]} */
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

🚫🚫🚫        a2 = /* a2 = unimplemented  {fstp dword [esp+0x7c], fp0} */;
        /* unimplemented  {fstp dword [esp+0x7c], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x1c0]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [esp+0x10]} */
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

        if (!ctxB)
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
            top_22 = top_14;
            AI_MoveToNode_30(flagP, 0);
        }
        else
        {
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x7c]} */
⋯            long double f14_1 = 0.0872664675.0f;
            /* unimplemented  {fcomp fp0, dword [&g_53387c]} f- f14_1 */ - f14_1;
            bool c0_15 = /* bool c0_15 =
                unimplemented  {fcomp fp0, dword [&g_53387c]} f< f14_1 */ < f14_1;
            bool c2_15 = FCMP_UO(/* bool c2_15 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [&g_53387c]}, f14_1) */,
                f14_1);
            bool c3_15 = /* bool c3_15 =
                unimplemented  {fcomp fp0, dword [&g_53387c]} f== f14_1 */ == f14_1;
            /* unimplemented  {fcomp fp0, dword [&g_53387c]} */
            int32_t srcS3;

            if (!(*(&((c0_15 ? 1 : 0) << 8 | (c2_15 ? 1 : 0) << 0xa | (c3_15 ? 1 : 0) << 0xe
                | ((top_14 - 1) & 7) << 0xb) + 1) & 1))
            {
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
                top_22 = top_14;
                srcS3 = 0;
            }
            else
            {
⋯                long double f15_1 = 0.0872664675.0f;
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
                    srcS3 = 0;
                else
                {
🚫🚫                    /* unimplemented  {fld fp0, dword [valA+0x5c]} */
🚫🚫                    /* unimplemented  {fld fp0, fp0} */
🚫🚫                    /* unimplemented  {fmul fp0, fp1} */
🚫🚫                    /* unimplemented  {fld fp0, dword [esp+0x1c]} */
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

                    srcS3 = *(&((c0_17 ? 1 : 0) << 8 | (c2_17 ? 1 : 0) << 0xa
                        | (c3_17 ? 1 : 0) << 0xe | ((top_22 - 1) & 7) << 0xb) + 1) & 0x41 ? 0 : 1;
                }
            }

            AI_MoveToNode_30(flagP, srcS3);

            if (srcS3)
            {
🚫🚫                /* unimplemented  {fld fp0, dword [objC+0x58]} */
🚫🚫                /* unimplemented  {fadd dword [flagP+0x1e4]} */
🚫🚫🚫                *(flagP + 0x1e4) = /* *(flagP i+ 0x1e4) =
                    unimplemented  {fstp dword [flagP+0x1e4], fp0} */;
                /* unimplemented  {fstp dword [flagP+0x1e4], fp0} */
            }
        }

🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x14]} */
🚫🚫        /* unimplemented  {fld fp0, dword [objC+0x24]} */
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
🚫🚫            /* unimplemented  {fld fp0, dword [objC+0x20]} */
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
🚫🚫                /* unimplemented  {fld fp0, dword [objC+0x20]} */
            }
        }
        else
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫            top_33 = top_22 - 1;
            /* unimplemented  {fld fp0, dword [objC+0x24]} */
        }

🚫🚫        /* unimplemented  {fld fp0, dword [objC+0x28]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x10]} */
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
🚫🚫        /* unimplemented  {fld fp0, dword [objC+0x28]} */
⋯        long double f16_1 = v_68;
        /* unimplemented  {fcomp fp0, dword [esp+0x10]} f- f16_1 */ - f16_1;
        bool c0_21 = /* bool c0_21 =
            unimplemented  {fcomp fp0, dword [esp+0x10]} f< f16_1 */ < f16_1;
        bool c2_21 = FCMP_UO(/* bool c2_21 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0x10]}, f16_1) */, f16_1);
        bool c3_21 = /* bool c3_21 =
            unimplemented  {fcomp fp0, dword [esp+0x10]} f== f16_1 */ == f16_1;
        /* unimplemented  {fcomp fp0, dword [esp+0x10]} */
        int16_t top_42 = top_39 + 1;

        if (*(&((c0_21 ? 1 : 0) << 8 | (c2_21 ? 1 : 0) << 0xa | (c3_21 ? 1 : 0) << 0xe
            | (top_42 & 7) << 0xb) + 1) & 1)
        {
🚫🚫            top_39 = top_42 - 1;
            /* unimplemented  {fld fp0, dword [objC+0x28]} */
🚫🚫🚫        label_46f839:
            float v_68_1 = /* float v_68_1 = unimplemented  {fstp dword [esp+0x10], fp0} */;
            /* unimplemented  {fstp dword [esp+0x10], fp0} */
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

🚫🚫🚫        a2 = /* a2 = unimplemented  {fstp dword [esp+0x7c], fp0} */;
        /* unimplemented  {fstp dword [esp+0x7c], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x1c0]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [esp+0x10]} */
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

🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x7c]} */
⋯        long double f19_1 = 0.0349065848.0f;
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
    label_46f8ae: ;
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
⋯            long double f20_1 = 0.0349065848.0f;
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
            int32_t tmpD8 = g_afa7e0;

            do
            {
                int32_t* srcS4 = *i_1;
                void* valA26;

                if (!srcS4)
                    valA26 = nullptr;
                else
                {
                    int32_t valA23 = *srcS4;
                    int32_t valA24 = -(valA23);
                    valA26 = (valA24 - valA24) & srcS4;
                }

                *((tmpD8 << 2) + &g_afa6e0) = valA26;
                int32_t tmpD9 = tmpD8 + 1;
                int32_t valA27 = 0;
                g_afa7e0 = tmpD9;
                valA27 = i_1[7];
                result = *((valA27 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i_1);
                    tmpD9 = g_afa7e0;
                }

                i_1 = *((tmpD9 << 2) + &g_afa6dc);
                tmpD8 = tmpD9 - 1;
                g_afa7e0 = tmpD8;
            } while (i_1);
        }
    }

    return result;
}
