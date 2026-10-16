#include "gi_platform.h"
#include "00474360-Gun_SpawnRound.h"
void* Gun_SpawnRound(void* a1, char a2)

{
    void* result = Table_GetAt(a1 + 0x20c, 0);

    if (result)
    {
        void* valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x208));
        char v_30 = a2;
        char v_2f_1 = 0;
        int32_t v_2c_1 = 0;
        int32_t v_28_1 = 0;
        int32_t v_24_1 = 0;
        int32_t v_20_1 = 0;
        void* result_1 = nullptr;
        int32_t v_c_1 = 0;

        if (!valA1)
            int32_t v_8_2 = 0x3f800000;
        else
            int32_t v_8_1 = *(valA1 + 0x4d4);

        void* v_4_1 = valA1;
        uint32_t valA3 = AI_AlertAllies_17();
        int32_t objC2 = 0;
        objC2 = *(result + 0x1c);
        ((int(*)())(uintptr_t)(*(((valA3 * 0x180 + objC2) << 2) + &g_a96ae0)))(result, &v_30);
        result = result_1;
        (*(int32_t*)(uintptr_t)(a1 + 0x1f0)) = result;
        (*(int32_t*)(uintptr_t)(a1 + 0x1f4)) = v_c_1;
    }

    return result;
}
