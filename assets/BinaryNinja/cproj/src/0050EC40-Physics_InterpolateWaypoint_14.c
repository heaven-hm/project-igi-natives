#include "gi_platform.h"
#include "0050EC40-Physics_InterpolateWaypoint_14.h"
int32_t* Physics_InterpolateWaypoint_14(void* a1)

{
    if ((*(int32_t*)(uintptr_t)(a1 + 0xc)) == 2)
    {
        int32_t* result;
        char v_84;

        if ((*(int32_t*)(uintptr_t)(a1 + 8)) >= 0)
            result = Display_CloseDevice_14(0x84);
        else
            result = &v_84;

        if (!result)
            return result;

        int32_t* tmpD1 = g_a84a58;
        int32_t srcS1 = g_a84a50;
        result[1] = g_54e890;
        result[0xf] = (*(int32_t*)(uintptr_t)(a1 + 4));

        if (!srcS1)
            *(result + 0x42) = 0;
        else
        {
            memcpy(&result[3], srcS1, 0x24);
            *(result + 0x42) = 1;
        }

        if (!tmpD1)
            result[0x10] = 0;
        else
        {
            result[0xc] = *tmpD1;
            result[0xd] = tmpD1[1];
            int32_t tmpD2 = tmpD1[2];
            result[0x10] = 1;
            result[0xe] = tmpD2;
        }

        result[0x11] = (*(int32_t*)(uintptr_t)(*(a1 + 0x10) + 0xc));
        result[0x12] = (*(int32_t*)(uintptr_t)(*(a1 + 0x10) + 0x10));
        result[0x19] = (*(int32_t*)(uintptr_t)(*(a1 + 0x10) + 0x30));
        result[0x1a] = (*(int32_t*)(uintptr_t)(*(a1 + 0x10) + 0x34));
        result[0x13] = *(*(int32_t*)(uintptr_t)(a1 + 0x10));
        result[0x14] = (*(int32_t*)(uintptr_t)(*(a1 + 0x10) + 4));
        result[0x16] = (*(int32_t*)(uintptr_t)(*(a1 + 0x10) + 0x18));
        result[0x17] = (*(int32_t*)(uintptr_t)(*(a1 + 0x10) + 0x1c));
        result[0x18] = (*(int32_t*)(uintptr_t)(*(a1 + 0x10) + 0x20));
        result[0x1b] = *(*(int32_t*)(uintptr_t)(a1 + 0x10));
        bool cond_1_1 = !(result[0xf] & 0x80000);
        result[0x1c] = (*(int32_t*)(uintptr_t)(*(a1 + 0x10) + 4));

        if (cond_1_1)
            result[0x15] = 0x3f800000;
        else
            result[0x15] = (*(int32_t*)(uintptr_t)(*(a1 + 0x10) + 0x14));

        int32_t ctxB1 = (*(int32_t*)(uintptr_t)(a1 + 8));

        if (ctxB1 >= 0)
            return Display_ClearSurfaces_14(ctxB1, result);

        return Display_SyncVSync_14(result);
    }

    Error_Show("Strip length not supported.");

    while (true)
        /* nop */
}
