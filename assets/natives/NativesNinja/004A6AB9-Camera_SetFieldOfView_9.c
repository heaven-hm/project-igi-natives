#include "004A6AB9-Camera_SetFieldOfView_9.h"
/* 0x004a6ab9 Camera_SetFieldOfView_9 full linked: callers=2 callees=8 */
int32_t sub_4a6ab9(int32_t a1)

{
    int32_t esi_3;

    if (a1 < g_c32540)
        esi_3 = (a1 & 0x1f) << 3;

    if (a1 >= g_c32540 || !(*((&g_c32440)[a1 >> 5] + esi_3 + 4) & 1))
    {
        g_936068 = 0;
        g_936064 = 9;
    }
    else
    {
        enum WIN32_ERROR ebp_2;

        if (sub_4abe33(a1) == 0xffffffff)
            ebp_2 = NO_ERROR;
        else if (a1 == 1 || a1 == 2)
        {
            int32_t eax_5 = sub_4abe33(2);

            if (sub_4abe33(1) != eax_5)
                goto label_4a6b1e;

            ebp_2 = NO_ERROR;
        }
        else
        {
        label_4a6b1e:

            if (CloseHandle(sub_4abe33(a1)))
                ebp_2 = NO_ERROR;
            else
                ebp_2 = GetLastError();
        }

        sub_4abdb9(a1);
        *((&g_c32440)[a1 >> 5] + esi_3 + 4) = 0;

        if (!ebp_2)
            return 0;

        sub_4abc46(ebp_2);
    }

    return 0xffffffff;
}
