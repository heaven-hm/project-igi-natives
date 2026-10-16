#include "0046F390-AIStationaryGun_Setup.h"
/* 0x0046f390 AIStationaryGun_Setup full linked: callers=0 callees=20 */
struct status_msg* sub_46f390(long double a1 @ st0, float a2)

{
    float ebp = a2;
    float var_64 = 0f;
    float var_68 = 0f;
    char ebx = 0;
    Table_GetAt(ebp + 0x1c4, 0);
    void* esi = *(ebp + 0x130);
    struct status_msg* result_1 = nullptr;
    uint32_t eax_2 = sub_489630();
    int32_t edx = 0;
    edx = *(esi + 0x1c);
    int32_t eax_3 = *(((eax_2 * 0x180 + edx) << 2) + &g_a96ae0);

    if (eax_3)
        eax_3(esi, &result_1);

    struct status_msg* result = result_1;

    if (result)
    {
        float var_28;
        memcpy(&var_28, *(ebp + 0x130) + 0x70, 0x28);
        int32_t* i_2 = result->head[6];
        int16_t top;

        for (int32_t* i = *i_2; i; i = *i)
        {
            if (*(i_2 + 0x29) && *i_2[2])
            {
                long double x87_r7_2 = *sub_4c3440(*i_2[2]) - *(ebp + 0x20);
                int32_t* edx_2 = i_2[2];
                double var_58 = x87_r7_2;
                long double x87_r7_4 = *(sub_4c3440(*edx_2) + 8) - *(ebp + 0x28);
                int32_t* ecx_5 = i_2[2];
                double var_50 = x87_r7_4;
                long double x87_r7_6 = *(sub_4c3440(*ecx_5) + 0x10) - *(ebp + 0x30);
                double var_48_1 = x87_r7_6;
                float var_1c;
                float var_10;
                double var_40 = var_10 * x87_r7_6 + var_1c * var_50 + var_28 * var_58;
                float var_24;
                float var_18;
                float var_c;
                double var_38_1 = var_c * x87_r7_6 + var_18 * var_50 + var_24 * var_58;
                float var_20;
                float var_14;
                float var_8;
                double var_30_1 = var_8 * x87_r7_6 + var_14 * var_50 + var_20 * var_58;
                memcpy(&var_58, &var_40, 0x18);
                void var_90;
                memcpy(&var_90, &var_40, 0x18);
                WeaponType_GetConfig();
                var_68 = a1;
                float var_5c_1 = sub_4b3160(&var_58);
                memcpy(&var_40, &var_58, 0x18);
                var_30_1 = 0;
                *(&var_30_1 + 4) = 0;
                sub_4b3100(&var_40);
                sub_4b3100(&var_58);
                var_64 = sub_4b2760(var_30_1 * var_48_1 + var_38_1 * var_50 + var_40 * var_58);
                long double x87_r1_2 = var_48_1;
                long double temp10_1 = 0.0;
                x87_r1_2 - temp10_1;
                top = 2;

                if (*(&((x87_r1_2 < temp10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r1_2, temp10_1) ? 1 : 0) << 0xa
                    | (x87_r1_2 == temp10_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
                {
                    var_64 = -(var_64);
                    top = 2;
                }

                ebx = 1;
                break;
            }

            i_2 = i;
        }

        if (!*(ebp + 0x1d8))
        {
            if (ebx)
                *(ebp + 0x1d4) = 0;
        }
        else if (ebx)
            *(ebp + 0x1d4) = 0;
        else
            *(ebp + 0x1d4) = 0x5a;

        int32_t eax_13 = *(ebp + 0x1d4);
        *(ebp + 0x1d8) = ebx;

        if (!eax_13)
        {
            *(ebp + 0x1dc) = var_64;
            *(ebp + 0x1e0) = var_68;
        }
        else
        {
            var_64 = *(ebp + 0x1dc);
            var_68 = *(ebp + 0x1e0);
            *(ebp + 0x1d4) = eax_13 - 1;
        }

🚫🚫        /* unimplemented  {fld st0, dword [ecx+0x28]} */
⋯        long double temp0_1 = 6.28318548f;
        /* unimplemented  {fcomp st0, dword [&g_5334a8]} f- temp0_1 */ - temp0_1;
        bool c0_2 = /* bool c0_2 =
            unimplemented  {fcomp st0, dword [&g_5334a8]} f< temp0_1 */ < temp0_1;
        bool c2_2 = FCMP_UO(/* bool c2_2 =
            is_unordered.t(unimplemented  {fcomp st0, dword [&g_5334a8]}, temp0_1) */, temp0_1);
        bool c3_2 = /* bool c3_2 =
            unimplemented  {fcomp st0, dword [&g_5334a8]} f== temp0_1 */ == temp0_1;
        /* unimplemented  {fcomp st0, dword [&g_5334a8]} */

        if (!(*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
            | (top & 7) << 0xb) + 1) & 0x41))
        {
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x10]} */
🚫🚫            /* unimplemented  {fsub st0, dword [ebp+0x1c0]} */
🚫🚫🚫🚫🚫            long double temp2_1 = 0f;
            /* unimplemented  {fcom st0, dword [&g_5333ec]} f- temp2_1 */ - temp2_1;
            bool c0_3 = /* bool c0_3 =
                unimplemented  {fcom st0, dword [&g_5333ec]} f< temp2_1 */ < temp2_1;
            bool c2_3 = FCMP_UO(/* bool c2_3 =
                is_unordered.t(unimplemented  {fcom st0, dword [&g_5333ec]}, temp2_1) */,
                temp2_1);
            bool c3_3 = /* bool c3_3 =
                unimplemented  {fcom st0, dword [&g_5333ec]} f== temp2_1 */ == temp2_1;

            if (*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                    | ((top - 1) & 7) << 0xb) + 1) & 1)
