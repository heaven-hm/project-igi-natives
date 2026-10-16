#include "gi_platform.h"
#include "00464800-AI_UpdatePatrol_23.h"
float AI_UpdatePatrol_23(float a1, float a2) __location("valA")

{
    int16_t idx = 0xffff;
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fptan(0.78539818525314331);

    if (!c2)
        idx = 0xfffe;

    float ctxB = a1;
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    a1 = /* a1 = unimplemented  {fstp dword [esp+0x14], fp0} */;
    /* unimplemented  {fstp dword [esp+0x14], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [ctxB+0x1e4]} */
⋯    long double f0 = a1;
    /* unimplemented  {fcomp fp0, dword [esp+0x14]} f- f0 */ - f0;
    bool c0 = /* bool c0 = unimplemented  {fcomp fp0, dword [esp+0x14]} f< f0 */ < f0;
    bool c2_1 = FCMP_UO(/* bool c2_1 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0x14]}, f0) */, f0);
    bool c3 = /* bool c3 = unimplemented  {fcomp fp0, dword [esp+0x14]} f== f0 */ == f0;
    /* unimplemented  {fcomp fp0, dword [esp+0x14]} */
    int16_t top_4 = idx + 2;
    int16_t valA =
        (c0 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe | (top_4 & 7) << 0xb;

    if ((*(int32_t*)(uintptr_t)(&valA + 1)) & 0x40)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [srcS+0x1b4]} */
🚫🚫        /* unimplemented  {fadd dword [srcS+0x114]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [&g_5335c0]} */
🚫🚫🚫        a2 = /* a2 = unimplemented  {fstp dword [esp+0x18], fp0} */;
        /* unimplemented  {fstp dword [esp+0x18], fp0} */
    }
    else
        a2 = (*(int32_t*)(uintptr_t)(a2 + 0x1b4));

    valA = (*(int32_t*)(uintptr_t)(ctxB + 0x138));
    char valA2;

    if (!valA)
        valA2 = Sys_PopStack_11(ctxB + 0x180);

    if (valA || !valA2)
        a2 = nullptr;

🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x18]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533400]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [ctxB+0x1e4]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x18]} */
⋯    long double f1 = 0.0f;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f1 */ - f1;
    bool c0_1 = /* bool c0_1 = unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f1 */ < f1;
    bool c2_2 = FCMP_UO(/* bool c2_2 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f1) */, f1);
    bool c3_1 = /* bool c3_1 =
        unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f1 */ == f1;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x18]} */

    if (*(&((c0_1 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | ((top_4 - 2) & 7) << 0xb) + 1) & 1)
🚫🚫        /* unimplemented  {fchs } */

⋯    long double f2 = 0.0599999987.0f;
    /* unimplemented  {fcomp fp0, dword [&g_533938]} f- f2 */ - f2;
    bool c0_2 = /* bool c0_2 = unimplemented  {fcomp fp0, dword [&g_533938]} f< f2 */ < f2;
    bool c2_3 = FCMP_UO(/* bool c2_3 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_533938]}, f2) */, f2);
    bool c3_2 = /* bool c3_2 =
        unimplemented  {fcomp fp0, dword [&g_533938]} f== f2 */ == f2;
    /* unimplemented  {fcomp fp0, dword [&g_533938]} */
    int16_t top_10 = top_4 - 1;

    if (*(
        &((c0_2 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe | (top_10 & 7) << 0xb)
        + 1) & 1)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x18]} */
⋯        long double f4_1 = 0.0f;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f4_1 */ - f4_1;
        bool c0_3 = /* bool c0_3 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f4_1 */ < f4_1;
        bool c2_4 = FCMP_UO(/* bool c2_4 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f4_1) */, f4_1);
        bool c3_3 = /* bool c3_3 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f4_1 */ == f4_1;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x18]} */

        if (*(&((c0_3 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                | ((top_10 - 1) & 7) << 0xb) + 1) & 1)
🚫🚫            /* unimplemented  {fchs } */

🚫🚫        /* unimplemented  {fmul fp0, qword [&g_533930]} */
🚫🚫        /* unimplemented  {fsubr fp0, qword [&g_533924[4]]} */
🚫🚫🚫        /* unimplemented  {fdivp fp1, fp0} */
        /* unimplemented  {fdivp fp1, fp0} */
    }

