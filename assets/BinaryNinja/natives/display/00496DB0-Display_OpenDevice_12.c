// Original IGI.EXE function: Display_OpenDevice_12 (VA 0x00496DB0; static CFG gate PASS, CFG score 1.000).
#include "Display_OpenDevice_12.h"
long double Display_OpenDevice_12(int32_t context, int32_t param_2)

{
    if (!g_6840e9)
        return 0.0f;

    int32_t* data_1 = Display_RestoreDevice_10(context, param_2);

    if (!data_1)
        return 0.0f;

    int32_t item_4 = 0;
    return data_1[8] / data_1[7];
}
