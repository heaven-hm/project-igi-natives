#include "0052D030-Light_CalculateAttenuation_9.h"
/* 0x0052d030 Light_CalculateAttenuation_9 full linked: callers=1 callees=1 */
int32_t sub_52d030(void* a1)

{
    g_a84568 = 0;
    int32_t* eax = *(a1 + 0x50);
    (*(*eax + 8))(eax);
    return sub_4b0d10(a1);
}
