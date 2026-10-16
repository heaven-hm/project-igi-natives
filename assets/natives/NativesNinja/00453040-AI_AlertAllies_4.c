#include "00453040-AI_AlertAllies_4.h"
/* 0x00453040 AI_AlertAllies_4 full linked: callers=1 callees=1 */
int32_t sub_453040(int32_t* a1, int32_t* a2, void* a3, int32_t a4)

{
    *a1 = 0;
    *a2 = 0;
    void* eax_1 = sub_4f9720(a3, a4);
    *a1 = *(eax_1 + 0x28) * 0.5f;
    int32_t result = *(eax_1 + 0x28) * 0.5f;
    *a2 = result;
    return result;
}
