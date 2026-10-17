// Original IGI.EXE function: FX_TrailUpdate_7 (VA 0x004868D0; static CFG gate PASS, CFG score 1.000).
#include "FX_TrailUpdate_7.h"
void StatusList_Clear(void* a1)

{
    int32_t i = 0;
    char* dstD = a1 + 0x40;

    do
    {
        if (*dstD)
            FX_SmokeEmit_6(a1, i);

        i += 1;
        dstD = &dstD[0x102c];
    } while (i < 0x18);
}
