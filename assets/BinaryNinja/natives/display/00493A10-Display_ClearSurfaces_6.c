// Original IGI.EXE function: Display_ClearSurfaces_6 (VA 0x00493A10; static CFG gate PASS, CFG score 1.000).
#include "Display_ClearSurfaces_6.h"
int32_t* Display_ClearSurfaces_6()

{
    int32_t* data_1 = g_bcad00;

    if (data_1)
    {
        (*(*data_1 + 8))(data_1);
        g_bcad00 = 0;
    }

    int32_t* data_val = g_bcad80;

    if (data_val)
    {
        (*(*data_val + 8))(data_val);
        g_bcad80 = 0;
    }

    int32_t* result = g_bcad90;

    if (result)
    {
        result = (*(*result + 8))(result);
        g_bcad90 = 0;
    }

    return result;
}
