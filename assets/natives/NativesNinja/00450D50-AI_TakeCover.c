#include "00450D50-AI_TakeCover.h"
/* 0x00450d50 AI_TakeCover full linked: callers=12 callees=1 */
int32_t sub_450d50(void* a1, int32_t a2)

{
    uint32_t eax = sub_450c80();
    int32_t edx = 0;
    edx = *(a1 + 0x1c);
    return (*(((eax * 0x180 + edx) << 2) + &g_a96ae0))(a1, a2);
}
