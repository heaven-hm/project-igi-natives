#include "gi_platform.h"
#include "00479B20-Gun_Cleanup_3.h"
int32_t Gun_Cleanup_3(float a1)

{
    int32_t v_18;
    __builtin_memset(&v_18, 0, 0x18);
    Weapon_UpdateZoom_5(a1);
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xf1));

    if (!result)
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

        float v_24_2 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_4;
        result = DynObj_LinkDynamicCube_8(Level_StartMission_4(), a1, &v_18, v_24_2, 2);
        (*(int32_t*)(uintptr_t)(a1 + 0xf0)) = 1;
    }

    return result;
}
