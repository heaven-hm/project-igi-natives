#include "0043AC40-Vehicle_1009011_2.h"
/* 0x0043ac40 Vehicle_1009011_2 full linked: callers=1 callees=3 */
struct status_msg* Vehicle_1009011_2(void* a1)

{
    struct status_msg* result = sub_4f1030(*(a1 + 0xc0));
    struct status_msg* result_1 = result;

    if (result_1)
    {
        int32_t ecx_1 = 0;
        ecx_1 = result_1->head[7];
        result = *((ecx_1 << 2) + &g_a994e0);

        if (result)
        {
            int32_t var_8_1 = 0;
            double var_58[0xa];
            result(result_1, &var_58);

            if (*(a1 + 0xc8))
                WeaponType_CycleWeapon(result_1, &var_58);

            void* var_94_1 = a1 + 0xa0;
            void* var_98_1 = a1 + 0xa0;
            return sub_480fe0(&var_58, 1, *(a1 + 0x94) * 30f, *(a1 + 0x90),
                *(a1 + 0x88) * 4096f, *(a1 + 0x8c) * 4096f, 0x45c00000, *(a1 + 0x98),
                *(a1 + 0x9c), nullptr, "1009_01_1", a1 + 0xa0, 0xffffffff, 0, 0x47c80000, 0);
        }
    }

    return result;
}
