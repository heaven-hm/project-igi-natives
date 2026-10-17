// IGI native provenance: MathSys_Invoke4 - 0x004AD8BA - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AD8BA-MathSys_Invoke4.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke4.h"

int32_t MathSys_Invoke4()

{
    int32_t result = 0;
    int32_t i = 3;

    if (g_c321e0 > 3)
    {
        do
        {
            int32_t* eax_2 = *(g_c311dc + (i << 2));

            if (eax_2)
            {
                int32_t* context_val;

                if (eax_2[3] & 0x83)
                {
                    context_val = eax_2;

                    if (Camera_UpdateTransform_4(eax_2) != 0xffffffff)
                        result += 1;
                }

                if (i >= 0x14)
                {
                    int32_t* var_c_2 = *(g_c311dc + (i << 2));
                    Camera_UpdateTransform_9(context_val);
                    context_val = var_c_2;
                    *(g_c311dc + (i << 2)) = 0;
                }
            }

            i += 1;
        } while (i < g_c321e0);
    }

    return result;
}
