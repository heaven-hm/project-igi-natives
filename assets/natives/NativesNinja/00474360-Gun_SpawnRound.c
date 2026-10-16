#include "00474360-Gun_SpawnRound.h"
/* 0x00474360 Gun_SpawnRound full linked: callers=2 callees=2 */
void* sub_474360(void* a1, char a2)

{
    void* result = Table_GetAt(a1 + 0x20c, 0);

    if (result)
    {
        void* eax_1 = *(a1 + 0x208);
        char var_30 = a2;
        char var_2f_1 = 0;
        int32_t var_2c_1 = 0;
        int32_t var_28_1 = 0;
        int32_t var_24_1 = 0;
        int32_t var_20_1 = 0;
        void* result_1 = nullptr;
        int32_t var_c_1 = 0;

        if (!eax_1)
            int32_t var_8_2 = 0x3f800000;
        else
            int32_t var_8_1 = *(eax_1 + 0x4d4);

        void* var_4_1 = eax_1;
        uint32_t eax_3 = sub_460bf0();
        int32_t ecx_2 = 0;
        ecx_2 = *(result + 0x1c);
        (*(((eax_3 * 0x180 + ecx_2) << 2) + &g_a96ae0))(result, &var_30);
        result = result_1;
        *(a1 + 0x1f0) = result;
        *(a1 + 0x1f4) = var_c_1;
    }

    return result;
}
