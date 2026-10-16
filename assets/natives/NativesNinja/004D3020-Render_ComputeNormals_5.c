#include "004D3020-Render_ComputeNormals_5.h"
/* 0x004d3020 Render_ComputeNormals_5 full linked: callers=2 callees=6 */
int32_t sub_4d3020(long double a1 @ st0, float* a2, float* a3, float a4)

{
    float var_30;
    float var_24;
    int32_t eax_1 = sub_4d31c0(&var_30, &var_24, sub_4d3720(a4, 0));
    float var_18;
    float var_c;
    int32_t result = sub_4d31c0(&var_18, &var_c, sub_4d3720(a4, 1));

    if (!eax_1 && !result)
        return result;

    if (!eax_1)
    {
        if (result)
        {
            if (a2)
            {
                *a2 = var_18;
                int32_t var_14;
                a2[1] = var_14;
                int32_t var_10;
                a2[2] = var_10;
            }

            if (a3)
            {
                *a3 = var_c;
                int32_t var_8;
                a3[1] = var_8;
                int32_t var_4;
                a3[2] = var_4;
            }
        }
    }
    else if (!result)
    {
        if (a2)
        {
            *a2 = var_30;
            int32_t var_2c;
            a2[1] = var_2c;
            int32_t var_28;
            a2[2] = var_28;
        }

        if (a3)
        {
            *a3 = var_24;
            int32_t var_20;
            a3[1] = var_20;
            int32_t var_1c;
            a3[2] = var_1c;
        }
    }
    else
    {
        (*(a4 + 0xc))(*(a4 + 0x18));
        a4 = a1;

        if (a2)
            sub_4d3160(a2, &var_30, &var_18, a4);

        if (a3)
            sub_4d3160(a3, &var_24, &var_c, a4);
    }

    return 1;
}
