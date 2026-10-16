#include "004868D0-FX_TrailUpdate_7.h"
/* 0x004868d0 FX_TrailUpdate_7 full linked: callers=4 callees=1 */
void StatusList_Clear(void* a1)

{
    int32_t i = 0;
    char* edi = a1 + 0x40;

    do
    {
        if (*edi)
            sub_485d20(a1, i);

        i += 1;
        edi = &edi[0x102c];
    } while (i < 0x18);
}
