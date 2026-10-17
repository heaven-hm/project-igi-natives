// IGI native provenance: Display_SwapBuffers_14 - 0x00497880 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00497880-Display_SwapBuffers_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SwapBuffers_14.h"
int32_t* Display_SwapBuffers_14(int32_t* context, int32_t param_2)

{
    int32_t* result = context;

    if (param_2)
    {
        int32_t i_1 = param_2 - 1;
        *result = 0;
        result[1] = 0xffffffff;

        if (param_2 != 1)
        {
            int32_t i;

            do
            {
                result[3] = result;
                result[4] = 0xffffffff;
                result = &result[3];
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }
    }

    return result;
}
