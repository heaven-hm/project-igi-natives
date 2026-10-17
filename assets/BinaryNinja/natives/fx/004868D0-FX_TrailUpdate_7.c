// Original IGI.EXE function: FX_TrailUpdate_7 (VA 0x004868D0; static CFG gate PASS, CFG score 1.000).
#include "FX_TrailUpdate_7.h"
void StatusList_Clear(void* context)

{
    int32_t i = 0;
    char* dest_val = context + 0x40;

    do
    {
        if (*dest_val)
            FX_SmokeEmit_6(context, i);

        i += 1;
        dest_val = &dest_val[0x102c];
    } while (i < 0x18);
}
