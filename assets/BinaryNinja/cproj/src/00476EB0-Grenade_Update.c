#include "gi_platform.h"
#include "00476EB0-Grenade_Update.h"
int32_t Grenade_Update(float a1, float a2)

{
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x720));

    if (result)
    {
        long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_1 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        x87_r6_1 - x87_r7_1;
        long double x87_r7_2;

        if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        else
            x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

        long double x87_r6_2 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
        x87_r6_2 - x87_r7_2;
        long double x87_r7_4;

        if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_5 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
            long double x87_r6_3 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
            x87_r6_3 - x87_r7_5;

            if (!(*(&((x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
            else
                x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        }
        else
            x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

        int32_t v_8_1 = 0;
        float v_14_1 = a1;
        long double fp0_2;
        fp0_2 = Level_CheckQTaskID_5(a2, a1 + 0x20, Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_4);
        long double f0_1 = 0.0f;
        fp0_2 - f0_1;
        result = (fp0_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_2, f0_1) ? 1 : 0) << 0xa
            | (fp0_2 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            (*(int32_t*)(uintptr_t)(a1 + 0x720)) = 0;
    }

    return result;
}
