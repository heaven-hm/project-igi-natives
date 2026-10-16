#include "gi_platform.h"
#include "00437DB0-Smoke_LoadParameters.h"
int32_t Smoke_LoadParameters(long double a1 , void* a2)

{
    double v_20;
    double v_10;
    int16_t idx;

    if ((*(int32_t*)(uintptr_t)(a2 + 0x171)) && (*(int32_t*)(uintptr_t)(a2 + 0x170)))
    {
        void* objC1 = (*(int32_t*)(uintptr_t)(a2 + 0xf4));
        v_20 = (*(int32_t*)(uintptr_t)(a2 + 0x40)) - (*(int32_t*)(uintptr_t)(a2 + 0x58));
        double v_18_1 = (*(int32_t*)(uintptr_t)(a2 + 0x48)) - (*(int32_t*)(uintptr_t)(a2 + 0x60));
        v_10 = (*(int32_t*)(uintptr_t)(a2 + 0x50)) - (*(int32_t*)(uintptr_t)(a2 + 0x68));
        idx = 0;
        Script_ExecuteLevelScript_31(objC1, &v_20);
    }

    (*(int32_t*)(uintptr_t)(a2 + 0x171)) = 1;
    memcpy(a2 + 0x58, a2 + 0x40, 0x18);
    int32_t* i = (*(int32_t*)(uintptr_t)(a2 + 8));

    if (*i && i)
    {
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i;
            void* valA4;

            if (!srcS1)
                valA4 = nullptr;
            else
            {
                int32_t valA1 = *srcS1;
                int32_t valA2 = -(valA1);
                valA4 = (valA2 - valA2) & srcS1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA4;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA5 = 0;
            g_afa7e0 = tmpD2;
            valA5 = i[7];
            int32_t valA6 = *((valA5 << 2) + &g_a970e0);

            if (valA6)
            {
                valA6(i);
                tmpD2 = g_afa7e0;
            }

            i = *((tmpD2 << 2) + &g_afa6dc);
            tmpD1 = tmpD2 - 1;
            g_afa7e0 = tmpD1;
        } while (i);
    }

    if (Script_FormatString_6(a2 + 0xa4))
    {
        Script_SpawnNewTask_7(a2 + 0xa4, a2);
        (*(int32_t*)(uintptr_t)(a2 + 0x98)) = a1;
        idx = 1;
    }

🚫🚫    /* unimplemented  {fld fp0, qword [ctxB+0x98]} */
🚫🚫    /* unimplemented  {fadd dword [ctxB+0xa0]} */
    void* dstD1 = (*(int32_t*)(uintptr_t)(a2 + 0xf4));
🚫🚫    (*(int32_t*)(uintptr_t)(a2 + 0xa0)) =
⋯    long double f0 = 30.0f;
    /* unimplemented  {fcomp fp0, dword [&g_5333bc]} f- f0 */ - f0;
    bool c0 = /* bool c0 = unimplemented  {fcomp fp0, dword [&g_5333bc]} f< f0 */ < f0;
    bool c2 = FCMP_UO(/* bool c2 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333bc]}, f0) */, f0);
    bool c3 = /* bool c3 = unimplemented  {fcomp fp0, dword [&g_5333bc]} f== f0 */ == f0;
    /* unimplemented  {fcomp fp0, dword [&g_5333bc]} */
    int16_t result =
        (c0 ? 1 : 0) << 8 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe | (idx & 7) << 0xb;

    while (!(*(&result + 1) & 0x41))
    {
🚫🚫        Sys_AllocateMemory_14(0x57bde8);
        /* unimplemented  {call Sys_AllocateMemory_14} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_5334a8]} */
🚫🚫🚫        float v_30_1 = /* float v_30_1 = unimplemented  {fstp dword [esp+0x18], fp0} */;
        /* unimplemented  {fstp dword [esp+0x18], fp0} */
🚫🚫        Sys_AllocateMemory_14(0x57bde8);
        /* unimplemented  {call Sys_AllocateMemory_14} */
🚫🚫        /* unimplemented  {fmul fp0, dword [ctxB+0x94]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_5333b8]} */
🚫🚫🚫        int32_t v_2c_1 = /* int32_t v_2c_1 = unimplemented  {fstp dword [esp+0x20], fp0} */;
        /* unimplemented  {fstp dword [esp+0x20], fp0} */
🚫🚫        Sys_AllocateMemory_14(0x57bde8);
        /* unimplemented  {call Sys_AllocateMemory_14} */
🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0x11c]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [ctxB+0x120]} */
        int32_t valA7 = (*(int32_t*)(uintptr_t)(a2 + 0x124));
        int32_t v_24_1 = valA7;
