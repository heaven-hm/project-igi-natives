#include "00489E30-FX_SmokeEmit_14.h"
/* 0x00489e30 FX_SmokeEmit_14 full linked: callers=1 callees=1 */
int32_t* sub_489e30(void* a1)

{
    int32_t i = 0;
    *(a1 + 0x254) = 0;
    int32_t* edi = a1 + 0x260;
    int32_t* result;

    do
    {
        result = sub_489e10(a1 + 0x254, i);
        *edi = 0;
        edi[1] = *result;
        i += 1;
        edi = &edi[2];
    } while (i < 0x11);

    return result;
}
