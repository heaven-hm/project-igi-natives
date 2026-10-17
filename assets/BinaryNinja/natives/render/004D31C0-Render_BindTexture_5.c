// Original IGI.EXE function: Render_BindTexture_5 (VA 0x004D31C0; static CFG gate PASS, CFG score 1.000).
#include "Render_BindTexture_5.h"
int32_t Render_BindTexture_5(float* context, float* param_2, int32_t* param_3)

{
    int32_t entity_val = *param_3;

    if (entity_val == 1)
    {
        int32_t* entity_1 = param_3[1];
        int32_t temp_val = *entity_1;

        if (temp_val)
            return temp_val(context, param_2, entity_1[4]);
    }
    else
    {
        long double fpu0;

        if (!entity_val)
            return Render_ComputeNormals_5(fpu0, context, param_2, param_3[1]);
    }

    return 0;
}
