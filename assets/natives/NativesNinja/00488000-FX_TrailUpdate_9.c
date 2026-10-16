#include "00488000-FX_TrailUpdate_9.h"
/* 0x00488000 FX_TrailUpdate_9 full linked: callers=2 callees=5 */
void* sub_488000(void* a1)

{
    void* esi = a1;
    void* result = *(esi + 0x7c);

    if (!result)
        return result;

    Qhash_Init(1);
    sub_488040(*(esi + 0x7c), esi);
    a1 = 1;
    QTask_InitContext_2(esi, sub_4f1a70(), &a1);
    return Qhash_Reset();
}
