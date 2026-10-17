// Original IGI.EXE function: Camera_ApplyWideScreen_27 (VA 0x004AD371; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyWideScreen_27.h"
int32_t Camera_ApplyWideScreen_27(int32_t a1, int32_t* a2, uint32_t a3)

{
    uint32_t objC = *a3;
    int32_t valA1 = *a2;
    a3 = objC;
    int32_t v_6c_1;

    if (valA1 == 1)
    {
    label_4ad3b6:
        v_6c_1 = 8;
    label_4ad3bf:

        if (!Camera_UpdateViewCone_12(v_6c_1, &a2[6], objC))
        {
            int32_t v_24;

            if (a1 == 0x10 || a1 == 0x16 || a1 == 0x1d)
            {
                double v_34_1 = *(a2 + 0x10);
                int32_t v_24_2 = (v_24 & 0xffffffe3) | 3;
            }
            else
                int32_t v_24_1 = v_24 & 0xfffffffe;
            void v_5c;
            Camera_ApplyPostProcess_12(&v_5c, &a3, v_6c_1, a1, &a2[2], &a2[6]);
            /* no return */
        }
    }
    else
    {
        if (valA1 == 2)
        {
            v_6c_1 = 4;
            goto label_4ad3bf;
        }

        if (valA1 == 3)
        {
            v_6c_1 = 0x11;
            goto label_4ad3bf;
        }

        if (valA1 == 4)
        {
            v_6c_1 = 0x12;
            goto label_4ad3bf;
        }

        if (valA1 == 5)
            goto label_4ad3b6;

        if (valA1 == 7)
            *a2 = 1;
        else if (valA1 == 8)
        {
            v_6c_1 = 0x10;
            goto label_4ad3bf;
        }
    }
    int16_t x87control;
    Camera_UpdateTransform_14(x87control, a3, 0xffff);

    if (*a2 != 8 && !g_546af0)
    {
        int32_t* v_6c_4 = a2;
        Camera_ApplyHandiCam_27();
    }

    return Camera_UpdateTransform_13(*a2);
}
