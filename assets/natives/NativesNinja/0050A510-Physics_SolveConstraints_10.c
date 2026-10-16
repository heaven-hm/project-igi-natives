#include "0050A510-Physics_SolveConstraints_10.h"
/* 0x0050a510 Physics_SolveConstraints_10 full linked: callers=1 callees=4 */
void* sub_50a510(void* a1 @ 0x8)

{
    int32_t* esi = *(a1 + 0x98);
    void* eax = sub_4a6e17(esi);
    sub_4a52a4(esi, nullptr, FILE_END);
    void* result = sub_4a6e17(esi);
    sub_4a52a4(esi, eax, FILE_BEGIN);
    return result;
}
