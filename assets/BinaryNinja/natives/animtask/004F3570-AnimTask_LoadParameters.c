// Original IGI.EXE function: AnimTask_LoadParameters (VA 0x004F3570; static CFG gate PASS, CFG score 1.000).
#include "AnimTask_LoadParameters.h"
int32_t AnimTask_LoadParameters(void* a1, int32_t a2)

{
    int32_t* dstD = a2;
    int32_t srcS = *dstD;
    int32_t srcS1 = srcS + 1;
    int32_t result = Script_GetArg(dstD[1], srcS);
    int32_t flagP = 0;
    *(a1 + 0x20150) = result;

    if (result > 0)
    {
        float* ctxB1 = a1 + 0xf8;

        do
        {
            float srcS2 = srcS1 + 1;
            char valA3 = Script_GetArg(dstD[1], srcS1);
            ctxB1[-1] = valA3;

            if (valA3 != 0x20)
            {
                srcS1 = srcS2 + 1;
                Profile_ValueSet(dstD[1], srcS2);
            }
            else
            {
                srcS1 = srcS2 + 1;
                Profile_ValueSet(dstD[1], srcS2);
🚫🚫🚫                int32_t v_8_1 = /* int32_t v_8_1 =
                    (unimplemented  {fistp qword [esp+0x18], fp0}).d */;
                /* unimplemented  {fistp qword [esp+0x18], fp0} */
                a2 = v_8_1;
🚫🚫                /* unimplemented  {fild fp0, dword [esp+0x20]} */
            }

            flagP += 1;
🚫🚫🚫            *ctxB1 =
            /* unimplemented  {fstp dword [ctxB], fp0} */
            int16_t idx = idx + 1;
            result = *(a1 + 0x20150);
            ctxB1 = &ctxB1[2];
        } while (flagP < result);
    }

    *dstD = srcS1;
    return result;
}
