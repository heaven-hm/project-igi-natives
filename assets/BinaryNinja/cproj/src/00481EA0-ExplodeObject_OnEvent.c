#include "gi_platform.h"
#include "00481EA0-ExplodeObject_OnEvent.h"
int32_t ExplodeObject_OnEvent(float a1, float a2)

{
    int32_t result;
    result = (*(int32_t*)(uintptr_t)(a1 + 0x190));

    if (!result)
    {
        result = (*(int32_t*)(uintptr_t)(a1 + 0x234));

        if (result)
        {
            long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
            long double x87_r6_1 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
            x87_r6_1 - x87_r7_1;
            long double x87_r7_2;

            if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
            else
                x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

            long double x87_r6_2 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
            x87_r6_2 - x87_r7_2;
            long double x87_r7_4;

            if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
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

            int32_t v_10_1 = 1;
            float v_1c_1 = a1;
            long double fp0_2;
            fp0_2 = Level_CheckQTaskID_5(a2, a1 + 0x20, Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_4);
            long double x87_r7_9 = fp0_2 + (*(int32_t*)(uintptr_t)(a1 + 0x1e8));
            (*(int32_t*)(uintptr_t)(a1 + 0x1e8)) = x87_r7_9;
            long double f0_1 = (*(int32_t*)(uintptr_t)(a1 + 0x1ec));
            x87_r7_9 - f0_1;
            result = (x87_r7_9 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == f0_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 1))
            {
                result = (*(int32_t*)(uintptr_t)(a1 + 0x208)) * 30.0f;
                (*(int32_t*)(uintptr_t)(a1 + 0x1f4)) = result;
            }
        }
    }

    return result;
}
