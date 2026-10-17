// Original IGI.EXE function: Camera_UpdateViewCone_28 (VA 0x004AD912; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateViewCone_28.h"
int32_t Camera_UpdateViewCone_28(uint32_t a1, int32_t a2)

{
    Camera_UpdateTransform_5(0x1000);
    int32_t result = 0;

    if (a1 >= g_c32540 || !(*((&g_c32440)[a1 >> 5] + ((a1 & 0x1f) << 3) + 4) & 1))
        g_936064 = 9;
    else
    {
        uint32_t valA4 = Camera_ResetMatrix_9(a1, 0, FILE_CURRENT);

        if (valA4 != 0xffffffff)
        {
            uint32_t valA5 = Camera_ResetMatrix_9(a1, 0, FILE_END);

            if (valA5 != 0xffffffff)
            {
                uint32_t i = a2 - valA5;

                if (i > 0)
                {
                    char v_1004[0xfe0];
                    Camera_ApplyBandFilter_26(&v_1004, 0, 0x1000);
                    int32_t valA6 = Camera_ApplyWideScreen_29(a1, 0x8000);

                    do
                    {
                        uint32_t i_1 = 0x1000;

                        if (i < 0x1000)
                            i_1 = i;

                        int32_t valA7 = Camera_ApplyHandiCam_23(a1, &v_1004, i_1);

                        if (valA7 == 0xffffffff)
                        {
                            if (g_936068 == 5)
                                g_936064 = 0xd;

                            result = 0xffffffff;
                            break;
                        }

                        i -= valA7;
                    } while (i > 0);

                    Camera_ApplyWideScreen_29(a1, valA6);
                }
                else if (i < 0)
                {
                    Camera_ResetMatrix_9(a1, a2, FILE_BEGIN);
                    BOOL valA9 = SetEndOfFile(Camera_ApplyLineFilter_23(a1));
                    int32_t srcS1 = -(valA9);
                    result = -((srcS1 - srcS1)) - 1;

                    if (result == 0xffffffff)
                    {
                        g_936064 = 0xd;
                        g_936068 = GetLastError();
                    }
                }

                Camera_ResetMatrix_9(a1, valA4, FILE_BEGIN);
                return result;
            }
        }
    }

    return 0xffffffff;
}
