#include "gi_platform.h"
#include "004D2FB0-Render_TransformVertices_5.h"
int32_t* Render_TransformVertices_5(int32_t* a1, int32_t* a2, void* a3)

{
    float valA = (*(int32_t*)(uintptr_t)(*(a3 + 8) + 0x80));
    int32_t* result;

    if (!valA)
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
        long double fpu0;
        result = Render_ComputeNormals_5(fpu0, a1, a2, valA);

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
