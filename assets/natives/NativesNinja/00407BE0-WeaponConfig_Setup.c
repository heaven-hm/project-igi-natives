#include "00407BE0-WeaponConfig_Setup.h"
/* 0x00407be0 WeaponConfig_Setup full linked: callers=0 callees=4 */
int32_t* WeaponConfig_Setup(void* a1)

{
    int32_t* result = HumanPlayer_CheckCollision_10(*(a1 + 0x20));

    if (result)
    {
        int32_t edx_1 = result[0x1b8];
        void* var_8 = nullptr;
        int32_t ebp_1 = result[0x1b9];
        int32_t var_4_1 = 0;
        var_8 = a1;
        memcpy(result, a1 + 0x20, 0x6e8);
        result[0x1b8] = edx_1;
        result[0x1b9] = ebp_1;
        int32_t* result_1 = result;

        if (AIConfig_RegisterConfig_2(*(a1 + 0x6f8)))
        {
            int32_t ecx_1 = 0;
            ecx_1 = *(a1 + 0x6f8);
            int32_t eax_7 = *(((*g_5690d8 * 0x180 + ecx_1) << 2) + &g_a96ae0);

            if (eax_7)
                eax_7(0, &var_8);
        }

        result = AIConfig_RegisterConfig_2(*(a1 + 0x6f4));

        if (result)
        {
            int32_t edx_3 = 0;
            edx_3 = *(a1 + 0x6f4);
            result = *(((*g_5690d8 * 0x180 + edx_3) << 2) + &g_a96ae0);

            if (result)
                return result(0, &var_8);
        }
    }

    return result;
}
