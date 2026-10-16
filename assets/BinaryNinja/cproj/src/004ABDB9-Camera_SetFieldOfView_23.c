#include "gi_platform.h"
#include "004ABDB9-Camera_SetFieldOfView_23.h"
int32_t Camera_SetFieldOfView_23(int32_t a1)

{
    if (a1 < g_c32540)
    {
        int32_t* valA4 = (&g_c32440)[a1 >> 5] + ((a1 & 0x1f) << 3);

        if (valA4[1] & 1 && *valA4 != 0xffffffff)
        {
            if (g_543e80 == 1)
            {
                if (!a1)
                {
                    int32_t v_c_3 = 0;
                    SetStdHandle(STD_INPUT_HANDLE, nullptr);
                }
                else if (a1 == 1)
                {
                    int32_t v_c_2 = 0;
                    SetStdHandle(STD_OUTPUT_HANDLE, nullptr);
                }
                else if (a1 == 2)
                {
                    int32_t v_c_1 = 0;
                    SetStdHandle(STD_ERROR_HANDLE, nullptr);
                }
            }

            (&g_c32440)[a1 >> 5][(a1 & 0x1f) * 2] = 0xffffffff;
            return 0;
        }
    }

    g_936068 = 0;
    g_936064 = 9;
    return 0xffffffff;
}
