// Original IGI.EXE function: Gun_Cleanup_6 (VA 0x0047A8E0; static CFG gate PASS, CFG score 1.000).
#include "Gun_Cleanup_6.h"
int32_t Gun_Cleanup_6(void* a1, char* a2)

{
    int32_t result = *(a2 + 8);

    if (result != a1)
    {
        int32_t objC1 = *(a1 + 0x14);

        if (result != objC1)
        {
            result = *(a2 + 0xc);

            if (result != a1 && result != objC1)
            {
                if (!objC1)
                {
                    *a2 = 1;
                    return result;
                }

                int16_t valA = MagicObj_GetTypeId();
                objC1 = *(*(a1 + 0x14) + 0x1c);
                result = TaskType_IsDerivedFrom(objC1, valA);

                if (!result)
                {
                    *a2 = 1;
                    return result;
                }

                result = *(a2 + 8);

                if (result != *(*(a1 + 0x14) + 0x130))
                {
                    *a2 = 1;
                    return result;
                }
            }
        }
    }

    *a2 = 0;
    return result;
}
