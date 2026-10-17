// Original IGI.EXE function: HumanPlayer_PlayFootstep (VA 0x00408720; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_PlayFootstep.h"
int32_t HumanPlayer_PlayFootstep(void* context)

{
    int32_t item_8;
    int32_t data_val = Script_ParseEnumReal32_13(context, &item_8);
    int32_t item_4;
    int32_t temp_1 = item_8 + item_4;

    if (temp_1)
        return 1;

    return *(HumanPlayer_LoadParameters_13(data_val, temp_1, item_4, context) + 0x6dc);
}
