#include "00426510-CarAI_UpdateCar.h"
/* 0x00426510 CarAI_UpdateCar full linked: callers=2 callees=1 */
int32_t CarAI_UpdateCar(void* a1, int32_t a2, int32_t a3, int32_t a4, float a5)

{
    long double x87_r7 = a5;
    long double temp0 = 0f;
    x87_r7 - temp0;
    int32_t var_14;
    int32_t* var_18 = &var_14;
    int32_t var_1c = a2;
    var_14 = a4;
    int32_t var_10 = a3;
    long double x87_r7_1;

    x87_r7_1 = !(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40) ? a5 : -1f;

    float var_8 = x87_r7_1;
    void* esi = *(a1 + 0x4c);
    uint32_t eax_3 = sub_4f40d0();
    int32_t eax_4 = 0;
    eax_4 = *(esi + 0x1c);
    return (*(((eax_3 * 0x180 + eax_4) << 2) + &g_a96ae0))(esi, &var_1c);
}
