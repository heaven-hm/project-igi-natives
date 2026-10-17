// Original IGI.EXE function: Display_OpenDevice_19 (VA 0x0049B430; static CFG gate PASS, CFG score 1.000).
#include "Display_OpenDevice_19.h"
void* Display_OpenDevice_19(void* a1, int32_t a2, int32_t a3)

{
    void* objC = a1 * 0x1f5;

    if (*((objC << 3) + &g_721560) + a3 > 0xffff)
        Display_MeshFormatNotSupport(a1);

    *((objC << 3) + &g_7205c0 + (*((objC << 3) + &g_721564) << 2)) = a2;
    void* result = *((objC << 3) + &g_721564) + 1;
    int32_t tmpD3 = *((objC << 3) + &g_721560) + a3;
    *((objC << 3) + &g_721564) = result;
    *((objC << 3) + &g_721560) = tmpD3;

    if (result != 0x3e8)
        return result;

    return Display_MeshFormatNotSupport(a1);
}
