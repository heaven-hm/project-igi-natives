// Original IGI.EXE function: FlashBang_LoadParameters (VA 0x0047E790; static CFG gate PASS, CFG score 0.917).
#include "FlashBang_LoadParameters.h"
struct status_msg* FlashBang_LoadParameters(void* context)

{
    uint32_t data_1 = g_5c114c + 0x18;
    int32_t item_c = 0;
    int32_t item_8 = 0;
    int32_t item_4 = 0;
    int32_t item_20;
    memcpy(&item_20,
        "\x9a\x99\x19\x45\x9a\x99\x19\x45\x00\x00\xfe\x42\x00\x00\xfe\x42\x00\x00\xfe\x42", 0x14);
    void* data_2 = Level_StartMission_4();
    int32_t item_18;
    struct status_msg* result = Script_FormatString_30(Script_FormatString(), data_2, data_1, &item_c, &item_18, &item_20,
        0x49480000, 0x1000008, 0, 0x3c6eeeef, 0, 0x14, 0);
    *(context + 0x38) = result;
    return result;
}
