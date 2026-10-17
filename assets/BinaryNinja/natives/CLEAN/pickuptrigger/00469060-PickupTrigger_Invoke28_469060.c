// IGI native provenance: PickupTrigger_Invoke28_469060 - 0x00469060 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00469060-PickupTrigger_Invoke28_469060.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_Invoke28_469060.h"

void* PickupTrigger_Invoke28_469060(void* arg1, int32_t* arg2)

{
    void* result = *(arg1 + 0x38);

    if (result == *arg2)
    {
        result = AI_UpdateOrders_28();
        result &= 0x10;
        *(arg1 + 0x81) = *(arg1 + 0x80);
        *(arg1 + 0x80) = result;

        if (result)
        {
            result = *(arg1 + 0x38) - 3;

            if (result <= 5)
            {
                int32_t result_val;

                switch (result)
                {
                    case nullptr:
                    {
                        result_val = 0;
                        break;
                    }
                    case 1:
                    {
                        result_val = 1;
                        break;
                    }
                    case 2:
                    {
                        result_val = 2;
                        break;
                    }
                    case 3:
                    {
                        result_val = 3;
                        break;
                    }
                    case 4:
                    {
                        result_val = 4;
                        break;
                    }
                    case 5:
                    {
                        result_val = 5;
                        break;
                    }
                }

                result = *(AI_SelectTarget_24(result_val) + 0x20);

                if (result != 0xffffffff)
                {
                    AI_CheckSector_27(Script_ExecuteLevelScript_4(result));
                    return AI_TakeCover_28(1);
                }
            }
        }
    }

    return result;
}
