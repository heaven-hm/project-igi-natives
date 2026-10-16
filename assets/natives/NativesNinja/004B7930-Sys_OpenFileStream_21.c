#include "004B7930-Sys_OpenFileStream_21.h"
/* 0x004b7930 Sys_OpenFileStream_21 full linked: callers=3 callees=5 */
int32_t sub_4b7930(float a1, float a2, float a3, float a4, float a5, float a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10)

{
    int32_t* ebx = a1;
    int32_t* edi = ebx[2];
    int32_t eax = sub_4b6ce0(edi);
    int32_t eax_1 = sub_4b6d00(edi);
    float var_20 = a3;
    int32_t eax_3 = *ebx;
    int32_t esi = 0;

    if (!eax_3)
    {
        int32_t ecx_1 = 0;
        int32_t var_18_1 = 0;
        a3 = 0f;

        if (*(ebx + 6) > 0)
        {
            int32_t esi_2 = a9 & 0x80;
            int32_t var_10_1 = esi_2;
            int32_t eax_15;

            do
            {
                if (esi_2)
                {
                    int32_t eax_5;
                    int32_t edx_2;
                    edx_2 = HIGHD(*(ebx[3] + (ecx_1 << 1)));
                    eax_5 = LOWD(*(ebx[3] + (ecx_1 << 1)));
                    a1 = a2 - ((eax_5 - edx_2) >> 1);
                }
                else if (!(a9 & 0x100))
                    a1 = a2;
                else
                    a1 = a2 - *(ebx[3] + (ecx_1 << 1));

                int32_t var_1c_1 = 0;

                if (ebx[1] > 0)
                {
                    bool cond:6_1;

                    do
                    {
                        char eax_8 = *(a3 + ebx + 0x10);

                        if (eax_8)
                        {
                            sub_4b50b0(edi, a1, var_20, a4, a5, a6, a7, a8, eax_8 - 1,
                                a9, a10);
                            ecx_1 = var_18_1;
                        }

                        a1 = eax + a1;
                        a3 += 1;
                        cond:6_1 = var_1c_1 + 1 < ebx[1];
                        var_1c_1 += 1;
                    } while (cond:6_1);
                    esi_2 = var_10_1;
                }

                eax_15 = *(ebx + 6);
                ecx_1 += 1;
                var_18_1 = ecx_1;
                var_20 = eax_1 + var_20;
            } while (ecx_1 < eax_15);

            return eax_15;
        }
    }
    else if (eax_3 == 1)
    {
        eax_3 = sub_4b6d20(edi);
        int32_t var_14_1 = eax_3;
        int32_t var_18_2 = 0;
        a3 = 0f;

        if (*(ebx + 6) > 0)
        {
            int32_t ecx_5 = a9;
            int32_t ebp_3 = ecx_5 & 0x80;
            int32_t var_10_2 = ebp_3;

            do
            {
                if (ebp_3)
                {
                    int32_t eax_17;
                    int32_t edx_9;
                    edx_9 = HIGHD(*(ebx[3] + (esi << 1)));
                    eax_17 = LOWD(*(ebx[3] + (esi << 1)));
                    a1 = a2 - ((eax_17 - edx_9) >> 1);
                }
                else if (!(*(&ecx_5 + 1) & 1))
                    a1 = a2;
                else
                    a1 = a2 - *(ebx[3] + (esi << 1));

                float var_1c_2 = 0f;

                if (ebx[1] > 0)
                {
                    bool cond:7_1;

                    do
                    {
                        char eax_20 = *(a3 + ebx + 0x10);

                        if (!eax_20)
                            a1 = var_14_1 + a1;
                        else
                        {
                            uint32_t esi_5 = eax_20 - 1;
                            sub_4b50b0(edi, a1, var_20, a4, a5, a6, a7, a8, esi_5,
                                ecx_5, a10);
                            esi = var_18_2;
                            ecx_5 = a9;
                            a1 = *(edi[2] + esi_5 * 0x24 + 0x10) + a1;
                        }

                        a3 += 1;
                        cond:7_1 = var_1c_2 + 1 < ebx[1];
                        var_1c_2 += 1;
                    } while (cond:7_1);
                    ebp_3 = var_10_2;
                }

                eax_3 = *(ebx + 6);
                esi += 1;
                var_18_2 = esi;
                var_20 = eax_1 + var_20;
            } while (esi < eax_3);
        }
    }

    return eax_3;
}
