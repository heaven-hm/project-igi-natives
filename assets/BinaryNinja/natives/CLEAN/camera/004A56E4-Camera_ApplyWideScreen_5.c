// IGI native provenance: Camera_ApplyWideScreen_5 - 0x004A56E4 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A56E4-Camera_ApplyWideScreen_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyWideScreen_5.h"
long double Camera_ApplyWideScreen_5(long double context , long double param_2 )

{
    bool c1 = false;
    long double result = param_2;
    bool c0;
    bool c2;
    bool c3;

    do
    {
        if (g_93605c == 1)
        {
            int16_t fpu_control;
            long double result_2;
            result_2 = Camera_ResetMatrix_16(fpu_control, result, context);
            result = result_2;
        }
        else
        {
            long double result_1;
            uint8_t f0;
            result_1 = __fprem(result, context);
            result = result_1;

            if (!c2)
            {
                c0 = f0 & 4;
                c1 = f0 & 1;
                c3 = f0 & 2;
            }
        }
    } while (TEST_BITB(
        *(&((c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe)
            + 1),
        2));
    return result;
}
