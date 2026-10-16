#include "004A6E17-Camera_UpdateTransform_10.h"
/* 0x004a6e17 Camera_UpdateTransform_10 full linked: callers=4 callees=3 */
void* sub_4a6e17(int32_t* a1)

{
    int32_t* edi = a1;
    int32_t esi = edi[4];

    if (edi[1] < 0)
        edi[1] = 0;

    uint32_t eax = sub_4a6d7d(esi, 0, FILE_CURRENT);
    uint32_t var_8 = eax;

    if (eax >= 0)
    {
        int16_t edx_1 = edi[3];

        if (!(edx_1 & 0x108))
            return eax - edi[1];

        int32_t eax_2 = *edi;
        char* i_2 = edi[2];
        void* result = eax_2 - i_2;

        if (edx_1 & 3)
        {
            if (*((&g_c32440)[esi >> 5] + ((esi & 0x1f) << 3) + 4) & 0x80)
            {
                for (char* i = i_2; i < eax_2; i = &i[1])
                {
                    if (*i == 0xa)
                        result += 1;
                }
            }

            goto label_4a6ea9;
        }

        if (edx_1 & 0x80)
        {
        label_4a6ea9:

            if (!var_8)
                return result;

            if (edi[3] & 1)
            {
                int32_t edx_5 = edi[1];

                if (edx_5)
                {
                    a1 = eax_2 - i_2 + edx_5;
                    int32_t esi_2 = (esi & 0x1f) << 3;

                    if (*(esi_2 + (&g_c32440)[esi >> 5] + 4) & 0x80)
                    {
                        bool cond:3_1;

                        if (sub_4a6d7d(esi, 0, FILE_END) != var_8)
                        {
                            sub_4a6d7d(esi, var_8, FILE_BEGIN);
                            int32_t* eax_9 = 0x200;
                            int16_t ecx_3;

                            if (a1 <= 0x200)
                                ecx_3 = edi[3];

                            if (a1 > 0x200 || !(ecx_3 & 8) || *(&ecx_3 + 1) & 4)
                                eax_9 = edi[6];

                            a1 = eax_9;
                            cond:3_1 = !(*(esi_2 + (&g_c32440)[esi >> 5] + 4) & 4);
                        }
                        else
                        {
                            char* i_1 = edi[2];

                            for (void* ecx_2 = a1 + i_1; i_1 < ecx_2; i_1 = &i_1[1])
                            {
                                if (*i_1 == 0xa)
                                    a1 += 1;
                            }

                            cond:3_1 = !(*(edi + 0xd) & 0x20);
                        }

                        if (!cond:3_1)
                            a1 += 1;
                    }

                    var_8 -= a1;
                }
                else
                    result &= edx_5;
            }

            return result + var_8;
        }

        g_936064 = 0x16;
    }

    return 0xffffffff;
}