🚫🚫    /* unimplemented  {fadd dword [ctxB+0x124]} */
🚫🚫🚫🚫🚫    long double f3 = -1.57079637.0f;
    /* unimplemented  {fcom fp0, dword [&g_5339d0]} f- f3 */ - f3;
    bool c0_4 = /* bool c0_4 = unimplemented  {fcom fp0, dword [&g_5339d0]} f< f3 */ < f3;
    bool c2_5 = FCMP_UO(/* bool c2_5 =
        is_unordered.t(unimplemented  {fcom fp0, dword [&g_5339d0]}, f3) */, f3);
    bool c3_4 = /* bool c3_4 =
        unimplemented  {fcom fp0, dword [&g_5339d0]} f== f3 */ == f3;
🚫🚫    (*(int32_t*)(uintptr_t)(ctxB + 0x124)) =
    bool c1_1 = /* bool c1_1 = unknown  {fst dword [ctxB+0x124], fp0} */;
    int16_t top_14;

    if (!(*(&((c0_4 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2_5 ? 1 : 0) << 0xa
        | (c3_4 ? 1 : 0) << 0xe | (top_10 & 7) << 0xb) + 1) & 1))
    {
⋯        long double f5_1 = 1.57079637.0f;
        /* unimplemented  {fcomp fp0, dword [&g_533468]} f- f5_1 */ - f5_1;
        bool c0_5 = /* bool c0_5 =
            unimplemented  {fcomp fp0, dword [&g_533468]} f< f5_1 */ < f5_1;
        bool c2_6 = FCMP_UO(/* bool c2_6 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_533468]}, f5_1) */, f5_1);
        bool c3_5 = /* bool c3_5 =
            unimplemented  {fcomp fp0, dword [&g_533468]} f== f5_1 */ == f5_1;
        /* unimplemented  {fcomp fp0, dword [&g_533468]} */
        top_14 = top_10 + 1;

        if (!(*(&((c0_5 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
                | (top_14 & 7) << 0xb) + 1) & 0x41))
            (*(int32_t*)(uintptr_t)(ctxB + 0x124)) = 0x3fc90fdb;
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
        top_14 = top_10 + 1;
        (*(int32_t*)(uintptr_t)(ctxB + 0x124)) = 0xbfc90fdb;
    }

🚫🚫    /* unimplemented  {fld fp0, dword [ctxB+0x128]} */
🚫🚫    /* unimplemented  {fadd dword [ctxB+0x124]} */
🚫🚫🚫    (*(int32_t*)(uintptr_t)(ctxB + 0x120)) =
    /* unimplemented  {fstp dword [ctxB+0x120], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0x1f0]} */
⋯    long double f6 = 0.0f;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f6 */ - f6;
    bool c0_6 = /* bool c0_6 = unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f6 */ < f6;
    bool c2_7 = FCMP_UO(/* bool c2_7 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f6) */, f6);
    bool c3_6 = /* bool c3_6 =
        unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f6 */ == f6;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */

    if (!(*(
        &((c0_6 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe | (top_14 & 7) << 0xb)
        + 1) & 0x40))
    {
🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0x1e4]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_5339cc]} */
🚫🚫🚫        (*(int32_t*)(uintptr_t)(ctxB + 0x1e4)) =
        /* unimplemented  {fstp dword [ctxB+0x1e4], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0x1e8]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_5339cc]} */
🚫🚫🚫        (*(int32_t*)(uintptr_t)(ctxB + 0x1e8)) =
        /* unimplemented  {fstp dword [ctxB+0x1e8], fp0} */
    }

🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0x1f4]} */
⋯    long double f7 = 0.0f;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f7 */ - f7;
    bool c0_7 = /* bool c0_7 = unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f7 */ < f7;
    bool c2_8 = FCMP_UO(/* bool c2_8 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f7) */, f7);
    bool c3_7 = /* bool c3_7 =
        unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f7 */ == f7;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */

    if (!(*(
        &((c0_7 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe | (top_14 & 7) << 0xb)
        + 1) & 0x40))
    {
🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0x1e4]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_5339c8]} */
🚫🚫🚫        (*(int32_t*)(uintptr_t)(ctxB + 0x1e4)) =
        /* unimplemented  {fstp dword [ctxB+0x1e4], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0x1e8]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_5339c8]} */
🚫🚫🚫        (*(int32_t*)(uintptr_t)(ctxB + 0x1e8)) =
        /* unimplemented  {fstp dword [ctxB+0x1e8], fp0} */
    }

🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0x1f8]} */
⋯    long double f8 = 0.0f;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f8 */ - f8;
    bool c0_8 = /* bool c0_8 = unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f8 */ < f8;
    bool c2_9 = FCMP_UO(/* bool c2_9 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f8) */, f8);
    bool c3_8 = /* bool c3_8 =
        unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f8 */ == f8;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
    int16_t top_28 = top_14;

    if (!(*(
        &((c0_8 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe | (top_28 & 7) << 0xb)
        + 1) & 0x40))
    {
🚫🚫        int16_t top_29 = top_28 - 1;
        /* unimplemented  {fld fp0, qword [&g_5339c0]} */
🚫🚫🚫🚫        long double fp0_1;
        bool c1_2;
        bool c2_10;
        fp0_1 = __fptan(/* fp0_1, c1_2, c2_10 = __fptan(unimplemented  {fptan }) */);
        /* unimplemented  {fptan } */

        if (!c2_10)
        {
            top_29 -= 1;
            /* unimplemented  {fptan } */
        }

        (*(int32_t*)(uintptr_t)(ctxB + 0x1e4)) = a1;
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫        (*(int32_t*)(uintptr_t)(ctxB + 0x1e8)) =
        /* unimplemented  {fstp dword [ctxB+0x1e8], fp0} */
        top_28 = top_29 + 2;
    }

    float result = Sys_PopStack_11(ctxB + 0x180);

    if (!result)
    {
        char v_28;
        memcpy(&v_28, ctxB + 0x180, 0x18);
        WeaponType_InitType();
🚫🚫🚫        a2 = /* a2 = unimplemented  {fstp dword [esp+0x30], fp0} */;
        /* unimplemented  {fstp dword [esp+0x30], fp0} */
        memcpy(&v_28, ctxB + 0x180, 0x18);
        result = WeaponType_GetConfig();
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x30]} */
⋯        long double f13_1 = -1.57079637.0f;
        /* unimplemented  {fcomp fp0, dword [&g_5339d0]} f- f13_1 */ - f13_1;
        bool c0_9 = /* bool c0_9 =
            unimplemented  {fcomp fp0, dword [&g_5339d0]} f< f13_1 */ < f13_1;
        bool c2_11 = FCMP_UO(/* bool c2_11 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5339d0]}, f13_1) */,
            f13_1);
        bool c3_9 = /* bool c3_9 =
            unimplemented  {fcomp fp0, dword [&g_5339d0]} f== f13_1 */ == f13_1;
        /* unimplemented  {fcomp fp0, dword [&g_5339d0]} */
        int16_t top_33 = top_28 + 1;
        result = (c0_9 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa | (c3_9 ? 1 : 0) << 0xe
            | (top_33 & 7) << 0xb;

        if (!(*(&result + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x18]} */
⋯            long double f14_1 = 1.57079637.0f;
            /* unimplemented  {fcomp fp0, dword [&g_533468]} f- f14_1 */ - f14_1;
            bool c0_10 = /* bool c0_10 =
                unimplemented  {fcomp fp0, dword [&g_533468]} f< f14_1 */ < f14_1;
            bool c2_12 = FCMP_UO(/* bool c2_12 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [&g_533468]}, f14_1) */,
                f14_1);
            bool c3_10 = /* bool c3_10 =
                unimplemented  {fcomp fp0, dword [&g_533468]} f== f14_1 */ == f14_1;
            /* unimplemented  {fcomp fp0, dword [&g_533468]} */
            result = (c0_10 ? 1 : 0) << 8 | (c2_12 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
                | (top_33 & 7) << 0xb;

            if (!(*(&result + 1) & 0x41))
                a2 = 1.57079637.0f;
        }
        else
            a2 = -1.57079637.0f;

🚫🚫🚫🚫🚫        long double f15_1 = -1.57079637.0f;
        /* unimplemented  {fcom fp0, dword [&g_5339d0]} f- f15_1 */ - f15_1;
        bool c0_11 = /* bool c0_11 =
            unimplemented  {fcom fp0, dword [&g_5339d0]} f< f15_1 */ < f15_1;
        bool c2_13 = FCMP_UO(/* bool c2_13 =
            is_unordered.t(unimplemented  {fcom fp0, dword [&g_5339d0]}, f15_1) */, f15_1);
        bool c3_11 = /* bool c3_11 =
            unimplemented  {fcom fp0, dword [&g_5339d0]} f== f15_1 */ == f15_1;
        result = (c0_11 ? 1 : 0) << 8 | (c2_13 ? 1 : 0) << 0xa | (c3_11 ? 1 : 0) << 0xe
            | (top_33 & 7) << 0xb;

        if (!(*(&result + 1) & 1))
        {
🚫🚫🚫🚫🚫            long double f16_1 = 1.57079637.0f;
            /* unimplemented  {fcom fp0, dword [&g_533468]} f- f16_1 */ - f16_1;
            bool c0_12 = /* bool c0_12 =
                unimplemented  {fcom fp0, dword [&g_533468]} f< f16_1 */ < f16_1;
            bool c2_14 = FCMP_UO(/* bool c2_14 =
                is_unordered.t(unimplemented  {fcom fp0, dword [&g_533468]}, f16_1) */,
                f16_1);
            bool c3_12 = /* bool c3_12 =
                unimplemented  {fcom fp0, dword [&g_533468]} f== f16_1 */ == f16_1;
            result = (c0_12 ? 1 : 0) << 8 | (c2_14 ? 1 : 0) << 0xa | (c3_12 ? 1 : 0) << 0xe
                | (top_33 & 7) << 0xb;

            if (!(*(&result + 1) & 0x41))
            {
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
🚫🚫                /* unimplemented  {fld fp0, dword [&g_533468]} */
            }
        }
        else
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [&g_5339d0]} */
        }

        result = (*(int32_t*)(uintptr_t)(ctxB + 0x198));

        if (!result)
        {
🚫🚫            /* unimplemented  {fld fp0, dword [ctxB+0x120]} */
⋯            long double f17_1 = a2;
            /* unimplemented  {fcomp fp0, dword [esp+0x18]} f- f17_1 */ - f17_1;
            bool c0_13 = /* bool c0_13 =
                unimplemented  {fcomp fp0, dword [esp+0x18]} f< f17_1 */ < f17_1;
            bool c2_15 = FCMP_UO(/* bool c2_15 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0x18]}, f17_1) */,
                f17_1);
            bool c3_13 = /* bool c3_13 =
                unimplemented  {fcomp fp0, dword [esp+0x18]} f== f17_1 */ == f17_1;
            /* unimplemented  {fcomp fp0, dword [esp+0x18]} */
🚫🚫            /* unimplemented  {fld fp0, dword [ctxB+0x120]} */
            result = (c0_13 ? 1 : 0) << 8 | (c2_15 ? 1 : 0) << 0xa | (c3_13 ? 1 : 0) << 0xe
                | ((top_33 - 1) & 7) << 0xb;
            int16_t top_40;

            if (!(*(&result + 1) & 1))
            {
⋯                long double f18_1 = a2;
                /* unimplemented  {fcomp fp0, dword [esp+0x18]} f- f18_1 */ - f18_1;
                bool c0_15 = /* bool c0_15 =
                    unimplemented  {fcomp fp0, dword [esp+0x18]} f< f18_1 */ < f18_1;
                bool c2_17 = FCMP_UO(/* bool c2_17 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0x18]}, f18_1) */,
                    f18_1);
                bool c3_15 = /* bool c3_15 =
                    unimplemented  {fcomp fp0, dword [esp+0x18]} f== f18_1 */ == f18_1;
                /* unimplemented  {fcomp fp0, dword [esp+0x18]} */
                top_40 = top_33;
                result = (c0_15 ? 1 : 0) << 8 | (c2_17 ? 1 : 0) << 0xa | (c3_15 ? 1 : 0) << 0xe
                    | (top_40 & 7) << 0xb;

                if (!(*(&result + 1) & 0x41))
                {
🚫🚫                    /* unimplemented  {fld fp0, dword [ctxB+0x120]} */
🚫🚫                    /* unimplemented  {fsub fp0, dword [&g_5337f4]} */  /* "PwV=333333" */
🚫🚫                    (*(int32_t*)(uintptr_t)(ctxB + 0x120)) = /* (*(int32_t*)(uintptr_t)(ctxB i+ 0x120)) =
                        unimplemented  {fst dword [ctxB+0x120], fp0} */;
⋯                    long double f21_1 = a2;
                    /* unimplemented  {fcomp fp0, dword [esp+0x18]} f- f21_1 */ - f21_1;
                    bool c0_16 = /* bool c0_16 =
                        unimplemented  {fcomp fp0, dword [esp+0x18]} f< f21_1 */ < f21_1;
                    bool c2_18 = FCMP_UO(/* bool c2_18 =
                        is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0x18]}, f21_1) */,
                        f21_1);
                    bool c3_16 = /* bool c3_16 =
                        unimplemented  {fcomp fp0, dword [esp+0x18]} f== f21_1 */ == f21_1;
                    /* unimplemented  {fcomp fp0, dword [esp+0x18]} */
                    result = (c0_16 ? 1 : 0) << 8 | (c2_18 ? 1 : 0) << 0xa | (c3_16 ? 1 : 0) << 0xe
                        | (top_40 & 7) << 0xb;

                    if (*(&result + 1) & 1)
                        (*(int32_t*)(uintptr_t)(ctxB + 0x120)) = a2;
                }
            }
            else
            {
🚫🚫                /* unimplemented  {fadd dword [&g_5337f4]} */  /* "PwV=333333" */
🚫🚫                (*(int32_t*)(uintptr_t)(ctxB + 0x120)) = /* (*(int32_t*)(uintptr_t)(ctxB i+ 0x120)) =
                    unimplemented  {fst dword [ctxB+0x120], fp0} */;
⋯                long double f19_1 = a2;
                /* unimplemented  {fcomp fp0, dword [esp+0x18]} f- f19_1 */ - f19_1;
                bool c0_14 = /* bool c0_14 =
                    unimplemented  {fcomp fp0, dword [esp+0x18]} f< f19_1 */ < f19_1;
                bool c2_16 = FCMP_UO(/* bool c2_16 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0x18]}, f19_1) */,
                    f19_1);
                bool c3_14 = /* bool c3_14 =
                    unimplemented  {fcomp fp0, dword [esp+0x18]} f== f19_1 */ == f19_1;
                /* unimplemented  {fcomp fp0, dword [esp+0x18]} */
                top_40 = top_33;
                result = (c0_14 ? 1 : 0) << 8 | (c2_16 ? 1 : 0) << 0xa | (c3_14 ? 1 : 0) << 0xe
                    | (top_40 & 7) << 0xb;

                if (!(*(&result + 1) & 0x41))
                    (*(int32_t*)(uintptr_t)(ctxB + 0x120)) = a2;
            }

🚫🚫🚫🚫🚫            long double f20_1 = (*(int32_t*)(uintptr_t)(ctxB + 0x12c));
            /* unimplemented  {fcom fp0, dword [ctxB+0x12c]} f- f20_1 */ - f20_1;
            bool c0_17 = /* bool c0_17 =
                unimplemented  {fcom fp0, dword [ctxB+0x12c]} f< f20_1 */ < f20_1;
            bool c2_19 = FCMP_UO(/* bool c2_19 =
                is_unordered.t(unimplemented  {fcom fp0, dword [ctxB+0x12c]}, f20_1) */,
                f20_1);
            bool c3_17 = /* bool c3_17 =
                unimplemented  {fcom fp0, dword [ctxB+0x12c]} f== f20_1 */ == f20_1;
            result = (c0_17 ? 1 : 0) << 8 | (c2_19 ? 1 : 0) << 0xa | (c3_17 ? 1 : 0) << 0xe
                | (top_40 & 7) << 0xb;

            if (*(&result + 1) & 0x41)
            {
🚫🚫🚫🚫🚫                long double f22_1 = (*(int32_t*)(uintptr_t)(ctxB + 0x12c));
                /* unimplemented  {fcom fp0, dword [ctxB+0x12c]} f- f22_1 */ - f22_1;
                bool c0_19 = /* bool c0_19 =
                    unimplemented  {fcom fp0, dword [ctxB+0x12c]} f< f22_1 */ < f22_1;
                bool c2_21 = FCMP_UO(/* bool c2_21 =
                    is_unordered.t(unimplemented  {fcom fp0, dword [ctxB+0x12c]}, f22_1) */,
                    f22_1);
                bool c3_19 = /* bool c3_19 =
                    unimplemented  {fcom fp0, dword [ctxB+0x12c]} f== f22_1 */ == f22_1;
                result = (c0_19 ? 1 : 0) << 8 | (c2_21 ? 1 : 0) << 0xa | (c3_19 ? 1 : 0) << 0xe
                    | (top_40 & 7) << 0xb;

                if (!(*(&result + 1) & 1))
                {
🚫🚫🚫                label_464b42:
                    /* unimplemented  {fstp fp0, fp0} */
                    /* unimplemented  {fstp fp0, fp0} */
                    top_28 = top_40 + 1;
                }
                else
                {
🚫🚫                    /* unimplemented  {fld fp0, dword [ctxB+0x12c]} */
🚫🚫                    /* unimplemented  {fsub fp0, dword [&g_5337f4]} */  /* "PwV=333333" */
🚫🚫                    (*(int32_t*)(uintptr_t)(ctxB + 0x12c)) = /* (*(int32_t*)(uintptr_t)(ctxB i+ 0x12c)) =
                        unimplemented  {fst dword [ctxB+0x12c], fp0} */;
⋯                    /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
                        - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
                    bool c0_20 = /* bool c0_20 =
                        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */
                        < /* bool c0_20 =
                        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
                    bool c2_22 = FCMP_UO(/* bool c2_22 = is_unordered.t(
                        unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
                        /* bool c2_22 = is_unordered.t(unimplemented  {fcomp fp0, fp1},
                        unimplemented  {fcomp fp0, fp1}) */);
                    bool c3_20 = /* bool c3_20 =
                        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */
                        == /* bool c3_20 =
                        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
                    /* unimplemented  {fcomp fp0, fp1} */
                    result = (c0_20 ? 1 : 0) << 8 | (c2_22 ? 1 : 0) << 0xa | (c3_20 ? 1 : 0) << 0xe
                        | (top_40 & 7) << 0xb;

                    if (!(*(&result + 1) & 1))
                        goto label_464b42;

🚫🚫🚫                    (*(int32_t*)(uintptr_t)(ctxB + 0x12c)) = /* (*(int32_t*)(uintptr_t)(ctxB i+ 0x12c)) =
                        unimplemented  {fstp dword [ctxB+0x12c], fp0} */;
                    /* unimplemented  {fstp dword [ctxB+0x12c], fp0} */
                    top_28 = top_40 + 1;
                }
            }
            else
            {
🚫🚫                /* unimplemented  {fld fp0, dword [ctxB+0x12c]} */
🚫🚫                /* unimplemented  {fadd dword [&g_5337f4]} */  /* "PwV=333333" */
🚫🚫                (*(int32_t*)(uintptr_t)(ctxB + 0x12c)) = /* (*(int32_t*)(uintptr_t)(ctxB i+ 0x12c)) =
                    unimplemented  {fst dword [ctxB+0x12c], fp0} */;
⋯                /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
                    - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
                bool c0_18 = /* bool c0_18 =
                    unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */
                    < /* bool c0_18 =
                    unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
                bool c2_20 = FCMP_UO(/* bool c2_20 = is_unordered.t(
                    unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
                    /* bool c2_20 = is_unordered.t(unimplemented  {fcomp fp0, fp1},
                    unimplemented  {fcomp fp0, fp1}) */);
                bool c3_18 = /* bool c3_18 =
                    unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */
                    == /* bool c3_18 =
                    unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
                /* unimplemented  {fcomp fp0, fp1} */
                result = (c0_18 ? 1 : 0) << 8 | (c2_20 ? 1 : 0) << 0xa | (c3_18 ? 1 : 0) << 0xe
                    | (top_40 & 7) << 0xb;

                if (*(&result + 1) & 0x41)
                    goto label_464b42;

