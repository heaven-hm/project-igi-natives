// Original IGI.EXE function: Camera_ApplyBandFilter_25 (VA 0x004AC8F3; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_25.h"
int32_t* Camera_ApplyBandFilter_25(int32_t* context, int32_t param_2)

{
    int32_t* dest_val = context;
    int32_t i_1 = 3;
    int32_t f0 = param_2 / 0x20;
    char f1 = param_2 % 0x20;
    param_2 = 0;
    int32_t i;

    do
    {
        int32_t data_6 = *dest_val;
        *dest_val = data_6 >> (f1 & 0x1f) | param_2;
        dest_val = &dest_val[1];
        i = i_1;
        i_1 -= 1;
        param_2 = (data_6 & ~(0xffffffff << (f1 & 0x1f))) << ((0x20 - f1) & 0x1f);
    } while (i != 1);
    int32_t context_1 = 2;
    int32_t* entity_5 = 8;
    int32_t* result;
    int32_t* f3_1;

    do
    {
        if (context_1 < f0)
        {
            result = context;
            *(entity_5 + result) = 0;
        }
        else
        {
            result = *(entity_5 - (f0 << 2) + context);
            *(entity_5 + context) = result;
        }

        context_1 -= 1;
        f3_1 = entity_5;
        entity_5 -= 4;
    } while (f3_1 - 4 >= 0);
    return result;
}
