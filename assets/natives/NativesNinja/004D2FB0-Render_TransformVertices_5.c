#include "004D2FB0-Render_TransformVertices_5.h"
/* 0x004d2fb0 Render_TransformVertices_5 full linked: callers=12 callees=1 */
int32_t* sub_4d2fb0(int32_t* a1, int32_t* a2, void* a3)

{
    float eax = *(*(a3 + 8) + 0x80);
    int32_t* result;

    if (!eax)
    {
        if (a1)
        {
            *a1 = 0;
            a1[1] = 0;
            a1[2] = 0;
        }

        result = a2;

        if (result)
        {
            *result = 0;
            result[1] = 0;
            result[2] = 0;
        }
    }
    else
    {
        long double x87_r0;
        result = sub_4d3020(x87_r0, a1, a2, eax);

        if (!result)
        {
            if (a1)
            {
                *a1 = 0;
                a1[1] = 0;
                a1[2] = 0;
            }

            if (a2)
            {
                *a2 = 0;
                a2[1] = 0;
                a2[2] = 0;
            }
        }
    }

    return result;
}
