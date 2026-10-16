#include "Vehicle_1009011_2.h"
struct status_msg* Vehicle_1009011_2(void* a1)

{
    struct status_msg* result = Script_ExecuteLevelScript_4(*(a1 + 0xc0));
    struct status_msg* result_1 = result;

    if (result_1)
    {
        int32_t objC1 = 0;
        objC1 = result_1->head[7];
        result = *((objC1 << 2) + &g_a994e0);

        if (result)
        {
            int32_t v_8_1 = 0;
            double v_58[0xa];
            result(result_1, &v_58);

            if (*(a1 + 0xc8))
                WeaponType_CycleWeapon(result_1, &v_58);

            void* v_94_1 = a1 + 0xa0;
            void* v_98_1 = a1 + 0xa0;
            return FX_SmokeEmit(&v_58, 1, *(a1 + 0x94) * 30f, *(a1 + 0x90),
                *(a1 + 0x88) * 4096f, *(a1 + 0x8c) * 4096f, 0x45c00000, *(a1 + 0x98),
                *(a1 + 0x9c), nullptr, "1009_01_1", a1 + 0xa0, 0xffffffff, 0, 0x47c80000, 0);
        }
    }

    return result;
}
