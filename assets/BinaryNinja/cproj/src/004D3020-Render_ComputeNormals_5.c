#include "gi_platform.h"
#include "004D3020-Render_ComputeNormals_5.h"
int32_t Render_ComputeNormals_5(long double a1 , float* a2, float* a3, float a4)

{
    float v_30;
    float v_24;
    int32_t valA1 = Render_BindTexture_5(&v_30, &v_24, Render_SetupLighting_6(a4, 0));
    float v_18;
    float v_c;
    int32_t result = Render_BindTexture_5(&v_18, &v_c, Render_SetupLighting_6(a4, 1));

    if (!valA1 && !result)
        return result;

    if (!valA1)
    {
        if (result)
        {
            if (a2)
            {
                *a2 = v_18;
                int32_t v_14;
                a2[1] = v_14;
                int32_t v_10;
                a2[2] = v_10;
            }

            if (a3)
            {
                *a3 = v_c;
                int32_t v_8;
                a3[1] = v_8;
                int32_t v_4;
                a3[2] = v_4;
            }
        }
    }
    else if (!result)
    {
        if (a2)
        {
            *a2 = v_30;
            int32_t v_2c;
            a2[1] = v_2c;
            int32_t v_28;
            a2[2] = v_28;
        }

        if (a3)
        {
            *a3 = v_24;
            int32_t v_20;
            a3[1] = v_20;
            int32_t v_1c;
            a3[2] = v_1c;
        }
    }
    else
    {
        ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)(a4 + 0xc))))((*(int32_t*)(uintptr_t)(a4 + 0x18)));
        a4 = a1;

        if (a2)
            Render_SetupLighting_5(a2, &v_30, &v_18, a4);

        if (a3)
            Render_SetupLighting_5(a3, &v_24, &v_c, a4);
    }

    return 1;
}
