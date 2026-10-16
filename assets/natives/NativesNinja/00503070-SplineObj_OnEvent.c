#include "00503070-SplineObj_OnEvent.h"
/* 0x00503070 SplineObj_OnEvent full linked: callers=0 callees=2 */
int32_t* sub_503070(void* a1, int32_t* a2)

{
    int32_t* result = *(a1 + 0xf0);

    if (result)
    {
        double var_c_1 = result[0x3e] * 0.000244140625f;
        Game_DataSymbolLoad(0xa7a50c, "Segment length: %f meter\n");
        void* eax = *(a1 + 0xf0);
        double var_c_2 = (*(eax + 0x100) - *(eax + 0xfc)) * 0.000244140625f;
        int32_t var_10_1 = 0xa7a50c;
        Game_DataSymbolLoad(0xa7a50c, "%sModel length: %f meter\n");
        result = a2;
        *result = 0xa7a50c;
    }

    return result;
}
