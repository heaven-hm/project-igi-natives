#include "005055D0-Physics_CalculateSplineLength_4.h"
/* 0x005055d0 Physics_CalculateSplineLength_4 full linked: callers=1 callees=1 */
int32_t sub_5055d0(void* a1, int32_t a2)

{
    uint32_t eax = sub_504e00();
    int32_t edx = 0;
    edx = *(a1 + 0x1c);
    return (*(((eax * 0x180 + edx) << 2) + &g_a96ae0))(a1, a2);
}
