// Original IGI.EXE function: SplineObj_OnEvent (VA 0x00503070; static CFG gate PASS, CFG score 1.000).
#include "SplineObj_OnEvent.h"
int32_t* SplineObj_OnEvent(void* context, int32_t* param_2)

{
    int32_t* result = *(context + 0xf0);

    if (result)
    {
        double item_c_1 = result[0x3e] * 0.000244140625f;
        Game_DataSymbolLoad(0xa7a50c, "Segment length: %f meter\n");
        void* data_val = *(context + 0xf0);
        double item_c_2 = (*(data_val + 0x100) - *(data_val + 0xfc)) * 0.000244140625f;
        int32_t item_10_1 = 0xa7a50c;
        Game_DataSymbolLoad(0xa7a50c, "%sModel length: %f meter\n");
        result = param_2;
        *result = 0xa7a50c;
    }

    return result;
}
