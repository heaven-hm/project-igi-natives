#include "DynObj_ParseConfigFile_12.h"
int32_t* DynObj_ParseConfigFile_12(int32_t a1, int32_t* a2, int32_t a3, int32_t a4)

{
    int32_t* srcS = a2;
    int32_t i = 0;
    int32_t* v_1c = &srcS[3];
    int32_t result_1;

    do
    {
        int32_t* tmpD1 = *v_1c;

        if (tmpD1)
        {
            int32_t valA1 = *tmpD1;
            double v_18;
            memcpy(&v_18, a4, 0x18);
            v_18 = ((i & 1) * 2 - 1) * valA1 + v_18;
            double v_10 = ((i & 2) - 1) * valA1 + v_10;
            result_1 = &v_18;
            double v_8 = ((i >> 1 & 2) - 1) * valA1 + v_8;
            DynObj_ParseConfigFile_12(a1, tmpD1, a3, result_1);
            srcS = a2;
        }

        i += 1;
        v_1c = &v_1c[1];
    } while (i < 8);

    int32_t* result = srcS[0xf];

    if (result)
    {
        result_1 = result;
        result = DynCubeObj_Action(result_1);
    }

    if (*srcS == 0x100000)
    {
        result_1 = 0x49800000;
        result = DynCubeObj_OnEvent(0x100, a1, a3, a4, result_1);
        srcS[0xf] = result;
    }

    return result;
}
