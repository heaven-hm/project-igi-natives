#include "Terrain_RenderWaterSurface_3.h"
char* Terrain_RenderWaterSurface_3(char* a1)

{
    int32_t objC;
    int32_t v_8 = objC;
    uint32_t valA = g_9361e4;
    char* v_8_1 = nullptr;
    char* result;

    if (valA)
    {
        int32_t valA1;
        char* objC2;
        valA1 = Camera_UpdateViewCone_27(valA, 0x100, a1, 0xffffffff, nullptr, 0, 0, 1);

        if (valA1)
        {
            PSTR valA2 = Camera_ApplyHandiCam_20(valA1);
            objC2 = valA1;
            v_8_1 = valA2;

            if (valA2)
            {
                int32_t valA3;
                valA3 = Camera_UpdateViewCone_27(g_9361e4, 0x100, a1, 0xffffffff, valA2, valA1, 0, 1);

                if (valA3)
                {
                    Camera_ApplyLineFilter_20(a1, v_8_1);
                    objC2 = v_8_1;
                }
            }
        }

        char* v_18_3 = v_8_1;
        Camera_UpdateTransform_9(objC2);
        result = a1;
    }
    else
    {
        result = a1;
        char* result_1 = result;

        if (*result)
        {
            do
            {
                char objC1 = *result_1;

                if (objC1 >= 0x41 && objC1 <= 0x5a)
                    *result_1 = objC1 + 0x20;

                result_1 = &result_1[1];
            } while (*result_1);
        }
    }

    return result;
}
