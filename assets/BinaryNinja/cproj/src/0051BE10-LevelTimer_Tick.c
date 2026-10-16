#include "gi_platform.h"
#include "0051BE10-LevelTimer_Tick.h"
int32_t LevelTimer_Tick(int80_t a1 , void* a2)

{
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

    int16_t idx;

    if (Script_FormatString_6(a2 + 0x6c))
    {
        Script_SpawnNewTask_7(a2 + 0x6c, a2);
        idx = 1;
        (*(int32_t*)(uintptr_t)(a2 + 0x60)) = a1;
    }

    int16_t result = Script_FormatString_6(a2 + 0xbc);

    if (result)
    {
        Script_SpawnNewTask_7(a2 + 0xbc, a2);
⋯        long double f0_1 = 0.0;
        /* unimplemented  {fcomp fp0, qword [&g_5333b0]} f- f0_1 */ - f0_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp fp0, qword [&g_5333b0]} f< f0_1 */ < f0_1;
        bool c2_1 = FCMP_UO(/* bool c2_1 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [&g_5333b0]}, f0_1) */, f0_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp fp0, qword [&g_5333b0]} f== f0_1 */ == f0_1;
        /* unimplemented  {fcomp fp0, qword [&g_5333b0]} */
        result = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | ((idx + 1) & 7) << 0xb;

        if (!(*(&result + 1) & 0x40))
            (*(int32_t*)(uintptr_t)(a2 + 0x64)) = 0;
    }

    result = (*(int32_t*)(uintptr_t)(a2 + 0x60));

    if (result)
        (*(int32_t*)(uintptr_t)(a2 + 0x64)) += 1;

    return result;
}
