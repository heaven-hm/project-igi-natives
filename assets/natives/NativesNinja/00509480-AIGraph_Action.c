#include "00509480-AIGraph_Action.h"
/* 0x00509480 AIGraph_Action full linked: callers=0 callees=6 */
int32_t sub_509480(void* a1 @ 0x8)

{
    void* esi = a1;
    sub_4fa850(*(esi + 4), &a1);
    int32_t edi = 0;
    void var_4;

    if (a1 > 0)
    {
        do
        {
            sub_4fa850(*(esi + 4), &var_4);
            sub_4fa850(*(esi + 4), &var_4);
            edi += 1;
        } while (edi < a1);
    }

    int32_t result_1;
    sub_4fa850(*(esi + 4), &result_1);
    int32_t result = result_1;
    int32_t edi_1 = 0;

    if (result > 0)
    {
        do
        {
            sub_4fa850(*(esi + 4), &var_4);
            sub_4fa850(*(esi + 4), &var_4);
            result = result_1;
            edi_1 += 1;
        } while (edi_1 < result);
    }

    return result;
}
