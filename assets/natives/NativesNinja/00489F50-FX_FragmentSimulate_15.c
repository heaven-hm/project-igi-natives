#include "00489F50-FX_FragmentSimulate_15.h"
/* 0x00489f50 FX_FragmentSimulate_15 full linked: callers=4 callees=0 */
int32_t sub_489f50(void* a1)

{
    int32_t result;
    result = 0;

    if (*(&*(*(*(a1 + 0x4ec) + 0x70) + 4) + 1) & 1)
        result = 1;

    return result;
}
