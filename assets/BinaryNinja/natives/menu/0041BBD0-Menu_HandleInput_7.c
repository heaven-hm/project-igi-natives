// Original IGI.EXE function: Menu_HandleInput_7 (VA 0x0041BBD0; static CFG gate PASS, CFG score 1.000).
#include "Menu_HandleInput_7.h"
int32_t* Menu_HandleInput_7(void* a1)

{
    int32_t i_1 = 0x40;
    int32_t* result = a1 + 0x54;
    int32_t i;

    do
    {
        result[1] = 0;
        *result = 0;
        result = &result[0x12];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(a1 + 0x1254) = 0;
    *(a1 + 0x129c) = 0;
    *(a1 + 0x12a0) = 0;
    return result;
}
