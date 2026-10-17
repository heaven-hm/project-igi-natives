// Original IGI.EXE function: Sys_UnknownDataType_3 (VA 0x004BCCC0; static CFG gate PASS, CFG score 1.000).
#include "Sys_UnknownDataType_3.h"
int32_t Sys_UnknownDataType_3(void* context, int32_t* param_2, int32_t* param_3, int32_t* param_4)

{
    if (param_4)
        *param_4 = *(*(context + 0x28) + (*(context + 0x1c) << 2));

    int32_t entity_1 = *(*(context + 0x28) + (*(context + 0x1c) << 2));
    int32_t entity_4;
    int32_t temp_7;

    if (entity_1 == 1 || entity_1 == 2 || entity_1 == 5)
    {
    label_4bcd1a:

        if (param_2)
            *param_2 = *(*(context + 0x24) + (*(context + 0x18) << 2));

        int32_t temp_6 = *(context + 0x18);
        entity_4 = 4;
        *(context + 0x1c) += 1;
        temp_7 = temp_6 + 1;
    }
    else
    {
        int32_t* entity_2;

        if (entity_1 != 3)
        {
            if (entity_1 == 4)
            {
                entity_2 = param_2;

                if (!entity_2)
                    goto label_4bcd52;

                goto label_4bcd50;
            }

            if (entity_1 == 6)
                goto label_4bcd1a;

            if (entity_1 == 7)
            {
                entity_2 = param_2;

                if (!entity_2)
                    goto label_4bcd52;

                goto label_4bcd50;
            }

            Error_Show("Unknown data type.");

            while (true)
                /* nop */
        }
        else
        {
            entity_2 = param_2;

            if (!entity_2)
                goto label_4bcd52;

        label_4bcd50:
            *entity_2 = *(context + 0x24) + (*(context + 0x18) << 2) + 4;
        label_4bcd52:
            int32_t temp_10 = *(context + 0x18);
            int32_t entity_5 = *(context + 0x24);
            entity_4 = *(entity_5 + (temp_10 << 2)) + 1;
            *(context + 0x1c) += 1;
            temp_7 = temp_10 + *(entity_5 + (temp_10 << 2)) + 1;
        }
    }

    *(context + 0x18) = temp_7;

    if (param_3)
        *param_3 = entity_4;

    return 1;
}
