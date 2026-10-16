#include "FlashBang_LoadParameters.h"
struct status_msg* FlashBang_LoadParameters(void* a1)

{
    uint32_t valA1 = g_5c114c + 0x18;
    int32_t v_c = 0;
    int32_t v_8 = 0;
    int32_t v_4 = 0;
    int32_t v_20;
    memcpy(&v_20,
        "\x9a\x99\x19\x45\x9a\x99\x19\x45\x00\x00\xfe\x42\x00\x00\xfe\x42\x00\x00\xfe\x42", 0x14);
    void* valA2 = Level_StartMission_4();
    int32_t v_18;
    struct status_msg* result = Script_FormatString_30(Script_FormatString(), valA2, valA1, &v_c, &v_18, &v_20,
        0x49480000, 0x1000008, 0, 0x3c6eeeef, 0, 0x14, 0);
    *(a1 + 0x38) = result;
    return result;
}
