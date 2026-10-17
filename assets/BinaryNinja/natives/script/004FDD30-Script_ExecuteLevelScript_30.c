// Original IGI.EXE function: Script_ExecuteLevelScript_30 (VA 0x004FDD30; static CFG gate PASS, CFG score 1.000).
#include "Script_ExecuteLevelScript_30.h"
void Script_ExecuteLevelScript_30(void* context, int32_t param_2)

{
    int32_t source_val = *(context + 0xf0);

    if (!source_val)
        return;

    if (source_val - 1 != param_2)
    {
        int32_t data_1 = *(context + 0x6c);
        int32_t dest_1 = *(data_1 + (param_2 << 2));
        *(data_1 + (param_2 << 2)) = *(data_1 + (source_val << 2) - 4);
        *(*(context + 0x6c) + (*(context + 0xf0) << 2) - 4) = dest_1;
    }

    *(context + 0xf0) -= 1;
}
