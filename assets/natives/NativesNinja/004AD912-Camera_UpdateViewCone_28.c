#include "004AD912-Camera_UpdateViewCone_28.h"
/* 0x004ad912 Camera_UpdateViewCone_28 full linked: callers=1 callees=12 */
int32_t sub_4ad912(uint32_t a1, int32_t a2)

{
    sub_4a54a0(0x1000);
    int32_t result = 0;

    if (a1 >= g_c32540 || !(*((&g_c32440)[a1 >> 5] + ((a1 & 0x1f) << 3) + 4) & 1))
        g_936064 = 9;
    else
    {
        uint32_t eax_4 = sub_4a6d7d(a1, 0, FILE_CURRENT);

        if (eax_4 != 0xffffffff)
        {
            uint32_t eax_5 = sub_4a6d7d(a1, 0, FILE_END);

            if (eax_5 != 0xffffffff)
            {
                uint32_t i = a2 - eax_5;

                if (i > 0)
                {
                    char var_1004[0xfe0];
                    sub_4acd10(&var_1004, 0, 0x1000);
                    int32_t eax_6 = sub_4ae35d(a1, 0x8000);

                    do
                    {
                        uint32_t i_1 = 0x1000;

                        if (i < 0x1000)
                            i_1 = i;

                        int32_t eax_7 = sub_4abec7(a1, &var_1004, i_1);

                        if (eax_7 == 0xffffffff)
                        {
                            if (g_936068 == 5)
                                g_936064 = 0xd;

                            result = 0xffffffff;
                            break;
                        }

                        i -= eax_7;
                    } while (i > 0);

                    sub_4ae35d(a1, eax_6);
                }
                else if (i < 0)
                {
                    sub_4a6d7d(a1, a2, FILE_BEGIN);
                    BOOL eax_9 = SetEndOfFile(sub_4abe33(a1));
                    int32_t esi_1 = -(eax_9);
                    result = -((esi_1 - esi_1)) - 1;

                    if (result == 0xffffffff)
                    {
                        g_936064 = 0xd;
                        g_936068 = GetLastError();
                    }
                }

                sub_4a6d7d(a1, eax_4, FILE_BEGIN);
                return result;
            }
        }
    }

    return 0xffffffff;
}
