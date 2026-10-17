// IGI native provenance: PickupTrigger_Invoke28_468B30 - 0x00468B30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00468B30-PickupTrigger_Invoke28_468B30.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_Invoke28_468B30.h"

int32_t PickupTrigger_Invoke28_468B30(void* arg1, int32_t* arg2)

{
    void* 5bdd68_1 = g_5bdd68;
    int32_t result = *(arg1 + 0x38);

    if (result == *arg2)
    {
        result = AI_UpdateOrders_28();
        char edx_1 = *(arg1 + 0x80);
        result &= 0x10;
        *(arg1 + 0x81) = edx_1;
        *(arg1 + 0x80) = result;

        if (result)
        {
            int32_t result_val = *(arg1 + 0x38);
            result = result_val - 3;

            if (result_val == 3)
            {
                result = *(arg1 + 0x81);

                if (!result)
                {
                    result = *(5bdd68_1 + 0x20);

                    if (result > 0)
                    {
                        result -= 1;
                        *(5bdd68_1 + 0x20) = result;
                    }
                }
            }
            else
            {
                int32_t result_1 = result;
                result -= 1;

                if (result_1 == 1)
                {
                    result = edx_1;

                    if (!result)
                    {
                        result = *(5bdd68_1 + 0x20);

                        if (result < g_5bdd6c - 0xf)
                        {
                            *(5bdd68_1 + 0x20) = result + 1;
                            return result + 1;
                        }
                    }
                }
            }
        }
    }

    return result;
}
