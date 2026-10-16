#include "005092A0-AIGraph_Cleanup.h"
/* 0x005092a0 AIGraph_Cleanup full linked: callers=0 callees=2 */
char* sub_5092a0(int32_t* a1)

{
    void* esi = a1[1];
    sub_5092e0(esi);
    char* result = *(esi + 0xb8);

    if (!result)
        return result;

    int32_t esi_1 = *(esi + 0x58);
    return sub_4f9cd0(a1, result, (esi_1 * esi_1) << 3);
}
