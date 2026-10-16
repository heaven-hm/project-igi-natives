#include "SoundSys_EvaluateTrigger_13.h"
int32_t SoundSys_EvaluateTrigger_13(void* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)

{
    int32_t valA1;
    int32_t tmpD;
    tmpD = HIGHD(0xff - a5);
    valA1 = LOWD(0xff - a5);
    int32_t dstD1 = (valA1 - tmpD) >> 1;
    int32_t result;

    if (!dstD1)
        result = a2;

    if (dstD1 || result || a3 || a4)
    {
        int32_t objC1 = Display_ClearSurfaces_13(a1 + 0x30, 1);

        if (dstD1)
        {
            int32_t valA4 = dstD1 & 0xff;
            int32_t objC2 = *(a1 + 0x54);
            int32_t v_30_1 = objC2;
            int32_t v_34_1 = objC2;
            int32_t v_38_1 = objC2;
            int32_t objC3 = *(a1 + 0x48);
            int32_t v_3c_1 = objC3;
            objC1 = Sys_ReadFileBlock_14(objC3, *(a1 + 0x4c), *(a1 + 0x50), objC2, valA4, valA4, valA4,
                0x10, 0);
        }

        result = a2;

        if (result || a3 || a4)
        {
            int32_t v_24_2 = objC1;
            int32_t v_28_2 = objC1;
            int32_t v_2c_2 = objC1;
            int32_t v_30_3 = objC1;
            int32_t v_34_3 = objC1;
            int32_t objC4 = *(a1 + 0x4c);
            int32_t v_38_3 = objC4;
            int32_t v_3c_3 = objC4;
            result = Sys_ReadFileBlock_14(*(a1 + 0x48), objC4, *(a1 + 0x50), *(a1 + 0x54),
                result & 0xff, a3 & 0xff, a4 & 0xff, 8, 0);
        }
    }

    return result;
}
