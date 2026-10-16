#include "SplineObj_OnEvent.h"
int32_t* SplineObj_OnEvent(void* a1, int32_t* a2)

{
    int32_t* result = *(a1 + 0xf0);

    if (result)
    {
        double v_c_1 = result[0x3e] * 0.000244140625f;
        Game_DataSymbolLoad(0xa7a50c, "Segment length: %f meter\n");
        void* valA = *(a1 + 0xf0);
        double v_c_2 = (*(valA + 0x100) - *(valA + 0xfc)) * 0.000244140625f;
        int32_t v_10_1 = 0xa7a50c;
        Game_DataSymbolLoad(0xa7a50c, "%sModel length: %f meter\n");
        result = a2;
        *result = 0xa7a50c;
    }

    return result;
}
