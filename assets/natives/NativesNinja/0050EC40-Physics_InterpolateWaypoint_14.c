#include "0050EC40-Physics_InterpolateWaypoint_14.h"
/* 0x0050ec40 Physics_InterpolateWaypoint_14 full linked: callers=0 callees=5 */
int32_t* sub_50ec40(void* a1)

{
    if (*(a1 + 0xc) == 2)
    {
        int32_t* result;
        void var_84;

        if (*(a1 + 8) >= 0)
            result = sub_497800(0x84);
        else
            result = &var_84;

        if (!result)
            return result;

        int32_t* edx_1 = g_a84a58;
        int32_t esi_1 = g_a84a50;
        result[1] = g_54e890;
        result[0xf] = *(a1 + 4);

        if (!esi_1)
            *(result + 0x42) = 0;
        else
        {
            memcpy(&result[3], esi_1, 0x24);
            *(result + 0x42) = 1;
        }

        if (!edx_1)
            result[0x10] = 0;
        else
        {
            result[0xc] = *edx_1;
            result[0xd] = edx_1[1];
            int32_t edx_2 = edx_1[2];
            result[0x10] = 1;
            result[0xe] = edx_2;
        }

        result[0x11] = *(*(a1 + 0x10) + 0xc);
        result[0x12] = *(*(a1 + 0x10) + 0x10);
        result[0x19] = *(*(a1 + 0x10) + 0x30);
        result[0x1a] = *(*(a1 + 0x10) + 0x34);
        result[0x13] = **(a1 + 0x10);
        result[0x14] = *(*(a1 + 0x10) + 4);
        result[0x16] = *(*(a1 + 0x10) + 0x18);
        result[0x17] = *(*(a1 + 0x10) + 0x1c);
        result[0x18] = *(*(a1 + 0x10) + 0x20);
        result[0x1b] = **(a1 + 0x10);
        bool cond:1_1 = !(result[0xf] & 0x80000);
        result[0x1c] = *(*(a1 + 0x10) + 4);

        if (cond:1_1)
            result[0x15] = 0x3f800000;
        else
            result[0x15] = *(*(a1 + 0x10) + 0x14);

        int32_t ebx_1 = *(a1 + 8);

        if (ebx_1 >= 0)
            return sub_4978b0(ebx_1, result);

        return sub_497860(result);
    }

    Error_Show("Strip length not supported.");

    while (true)
        /* nop */
}