🚫🚫                /* unimplemented  {fchs } */

⋯            long double temp5_1 = 3.14159274f;
            /* unimplemented  {fcomp st0, dword [&g_533400]} f- temp5_1 */ - temp5_1;
            bool c0_4 = /* bool c0_4 =
                unimplemented  {fcomp st0, dword [&g_533400]} f< temp5_1 */ < temp5_1;
            bool c2_4 = FCMP_UO(/* bool c2_4 =
                is_unordered.t(unimplemented  {fcomp st0, dword [&g_533400]}, temp5_1) */,
                temp5_1);
            bool c3_4 = /* bool c3_4 =
                unimplemented  {fcomp st0, dword [&g_533400]} f== temp5_1 */ == temp5_1;
            /* unimplemented  {fcomp st0, dword [&g_533400]} */

            if (!(*(&((c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                | (top & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld st0, dword [esp+0x10]} */
🚫🚫                /* unimplemented  {fadd dword [&g_5334a8]} */
🚫🚫🚫                var_68 = /* var_68 = unimplemented  {fstp dword [esp+0x10], st0} */;
                /* unimplemented  {fstp dword [esp+0x10], st0} */
            }
        }

🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x1bc]} */
⋯        long double temp1_1 = var_64;
        /* unimplemented  {fcomp st0, dword [esp+0x14]} f- temp1_1 */ - temp1_1;
        bool c0_5 = /* bool c0_5 =
            unimplemented  {fcomp st0, dword [esp+0x14]} f< temp1_1 */ < temp1_1;
        bool c2_5 = FCMP_UO(/* bool c2_5 =
            is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x14]}, temp1_1) */, temp1_1);
        bool c3_5 = /* bool c3_5 =
            unimplemented  {fcomp st0, dword [esp+0x14]} f== temp1_1 */ == temp1_1;
        /* unimplemented  {fcomp st0, dword [esp+0x14]} */
        int16_t top_8;

        if (!(*(&((c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
            | (top & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x1bc]} */
⋯            long double temp3_1 = var_64;
            /* unimplemented  {fcomp st0, dword [esp+0x14]} f- temp3_1 */ - temp3_1;
            bool c0_7 = /* bool c0_7 =
                unimplemented  {fcomp st0, dword [esp+0x14]} f< temp3_1 */ < temp3_1;
            bool c2_7 = FCMP_UO(/* bool c2_7 =
                is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x14]}, temp3_1) */, temp3_1);
            bool c3_7 = /* bool c3_7 =
                unimplemented  {fcomp st0, dword [esp+0x14]} f== temp3_1 */ == temp3_1;
            /* unimplemented  {fcomp st0, dword [esp+0x14]} */
            top_8 = top;

            if (!(*(&((c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
                | (top_8 & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld st0, dword [ebp+0x1bc]} */
🚫🚫                /* unimplemented  {fsub st0, dword [ecx+0x30]} */
🚫🚫                *(ebp + 0x1bc) = /* *(ebp i+ 0x1bc) =
                    unimplemented  {fst dword [ebp+0x1bc], st0} */;
⋯                long double temp7_1 = var_64;
                /* unimplemented  {fcomp st0, dword [esp+0x14]} f- temp7_1 */ - temp7_1;
                bool c0_8 = /* bool c0_8 =
                    unimplemented  {fcomp st0, dword [esp+0x14]} f< temp7_1 */ < temp7_1;
                bool c2_8 = FCMP_UO(/* bool c2_8 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x14]}, temp7_1) */,
                    temp7_1);
                bool c3_8 = /* bool c3_8 =
                    unimplemented  {fcomp st0, dword [esp+0x14]} f== temp7_1 */ == temp7_1;
                /* unimplemented  {fcomp st0, dword [esp+0x14]} */

                if (*(&((c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe
                        | (top_8 & 7) << 0xb) + 1) & 1)
                    *(ebp + 0x1bc) = var_64;
            }
        }
        else
        {
🚫🚫            /* unimplemented  {fld st0, dword [ecx+0x30]} */
🚫🚫            /* unimplemented  {fadd dword [ebp+0x1bc]} */
🚫🚫            *(ebp + 0x1bc) = /* *(ebp i+ 0x1bc) = unimplemented  {fst dword [ebp+0x1bc], st0} */;
⋯            long double temp4_1 = var_64;
            /* unimplemented  {fcomp st0, dword [esp+0x14]} f- temp4_1 */ - temp4_1;
            bool c0_6 = /* bool c0_6 =
                unimplemented  {fcomp st0, dword [esp+0x14]} f< temp4_1 */ < temp4_1;
            bool c2_6 = FCMP_UO(/* bool c2_6 =
                is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x14]}, temp4_1) */, temp4_1);
            bool c3_6 = /* bool c3_6 =
                unimplemented  {fcomp st0, dword [esp+0x14]} f== temp4_1 */ == temp4_1;
            /* unimplemented  {fcomp st0, dword [esp+0x14]} */
            top_8 = top;

            if (!(*(&((c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                    | (top_8 & 7) << 0xb) + 1) & 0x41))
                *(ebp + 0x1bc) = var_64;
        }

🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x1c0]} */
⋯        long double temp6_1 = var_68;
        /* unimplemented  {fcomp st0, dword [esp+0x10]} f- temp6_1 */ - temp6_1;
        bool c0_9 = /* bool c0_9 =
            unimplemented  {fcomp st0, dword [esp+0x10]} f< temp6_1 */ < temp6_1;
        bool c2_9 = FCMP_UO(/* bool c2_9 =
            is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x10]}, temp6_1) */, temp6_1);
        bool c3_9 = /* bool c3_9 =
            unimplemented  {fcomp st0, dword [esp+0x10]} f== temp6_1 */ == temp6_1;
        /* unimplemented  {fcomp st0, dword [esp+0x10]} */
        int16_t top_14;

        if (!(*(&((c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa | (c3_9 ? 1 : 0) << 0xe
            | (top_8 & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x1c0]} */
⋯            long double temp8_1 = var_68;
            /* unimplemented  {fcomp st0, dword [esp+0x10]} f- temp8_1 */ - temp8_1;
            bool c0_11 = /* bool c0_11 =
                unimplemented  {fcomp st0, dword [esp+0x10]} f< temp8_1 */ < temp8_1;
            bool c2_11 = FCMP_UO(/* bool c2_11 =
                is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x10]}, temp8_1) */, temp8_1);
            bool c3_11 = /* bool c3_11 =
                unimplemented  {fcomp st0, dword [esp+0x10]} f== temp8_1 */ == temp8_1;
            /* unimplemented  {fcomp st0, dword [esp+0x10]} */
            top_14 = top_8;

            if (!(*(&((c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa | (c3_11 ? 1 : 0) << 0xe
                | (top_14 & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld st0, dword [ebp+0x1c0]} */
🚫🚫                /* unimplemented  {fsub st0, dword [ecx+0x34]} */
🚫🚫                *(ebp + 0x1c0) = /* *(ebp i+ 0x1c0) =
                    unimplemented  {fst dword [ebp+0x1c0], st0} */;
⋯                long double temp12_1 = var_68;
                /* unimplemented  {fcomp st0, dword [esp+0x10]} f- temp12_1 */ - temp12_1;
                bool c0_12 = /* bool c0_12 =
                    unimplemented  {fcomp st0, dword [esp+0x10]} f< temp12_1 */ < temp12_1;
                bool c2_12 = FCMP_UO(/* bool c2_12 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x10]}, temp12_1) */,
                    temp12_1);
                bool c3_12 = /* bool c3_12 =
                    unimplemented  {fcomp st0, dword [esp+0x10]} f== temp12_1 */ == temp12_1;
                /* unimplemented  {fcomp st0, dword [esp+0x10]} */

                if (*(&((c0_12 ? 1 : 0) << 8 | (c2_12 ? 1 : 0) << 0xa | (c3_12 ? 1 : 0) << 0xe
                        | (top_14 & 7) << 0xb) + 1) & 1)
                    *(ebp + 0x1c0) = var_68;
            }
        }
        else
        {
🚫🚫            /* unimplemented  {fld st0, dword [ecx+0x34]} */
🚫🚫            /* unimplemented  {fadd dword [ebp+0x1c0]} */
🚫🚫            *(ebp + 0x1c0) = /* *(ebp i+ 0x1c0) = unimplemented  {fst dword [ebp+0x1c0], st0} */;
⋯            long double temp9_1 = var_68;
            /* unimplemented  {fcomp st0, dword [esp+0x10]} f- temp9_1 */ - temp9_1;
            bool c0_10 = /* bool c0_10 =
                unimplemented  {fcomp st0, dword [esp+0x10]} f< temp9_1 */ < temp9_1;
            bool c2_10 = FCMP_UO(/* bool c2_10 =
                is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x10]}, temp9_1) */, temp9_1);
            bool c3_10 = /* bool c3_10 =
                unimplemented  {fcomp st0, dword [esp+0x10]} f== temp9_1 */ == temp9_1;
            /* unimplemented  {fcomp st0, dword [esp+0x10]} */
            top_14 = top_8;

            if (!(*(&((c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
                    | (top_14 & 7) << 0xb) + 1) & 0x41))
                *(ebp + 0x1c0) = var_68;
        }

        sub_46f9d0(ebp);
🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x1bc]} */
🚫🚫        /* unimplemented  {fsub st0, dword [esp+0x18]} */
🚫🚫🚫🚫🚫        long double temp11_1 = 0f;
        /* unimplemented  {fcom st0, dword [&g_5333ec]} f- temp11_1 */ - temp11_1;
        bool c0_13 = /* bool c0_13 =
            unimplemented  {fcom st0, dword [&g_5333ec]} f< temp11_1 */ < temp11_1;
        bool c2_13 = FCMP_UO(/* bool c2_13 =
            is_unordered.t(unimplemented  {fcom st0, dword [&g_5333ec]}, temp11_1) */, temp11_1);
        bool c3_13 = /* bool c3_13 =
            unimplemented  {fcom st0, dword [&g_5333ec]} f== temp11_1 */ == temp11_1;

        if (*(&((c0_13 ? 1 : 0) << 8 | (c2_13 ? 1 : 0) << 0xa | (c3_13 ? 1 : 0) << 0xe
                | ((top_14 - 1) & 7) << 0xb) + 1) & 1)
🚫🚫            /* unimplemented  {fchs } */

🚫🚫🚫        a2 = /* a2 = unimplemented  {fstp dword [esp+0x7c], st0} */;
        /* unimplemented  {fstp dword [esp+0x7c], st0} */
🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x1c0]} */
🚫🚫        /* unimplemented  {fsub st0, dword [esp+0x10]} */
🚫🚫🚫🚫🚫        long double temp13_1 = 0f;
        /* unimplemented  {fcom st0, dword [&g_5333ec]} f- temp13_1 */ - temp13_1;
        bool c0_14 = /* bool c0_14 =
            unimplemented  {fcom st0, dword [&g_5333ec]} f< temp13_1 */ < temp13_1;
        bool c2_14 = FCMP_UO(/* bool c2_14 =
            is_unordered.t(unimplemented  {fcom st0, dword [&g_5333ec]}, temp13_1) */, temp13_1);
        bool c3_14 = /* bool c3_14 =
            unimplemented  {fcom st0, dword [&g_5333ec]} f== temp13_1 */ == temp13_1;

        if (*(&((c0_14 ? 1 : 0) << 8 | (c2_14 ? 1 : 0) << 0xa | (c3_14 ? 1 : 0) << 0xe
                | ((top_14 - 1) & 7) << 0xb) + 1) & 1)
🚫🚫            /* unimplemented  {fchs } */

        int16_t top_22;

        if (!ebx)
        {
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
            top_22 = top_14;
            sub_46f950(ebp, 0);
        }
        else
        {
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x7c]} */
⋯            long double temp14_1 = 0.0872664675f;
            /* unimplemented  {fcomp st0, dword [&g_53387c]} f- temp14_1 */ - temp14_1;
            bool c0_15 = /* bool c0_15 =
                unimplemented  {fcomp st0, dword [&g_53387c]} f< temp14_1 */ < temp14_1;
            bool c2_15 = FCMP_UO(/* bool c2_15 =
                is_unordered.t(unimplemented  {fcomp st0, dword [&g_53387c]}, temp14_1) */,
                temp14_1);
            bool c3_15 = /* bool c3_15 =
                unimplemented  {fcomp st0, dword [&g_53387c]} f== temp14_1 */ == temp14_1;
            /* unimplemented  {fcomp st0, dword [&g_53387c]} */
            int32_t esi_3;

            if (!(*(&((c0_15 ? 1 : 0) << 8 | (c2_15 ? 1 : 0) << 0xa | (c3_15 ? 1 : 0) << 0xe
                | ((top_14 - 1) & 7) << 0xb) + 1) & 1))
            {
🚫🚫🚫                /* unimplemented  {fstp st0, st0} */
                /* unimplemented  {fstp st0, st0} */
                top_22 = top_14;
                esi_3 = 0;
            }
            else
            {
⋯                long double temp15_1 = 0.0872664675f;
                /* unimplemented  {fcomp st0, dword [&g_53387c]} f- temp15_1 */ - temp15_1;
                bool c0_16 = /* bool c0_16 =
                    unimplemented  {fcomp st0, dword [&g_53387c]} f< temp15_1 */ < temp15_1;
                bool c2_16 = FCMP_UO(/* bool c2_16 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [&g_53387c]}, temp15_1) */,
                    temp15_1);
                bool c3_16 = /* bool c3_16 =
                    unimplemented  {fcomp st0, dword [&g_53387c]} f== temp15_1 */ == temp15_1;
                /* unimplemented  {fcomp st0, dword [&g_53387c]} */
                top_22 = top_14;

                if (!(*(&((c0_16 ? 1 : 0) << 8 | (c2_16 ? 1 : 0) << 0xa | (c3_16 ? 1 : 0) << 0xe
                        | (top_22 & 7) << 0xb) + 1) & 1))
                    esi_3 = 0;
                else
                {
🚫🚫                    /* unimplemented  {fld st0, dword [eax+0x5c]} */
🚫🚫                    /* unimplemented  {fld st0, st0} */
🚫🚫                    /* unimplemented  {fmul st0, st1} */
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x1c]} */
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
🚫🚫🚫                    /* unimplemented  {fstp st0, st0} */
                    /* unimplemented  {fstp st0, st0} */

                    esi_3 = *(&((c0_17 ? 1 : 0) << 8 | (c2_17 ? 1 : 0) << 0xa
                        | (c3_17 ? 1 : 0) << 0xe | ((top_22 - 1) & 7) << 0xb) + 1) & 0x41 ? 0 : 1;
                }
            }

            sub_46f950(ebp, esi_3);

            if (esi_3)
            {
🚫🚫                /* unimplemented  {fld st0, dword [ecx+0x58]} */
🚫🚫                /* unimplemented  {fadd dword [ebp+0x1e4]} */
🚫🚫🚫                *(ebp + 0x1e4) = /* *(ebp i+ 0x1e4) =
                    unimplemented  {fstp dword [ebp+0x1e4], st0} */;
                /* unimplemented  {fstp dword [ebp+0x1e4], st0} */
            }
        }

🚫🚫        /* unimplemented  {fld st0, dword [esp+0x14]} */
🚫🚫        /* unimplemented  {fld st0, dword [ecx+0x24]} */
🚫🚫        /* unimplemented  {fld st0, st1} */
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
🚫🚫            /* unimplemented  {fld st0, dword [ecx+0x20]} */
🚫🚫            /* unimplemented  {fld st0, st1} */
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
🚫🚫🚫                /* unimplemented  {fstp st0, st0} */
                /* unimplemented  {fstp st0, st0} */
🚫🚫                /* unimplemented  {fld st0, dword [ecx+0x20]} */
            }
        }
        else
        {
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
🚫🚫            top_33 = top_22 - 1;
            /* unimplemented  {fld st0, dword [ecx+0x24]} */
        }

🚫🚫        /* unimplemented  {fld st0, dword [ecx+0x28]} */
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x10]} */
⋯        /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
            - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
        bool c0_20 = /* bool c0_20 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_20 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
        bool c2_20 = FCMP_UO(/* bool c2_20 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
            /* bool c2_20 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
        bool c3_20 = /* bool c3_20 =
            unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
            == /* bool c3_20 = unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
        /* unimplemented  {fcomp st0, st1} */
        int16_t top_39 = top_33 - 1;

        if (*(&((c0_20 ? 1 : 0) << 8 | (c2_20 ? 1 : 0) << 0xa | (c3_20 ? 1 : 0) << 0xe
                | (top_39 & 7) << 0xb) + 1) & 1)
            goto label_46f839;

🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫        /* unimplemented  {fld st0, dword [ecx+0x28]} */
⋯        long double temp16_1 = var_68;
        /* unimplemented  {fcomp st0, dword [esp+0x10]} f- temp16_1 */ - temp16_1;
        bool c0_21 = /* bool c0_21 =
            unimplemented  {fcomp st0, dword [esp+0x10]} f< temp16_1 */ < temp16_1;
        bool c2_21 = FCMP_UO(/* bool c2_21 =
            is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x10]}, temp16_1) */, temp16_1);
        bool c3_21 = /* bool c3_21 =
            unimplemented  {fcomp st0, dword [esp+0x10]} f== temp16_1 */ == temp16_1;
        /* unimplemented  {fcomp st0, dword [esp+0x10]} */
        int16_t top_42 = top_39 + 1;

        if (*(&((c0_21 ? 1 : 0) << 8 | (c2_21 ? 1 : 0) << 0xa | (c3_21 ? 1 : 0) << 0xe
            | (top_42 & 7) << 0xb) + 1) & 1)
        {
🚫🚫            top_39 = top_42 - 1;
            /* unimplemented  {fld st0, dword [ecx+0x28]} */
🚫🚫🚫        label_46f839:
            float var_68_1 = /* float var_68_1 = unimplemented  {fstp dword [esp+0x10], st0} */;
            /* unimplemented  {fstp dword [esp+0x10], st0} */
            top_42 = top_39 + 1;
        }

🚫🚫        /* unimplemented  {fsubr st0, dword [ebp+0x1bc]} */
🚫🚫🚫🚫🚫        long double temp17_1 = 0f;
        /* unimplemented  {fcom st0, dword [&g_5333ec]} f- temp17_1 */ - temp17_1;
        bool c0_22 = /* bool c0_22 =
            unimplemented  {fcom st0, dword [&g_5333ec]} f< temp17_1 */ < temp17_1;
        bool c2_22 = FCMP_UO(/* bool c2_22 =
            is_unordered.t(unimplemented  {fcom st0, dword [&g_5333ec]}, temp17_1) */, temp17_1);
        bool c3_22 = /* bool c3_22 =
            unimplemented  {fcom st0, dword [&g_5333ec]} f== temp17_1 */ == temp17_1;

        if (*(&((c0_22 ? 1 : 0) << 8 | (c2_22 ? 1 : 0) << 0xa | (c3_22 ? 1 : 0) << 0xe
                | (top_42 & 7) << 0xb) + 1) & 1)
🚫🚫            /* unimplemented  {fchs } */

🚫🚫🚫        a2 = /* a2 = unimplemented  {fstp dword [esp+0x7c], st0} */;
        /* unimplemented  {fstp dword [esp+0x7c], st0} */
🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x1c0]} */
🚫🚫        /* unimplemented  {fsub st0, dword [esp+0x10]} */
🚫🚫🚫🚫🚫        long double temp18_1 = 0f;
        /* unimplemented  {fcom st0, dword [&g_5333ec]} f- temp18_1 */ - temp18_1;
        bool c0_23 = /* bool c0_23 =
            unimplemented  {fcom st0, dword [&g_5333ec]} f< temp18_1 */ < temp18_1;
        bool c2_23 = FCMP_UO(/* bool c2_23 =
            is_unordered.t(unimplemented  {fcom st0, dword [&g_5333ec]}, temp18_1) */, temp18_1);
        bool c3_23 = /* bool c3_23 =
            unimplemented  {fcom st0, dword [&g_5333ec]} f== temp18_1 */ == temp18_1;

        if (*(&((c0_23 ? 1 : 0) << 8 | (c2_23 ? 1 : 0) << 0xa | (c3_23 ? 1 : 0) << 0xe
                | (top_42 & 7) << 0xb) + 1) & 1)
🚫🚫            /* unimplemented  {fchs } */

🚫🚫        /* unimplemented  {fld st0, dword [esp+0x7c]} */
⋯        long double temp19_1 = 0.0349065848f;
        /* unimplemented  {fcomp st0, dword [&g_533834]} f- temp19_1 */ - temp19_1;
        bool c0_24 = /* bool c0_24 =
            unimplemented  {fcomp st0, dword [&g_533834]} f< temp19_1 */ < temp19_1;
        bool c2_24 = FCMP_UO(/* bool c2_24 =
            is_unordered.t(unimplemented  {fcomp st0, dword [&g_533834]}, temp19_1) */,
            temp19_1);
        bool c3_24 = /* bool c3_24 =
            unimplemented  {fcomp st0, dword [&g_533834]} f== temp19_1 */ == temp19_1;
        /* unimplemented  {fcomp st0, dword [&g_533834]} */

        if (!(*(&((c0_24 ? 1 : 0) << 8 | (c2_24 ? 1 : 0) << 0xa | (c3_24 ? 1 : 0) << 0xe
            | (top_42 & 7) << 0xb) + 1) & 0x41))
        {
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
        label_46f8ae:
            result = *(ebp + 0x1d0);

            if (result)
                result = sub_4e6c30(result, ebp + 0x20);
            else
            {
                result = sub_4e6b00(ebp, *(ebp + 0x1b8) + 0x38);
                *(ebp + 0x1d0) = result;

                if (result)
                    result = sub_4e6c30(result, ebp + 0x20);
            }
        }
        else
        {
⋯            long double temp20_1 = 0.0349065848f;
            /* unimplemented  {fcomp st0, dword [&g_533834]} f- temp20_1 */ - temp20_1;
            bool c0_25 = /* bool c0_25 =
                unimplemented  {fcomp st0, dword [&g_533834]} f< temp20_1 */ < temp20_1;
            bool c2_25 = FCMP_UO(/* bool c2_25 =
                is_unordered.t(unimplemented  {fcomp st0, dword [&g_533834]}, temp20_1) */,
                temp20_1);
            bool c3_25 = /* bool c3_25 =
                unimplemented  {fcomp st0, dword [&g_533834]} f== temp20_1 */ == temp20_1;
            /* unimplemented  {fcomp st0, dword [&g_533834]} */

            if (!(*(&((c0_25 ? 1 : 0) << 8 | (c2_25 ? 1 : 0) << 0xa | (c3_25 ? 1 : 0) << 0xe
                    | ((top_42 + 1) & 7) << 0xb) + 1) & 0x41))
                goto label_46f8ae;

            result = *(ebp + 0x1d0);

            if (result)
            {
                result = sub_4e6c00(result);
                *(ebp + 0x1d0) = 0;
            }
        }

        int32_t* i_1 = *(ebp + 8);

        if (*i_1 && i_1)
        {
            int32_t edx_8 = g_afa7e0;

            do
            {
                int32_t* esi_4 = *i_1;
                void* eax_26;

                if (!esi_4)
                    eax_26 = nullptr;
                else
                {
                    int32_t eax_23 = *esi_4;
                    int32_t eax_24 = -(eax_23);
                    eax_26 = (eax_24 - eax_24) & esi_4;
                }

                *((edx_8 << 2) + &g_afa6e0) = eax_26;
                int32_t edx_9 = edx_8 + 1;
                int32_t eax_27 = 0;
                g_afa7e0 = edx_9;
                eax_27 = i_1[7];
                result = *((eax_27 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i_1);
                    edx_9 = g_afa7e0;
                }

                i_1 = *((edx_9 << 2) + &g_afa6dc);
                edx_8 = edx_9 - 1;
                g_afa7e0 = edx_8;
            } while (i_1);
        }
    }

    return result;
}
