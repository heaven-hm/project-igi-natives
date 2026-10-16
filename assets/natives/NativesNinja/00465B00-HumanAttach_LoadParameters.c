#include "00465B00-HumanAttach_LoadParameters.h"
/* 0x00465b00 HumanAttach_LoadParameters full linked: callers=0 callees=3 */
int32_t sub_465b00(void* a1, int32_t a2)

{
    int32_t var_c = 0;
    int32_t var_8 = 0;
    int32_t var_4 = 0;
    struct status_msg* eax_2 =
        Vehicle_InitPlane_10(sub_4f0ee0(), a1 + 0x20, a1 + 0x70, a1 + 0x128, &var_c);
    uint32_t eax_4 = Level_LoadLevel_3();
    int32_t edx_1 = 0;
    edx_1 = eax_2->head[7];
    int32_t result = *(((eax_4 * 0x180 + edx_1) << 2) + &g_a96ae0);

    if (result)
        result = result(eax_2, a2);

    *(a1 + 0x138) = 1;
    return result;
}
