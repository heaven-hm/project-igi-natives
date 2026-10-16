#include "Camera_UpdateTransform_4.h"
int32_t Camera_UpdateTransform_4(int32_t* a1)

{
    int32_t result_1 = 0xffffffff;
    char valA = a1[3];
    int32_t result;

    if (!(valA & 0x40))
    {
        if (valA & 0x83)
        {
            result_1 = Camera_ApplyHandiCam_9(a1);
            Camera_ApplyLineFilter_9(a1);
            int32_t valA2;
            void** objC1;
            valA2 = Camera_SetFieldOfView_9(a1[4]);

            if (valA2 >= 0)
            {
                int32_t valA3 = a1[7];

                if (valA3)
                {
                    int32_t v_c_2 = valA3;
                    Camera_UpdateTransform_9(objC1);
                    a1[7] = 0;
                }
            }
            else
                result_1 = 0xffffffff;
        }

        result = result_1;
    }
    else
        result = 0xffffffff;

    a1[3] = 0;
    return result;
}
