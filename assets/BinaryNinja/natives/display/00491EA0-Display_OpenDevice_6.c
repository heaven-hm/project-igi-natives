// Original IGI.EXE function: Display_OpenDevice_6 (VA 0x00491EA0; static CFG gate PASS, CFG score 1.000).
#include "Display_OpenDevice_6.h"
int32_t Display_OpenDevice_6(int32_t a1, int32_t a2)

{
    int32_t v_c = a1;
    int32_t result;
    int32_t* v_8 = &result;
    int32_t v_4 = a2;
    int32_t objC2 = *((g_542334 << 2) + &g_a94e84);
    result = 0;

    if (!objC2)
        return 0;

    objC2(&v_c);
    return result;
}
