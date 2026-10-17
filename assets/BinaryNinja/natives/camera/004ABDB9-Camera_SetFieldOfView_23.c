// Original IGI.EXE function: Camera_SetFieldOfView_23 (VA 0x004ABDB9; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_23.h"
int32_t Camera_SetFieldOfView_23(int32_t context)

{
    if (context < g_c32540)
    {
        int32_t* data_4 = (&g_c32440)[context >> 5] + ((context & 0x1f) << 3);

        if (data_4[1] & 1 && *data_4 != 0xffffffff)
        {
            if (g_543e80 == 1)
            {
                if (!context)
                {
                    int32_t item_c_3 = 0;
                    SetStdHandle(STD_INPUT_HANDLE, nullptr);
                }
                else if (context == 1)
                {
                    int32_t item_c_2 = 0;
                    SetStdHandle(STD_OUTPUT_HANDLE, nullptr);
                }
                else if (context == 2)
                {
                    int32_t item_c_1 = 0;
                    SetStdHandle(STD_ERROR_HANDLE, nullptr);
                }
            }

            (&g_c32440)[context >> 5][(context & 0x1f) * 2] = 0xffffffff;
            return 0;
        }
    }

    g_936068 = 0;
    g_936064 = 9;
    return 0xffffffff;
}
