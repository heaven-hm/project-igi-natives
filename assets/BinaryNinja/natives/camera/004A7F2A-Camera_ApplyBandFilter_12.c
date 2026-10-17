// Original IGI.EXE function: Camera_ApplyBandFilter_12 (VA 0x004A7F2A; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_12.h"
BOOL Camera_ApplyBandFilter_12(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4 )

{
    int32_t item_8 = param_3;
    int32_t arg_4;
    int32_t data_val = arg_4;
    uint32_t data_1;

    if (data_val + 1 > 0x100)
    {
        char entity_3 = data_val >> 8;
        int32_t saved_esi_1;

        if (!(*(&(**&g_544070)[entity_3] + 1) & 0x80))
        {
            *(&item_8 + 1) = 0;
            item_8 = data_val;
            saved_esi_1 = 1;
        }
        else
        {
            *(&item_8 + 2) = 0;
            item_8 = entity_3;
            *(&item_8 + 1) = data_val;
            saved_esi_1 = 2;
        }

        BOOL result = Camera_SetFieldOfView_27(1, &item_8, saved_esi_1, (&arg_4 + 2), 0, 0, 1);

        if (!result)
            return result;

        data_1 = *(&arg_4 + 2);
    }
    else
        data_1 = (**&g_544070)[data_val];

    return data_1 & param_4;
}
