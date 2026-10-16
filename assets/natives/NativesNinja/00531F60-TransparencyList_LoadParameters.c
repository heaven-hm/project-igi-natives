#include "00531F60-TransparencyList_LoadParameters.h"
/* 0x00531f60 TransparencyList_LoadParameters full linked: callers=0 callees=3 */
int32_t sub_531f60(void* a1)

{
    sub_4c6840(*(a1 + 0x68), a1, 0xffffffff);
    sub_4b0d10(*(a1 + 0x74));
    void* edx = *(a1 + 0x78);
    *(a1 + 0x74) = 0;
    int32_t result = sub_4b0d10(edx);
    *(a1 + 0x78) = 0;
    return result;
}
