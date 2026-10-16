#include "0047E9A0-Weapon_ComputeAccuracy_9.h"
/* 0x0047e9a0 Weapon_ComputeAccuracy_9 full linked: callers=1 callees=10 */
struct status_msg* sub_47e9a0(int32_t* a1, int32_t* a2, uint32_t a3, uint32_t a4)

{
    int32_t kind;
    kind = g_5c1144;
    struct status_msg* result = QTask_HandleInput(sub_4f0ee0(), kind, 0);
    int32_t* var_10 = a1;
    result->head[0x10] = a3;
    result->head[0xf] = a4;
    memcpy(&result->head[8], a1, 0x18);
    uint32_t var_c = a3;
    int32_t i = 0;

    if (*sub_460c60() > 0)
    {
        int32_t esi_1 = 8;
        int32_t* eax_10;

        do
        {
            int32_t edx_1 = 0;
            edx_1 = *(*(sub_460c60() + esi_1) + 0x1c);
            uint32_t eax_6 = sub_47e990();
            (*(((edx_1 + eax_6 * 0x180) << 2) + &g_a96ae0))(*(sub_460c60() + esi_1), &var_10);
            i += 1;
            esi_1 += 4;
            eax_10 = sub_460c60();
        } while (i < *eax_10);
    }

    if (a2 && *a2)
    {
        uint32_t eax_12 = sub_47e6f0();
        int32_t edx_3 = 0;
        edx_3 = *(*a2 + 0x1c);

        if (*(((eax_12 * 0x180 + edx_3) << 2) + &g_a96ae0))
        {
            int32_t eax_16 = g_5c1148;
            var_10 = a2;
            int32_t esi_3 = *a2;
            int32_t var_8_1 = eax_16 + 0x18;
            int32_t var_c_1 = 0;
            int32_t var_4_1 = 0x45000000;
            uint32_t eax_19 = sub_47e6f0();
            int32_t edx_4 = 0;
            edx_4 = *(esi_3 + 0x1c);
            (*(((eax_19 * 0x180 + edx_4) << 2) + &g_a96ae0))(esi_3, &var_10);
        }
    }

    return result;
}
