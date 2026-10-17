// Original IGI.EXE function: HumanAttach_LoadParameters (VA 0x00465B00; static CFG gate PASS, CFG score 1.000).
#include "HumanAttach_LoadParameters.h"
int32_t HumanAttach_LoadParameters(void* context, int32_t param_2)

{
    int32_t item_c = 0;
    int32_t item_8 = 0;
    int32_t item_4 = 0;
    struct status_msg* data_2 =
        Vehicle_InitPlane_10(Script_FormatString(), context + 0x20, context + 0x70, context + 0x128, &item_c);
    uint32_t data_4 = Level_LoadLevel_3();
    int32_t temp_1 = 0;
    temp_1 = data_2->head[7];
    int32_t result = *(((data_4 * 0x180 + temp_1) << 2) + &g_a96ae0);

    if (result)
        result = result(data_2, param_2);

    *(context + 0x138) = 1;
    return result;
}
