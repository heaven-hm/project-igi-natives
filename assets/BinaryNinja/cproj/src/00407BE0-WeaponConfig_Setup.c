#include "gi_platform.h"
#include "00407BE0-WeaponConfig_Setup.h"
int32_t* WeaponConfig_Setup(void* a1)

{
    int32_t* result = HumanPlayer_CheckCollision_10((*(int32_t*)(uintptr_t)(a1 + 0x20)));

    if (result)
    {
        int32_t tmpD1 = result[0x1b8];
        void* v_8 = nullptr;
        int32_t flagP1 = result[0x1b9];
        int32_t v_4_1 = 0;
        v_8 = a1;
        memcpy(result, a1 + 0x20, 0x6e8);
        result[0x1b8] = tmpD1;
        result[0x1b9] = flagP1;
        int32_t* result_1 = result;

        if (AIConfig_RegisterConfig_2((*(int32_t*)(uintptr_t)(a1 + 0x6f8))))
        {
            int32_t objC1 = 0;
            objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x6f8));
            int32_t valA7 = *(((*g_5690d8 * 0x180 + objC1) << 2) + &g_a96ae0);

            if (valA7)
                valA7(0, &v_8);
        }

        result = AIConfig_RegisterConfig_2((*(int32_t*)(uintptr_t)(a1 + 0x6f4)));

        if (result)
        {
            int32_t tmpD3 = 0;
            tmpD3 = (*(int32_t*)(uintptr_t)(a1 + 0x6f4));
            result = *(((*g_5690d8 * 0x180 + tmpD3) << 2) + &g_a96ae0);

            if (result)
                return result(0, &v_8);
        }
    }

    return result;
}