🚫🚫🚫                (*(int32_t*)(uintptr_t)(ctxB + 0x12c)) = /* (*(int32_t*)(uintptr_t)(ctxB i+ 0x12c)) =
                    unimplemented  {fstp dword [ctxB+0x12c], fp0} */;
                /* unimplemented  {fstp dword [ctxB+0x12c], fp0} */
                top_28 = top_40 + 1;
            }
        }
        else
        {
            result = a2;
🚫🚫🚫            (*(int32_t*)(uintptr_t)(ctxB + 0x12c)) =
            /* unimplemented  {fstp dword [ctxB+0x12c], fp0} */
            top_28 = top_33 + 1;
            (*(int32_t*)(uintptr_t)(ctxB + 0x120)) = result;
        }
    }

🚫🚫    /* unimplemented  {fld fp0, dword [ctxB+0x120]} */
⋯    long double f9 = -1.57079637.0f;
    /* unimplemented  {fcomp fp0, dword [&g_5339d0]} f- f9 */ - f9;
    bool c0_21 = /* bool c0_21 =
        unimplemented  {fcomp fp0, dword [&g_5339d0]} f< f9 */ < f9;
    bool c2_23 = FCMP_UO(/* bool c2_23 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5339d0]}, f9) */, f9);
    bool c3_21 = /* bool c3_21 =
        unimplemented  {fcomp fp0, dword [&g_5339d0]} f== f9 */ == f9;
    /* unimplemented  {fcomp fp0, dword [&g_5339d0]} */
    result = (c0_21 ? 1 : 0) << 8 | (c2_23 ? 1 : 0) << 0xa | (c3_21 ? 1 : 0) << 0xe
        | (top_28 & 7) << 0xb;

    if (!(*(&result + 1) & 1))
    {
🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0x120]} */
⋯        long double f10_1 = 1.57079637.0f;
        /* unimplemented  {fcomp fp0, dword [&g_533468]} f- f10_1 */ - f10_1;
        bool c0_22 = /* bool c0_22 =
            unimplemented  {fcomp fp0, dword [&g_533468]} f< f10_1 */ < f10_1;
        bool c2_24 = FCMP_UO(/* bool c2_24 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_533468]}, f10_1) */,
            f10_1);
        bool c3_22 = /* bool c3_22 =
            unimplemented  {fcomp fp0, dword [&g_533468]} f== f10_1 */ == f10_1;
        /* unimplemented  {fcomp fp0, dword [&g_533468]} */
        result = (c0_22 ? 1 : 0) << 8 | (c2_24 ? 1 : 0) << 0xa | (c3_22 ? 1 : 0) << 0xe
            | (top_28 & 7) << 0xb;

        if (!(*(&result + 1) & 0x41))
            (*(int32_t*)(uintptr_t)(ctxB + 0x120)) = 0x3fc90fdb;
    }
    else
        (*(int32_t*)(uintptr_t)(ctxB + 0x120)) = 0xbfc90fdb;

