// Original IGI.EXE function: Render_TransformVertices_5 (VA 0x004D2FB0; static CFG gate PASS, CFG score 1.000).
#include "Render_TransformVertices_5.h"
int32_t* Render_TransformVertices_5(int32_t* context, int32_t* param_2, void* param_3)

{
    float data_val = *(*(param_3 + 8) + 0x80);
    int32_t* result;

    if (!data_val)
    {
        if (context)
        {
            *context = 0;
            context[1] = 0;
            context[2] = 0;
        }

        result = param_2;

        if (result)
        {
            *result = 0;
            result[1] = 0;
            result[2] = 0;
        }
    }
    else
    {
        long double fpu0;
        result = Render_ComputeNormals_5(fpu0, context, param_2, data_val);

        if (!result)
        {
            if (context)
            {
                *context = 0;
                context[1] = 0;
                context[2] = 0;
            }

            if (param_2)
            {
                *param_2 = 0;
                param_2[1] = 0;
                param_2[2] = 0;
            }
        }
    }

    return result;
}
