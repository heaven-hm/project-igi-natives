#include "0047E790-FlashBang_LoadParameters.h"
/* 0x0047e790 FlashBang_LoadParameters full linked: callers=0 callees=4 */
struct status_msg* sub_47e790(void* a1)

{
    uint32_t eax_1 = g_5c114c + 0x18;
    int32_t var_c = 0;
    int32_t var_8 = 0;
    int32_t var_4 = 0;
    int32_t var_20;
    memcpy(&var_20,
        "\x9a\x99\x19\x45\x9a\x99\x19\x45\x00\x00\xfe\x42\x00\x00\xfe\x42\x00\x00\xfe\x42", 0x14);
    void* eax_2 = Level_StartMission_4();
    int32_t var_18;
    struct status_msg* result = sub_4fdf00(sub_4f0ee0(), eax_2, eax_1, &var_c, &var_18, &var_20,
        0x49480000, 0x1000008, 0, 0x3c6eeeef, 0, 0x14, 0);
    *(a1 + 0x38) = result;
    return result;
}
