// Original IGI.EXE function: AnimCam_Update (VA 0x00529AA0; static CFG gate PASS, CFG score 1.000).
#include "AnimCam_Update.h"
int32_t AnimCam_Update(void* context, int32_t* param_2)

{
    for (int32_t i = 0; i < 0x58; )
    {
        i += 4;
        *(i + *param_2 - 4) = 0xc479c000;
    }

    int32_t* item_c = param_2;
    void* item_14 = context;
    Light_ApplyLightmap_7(context);
    int32_t* data_val;
    int32_t entity_2;
    int32_t temp_val;
    data_val = Light_UpdateGlobalLight_7(context, param_2);
    int32_t* item_20 = param_2;
    return Light_U2F(data_val, temp_val, entity_2, context);
}
