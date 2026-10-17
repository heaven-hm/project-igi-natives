// Original IGI.EXE function: Physics_InterpolateWaypoint_14 (VA 0x0050EC40; static CFG gate PASS, CFG score 0.933).
#include "Physics_InterpolateWaypoint_14.h"
int32_t* Physics_InterpolateWaypoint_14(void* context)

{
    if (*(context + 0xc) == 2)
    {
        int32_t* result;
        void item_84;

        if (*(context + 8) >= 0)
            result = Display_CloseDevice_14(0x84);
        else
            result = &item_84;

        if (!result)
            return result;

        int32_t* temp_1 = g_a84a58;
        int32_t source_1 = g_a84a50;
        result[1] = g_54e890;
        result[0xf] = *(context + 4);

        if (!source_1)
            *(result + 0x42) = 0;
        else
        {
            memcpy(&result[3], source_1, 0x24);
            *(result + 0x42) = 1;
        }

        if (!temp_1)
            result[0x10] = 0;
        else
        {
            result[0xc] = *temp_1;
            result[0xd] = temp_1[1];
            int32_t temp_2 = temp_1[2];
            result[0x10] = 1;
            result[0xe] = temp_2;
        }

        result[0x11] = *(*(context + 0x10) + 0xc);
        result[0x12] = *(*(context + 0x10) + 0x10);
        result[0x19] = *(*(context + 0x10) + 0x30);
        result[0x1a] = *(*(context + 0x10) + 0x34);
        result[0x13] = **(context + 0x10);
        result[0x14] = *(*(context + 0x10) + 4);
        result[0x16] = *(*(context + 0x10) + 0x18);
        result[0x17] = *(*(context + 0x10) + 0x1c);
        result[0x18] = *(*(context + 0x10) + 0x20);
        result[0x1b] = **(context + 0x10);
        bool flag_1_1 = !(result[0xf] & 0x80000);
        result[0x1c] = *(*(context + 0x10) + 4);

        if (flag_1_1)
            result[0x15] = 0x3f800000;
        else
            result[0x15] = *(*(context + 0x10) + 0x14);

        int32_t context_1 = *(context + 8);

        if (context_1 >= 0)
            return Display_ClearSurfaces_14(context_1, result);

        return Display_SyncVSync_14(result);
    }

    Error_Show("Strip length not supported.");

    while (true)
        /* nop */
}
