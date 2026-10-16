#include "gi_platform.h"
#include "004868D0-FX_TrailUpdate_7.h"
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
