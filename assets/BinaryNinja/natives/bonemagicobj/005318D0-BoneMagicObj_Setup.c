// Original IGI.EXE function: BoneMagicObj_Setup (VA 0x005318D0; static CFG gate PASS, CFG score 0.889).
#include "BoneMagicObj_Setup.h"
int32_t BoneMagicObj_Setup(int32_t* context, int32_t* param_2)

{
    int32_t* data_1 = DynObj_Missing(*param_2);

    if (data_1)
    {
        int16_t* entity_1 = param_2[0x23];
        context[0x47] = entity_1;
        int32_t item_20 = param_2[1];
        Render_DrawBoneMesh_12(context, *entity_1, data_1);
        DynObj_LinkDynamicCube_8(param_2[1], context, &param_2[2], context[0x28], 2);
        Render_SetupLighting_9(&context[0x1a], 0, *(context[0x47] + 4), 1);
        memcpy(&context[0x36], &param_2[8], 0x18);
        memcpy(&context[0x3c], &param_2[0x18], 0x28);
        memcpy(&context[0x1e], &param_2[0xe], 0x28);
        Render_DrawBoneMesh_7(&context[0x1e], &context[0x1a]);
        context[0x46] = param_2[0x22];
        context[0x48] = 0;
        context[0x49] = 0;
        context[0x4a] = 0;
        return 0;
    }

    int32_t saved_ebx_1 = *param_2;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