🚫🚫🚫        /* unimplemented  {fmulp fp1, fp0} */
        /* unimplemented  {fmulp fp1, fp0} */
        v_10 = (*(int32_t*)(uintptr_t)(a2 + 0x50));
        *(&v_10 + 4) = (*(int32_t*)(uintptr_t)(a2 + 0x54));
🚫🚫        /* unimplemented  {fadd dword [ctxB+0x120]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x10]} */
🚫🚫🚫        long double fp0_1;
        bool c1_1;
        bool c2_1;
        fp0_1 = __fcos(/* fp0_1, c1_1, c2_1 = __fcos(unimplemented  {fcos }) */);
        /* unimplemented  {fcos } */
🚫🚫        /* unimplemented  {fmul fp0, dword [esp+0x14]} */
🚫🚫        /* unimplemented  {fadd qword [ctxB+0x40]} */
🚫🚫🚫        v_20 = /* v_20 = unimplemented  {fstp qword [esp+0x20], fp0} */;
        /* unimplemented  {fstp qword [esp+0x20], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x10]} */
🚫🚫🚫        long double fp0_2;
        bool c1_2;
        bool c2_2;
        fp0_2 = __fsin(/* fp0_2, c1_2, c2_2 = __fsin(unimplemented  {fsin }) */);
        /* unimplemented  {fsin } */
🚫🚫        /* unimplemented  {fmul fp0, dword [esp+0x14]} */
🚫🚫        /* unimplemented  {fadd qword [ctxB+0x48]} */
🚫🚫🚫        double v_18_2 = /* double v_18_2 = unimplemented  {fstp qword [esp+0x28], fp0} */;
        /* unimplemented  {fstp qword [esp+0x28], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0x100]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_5333bc]} */
🚫🚫        /* unimplemented  {fdiv fp0, dword [esp+0x1c]} */
🚫🚫🚫        v_2c_1 = /* v_2c_1.q = unimplemented  {fistp qword [esp+0x14], fp0} */;
        /* unimplemented  {fistp qword [esp+0x14], fp0} */
        int32_t objC3 = v_2c_1;
🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0xfc]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_5333bc]} */
🚫🚫🚫        v_2c_1 = /* v_2c_1.q = unimplemented  {fistp qword [esp+0x18], fp0} */;
        /* unimplemented  {fistp qword [esp+0x18], fp0} */
        int32_t v_54_1 = objC3;
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_533678]} */
🚫🚫🚫        float v_54_2 = /* float v_54_2 = unimplemented  {fstp dword [esp], fp0} */;
        /* unimplemented  {fstp dword [esp], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0x88]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_5337e8]} */
        int32_t v_5c_1 = objC3;
🚫🚫🚫        float v_5c_2 = /* float v_5c_2 = unimplemented  {fstp dword [esp], fp0} */;
        /* unimplemented  {fstp dword [esp], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0x8c]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_5337e8]} */
        int32_t v_60_1 = objC3;
🚫🚫🚫        float v_60_2 = /* float v_60_2 = unimplemented  {fstp dword [esp], fp0} */;
        /* unimplemented  {fstp dword [esp], fp0} */
        Script_ParseEnumInt32_31(dstD1, &v_20, a2 + 0x70, (*(int32_t*)(uintptr_t)(a2 + 0x90)), v_60_2, v_5c_2, valA7,
            v_54_2, 0, 0x3f800000, v_2c_1, objC3);
🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0xa0]} */
🚫🚫        /* unimplemented  {fsub fp0, dword [&g_5333bc]} */
🚫🚫        (*(int32_t*)(uintptr_t)(a2 + 0xa0)) =
⋯        long double f1_1 = 30.0f;
        /* unimplemented  {fcomp fp0, dword [&g_5333bc]} f- f1_1 */ - f1_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp fp0, dword [&g_5333bc]} f< f1_1 */ < f1_1;
        bool c2_3 = FCMP_UO(/* bool c2_3 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333bc]}, f1_1) */, f1_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp fp0, dword [&g_5333bc]} f== f1_1 */ == f1_1;
        /* unimplemented  {fcomp fp0, dword [&g_5333bc]} */
        int16_t top_18;
        result = (c0_1 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (top_18 & 7) << 0xb;
    }

    return result;
}