🚫🚫    /* unimplemented  {fld fp0, dword [ctxB+0x12c]} */
⋯    long double f11 = -1.57079637.0f;
    /* unimplemented  {fcomp fp0, dword [&g_5339d0]} f- f11 */ - f11;
    bool c0_23 = /* bool c0_23 =
        unimplemented  {fcomp fp0, dword [&g_5339d0]} f< f11 */ < f11;
    bool c2_25 = FCMP_UO(/* bool c2_25 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5339d0]}, f11) */, f11);
    bool c3_23 = /* bool c3_23 =
        unimplemented  {fcomp fp0, dword [&g_5339d0]} f== f11 */ == f11;
    /* unimplemented  {fcomp fp0, dword [&g_5339d0]} */
    result = (c0_23 ? 1 : 0) << 8 | (c2_25 ? 1 : 0) << 0xa | (c3_23 ? 1 : 0) << 0xe
        | (top_28 & 7) << 0xb;

    if (*(&result + 1) & 1)
    {
        (*(int32_t*)(uintptr_t)(ctxB + 0x12c)) = 0xbfc90fdb;
        return result;
    }

🚫🚫    /* unimplemented  {fld fp0, dword [ctxB+0x12c]} */
⋯    long double f12 = 1.57079637.0f;
    /* unimplemented  {fcomp fp0, dword [&g_533468]} f- f12 */ - f12;
    bool c0_24 = /* bool c0_24 =
        unimplemented  {fcomp fp0, dword [&g_533468]} f< f12 */ < f12;
    bool c2_26 = FCMP_UO(/* bool c2_26 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_533468]}, f12) */, f12);
    bool c3_24 = /* bool c3_24 =
        unimplemented  {fcomp fp0, dword [&g_533468]} f== f12 */ == f12;
    /* unimplemented  {fcomp fp0, dword [&g_533468]} */
    result = (c0_24 ? 1 : 0) << 8 | (c2_26 ? 1 : 0) << 0xa | (c3_24 ? 1 : 0) << 0xe
        | (top_28 & 7) << 0xb;

    if (!(*(&result + 1) & 0x41))
        (*(int32_t*)(uintptr_t)(ctxB + 0x12c)) = 0x3fc90fdb;

    return result;
}
