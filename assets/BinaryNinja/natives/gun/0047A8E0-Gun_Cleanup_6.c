// Original IGI.EXE function: Gun_Cleanup_6 (VA 0x0047A8E0; static CFG gate PASS, CFG score 1.000).
#include "Gun_Cleanup_6.h"
int32_t Gun_Cleanup_6(void* context, char* param_2)

{
    int32_t result = *(param_2 + 8);

    if (result != context)
    {
        int32_t entity_1 = *(context + 0x14);

        if (result != entity_1)
        {
            result = *(param_2 + 0xc);

            if (result != context && result != entity_1)
            {
                if (!entity_1)
                {
                    *param_2 = 1;
                    return result;
                }

                int16_t data_val = MagicObj_GetTypeId();
                entity_1 = *(*(context + 0x14) + 0x1c);
                result = TaskType_IsDerivedFrom(entity_1, data_val);

                if (!result)
                {
                    *param_2 = 1;
                    return result;
                }

                result = *(param_2 + 8);

                if (result != *(*(context + 0x14) + 0x130))
                {
                    *param_2 = 1;
                    return result;
                }
            }
        }
    }

    *param_2 = 0;
    return result;
}
