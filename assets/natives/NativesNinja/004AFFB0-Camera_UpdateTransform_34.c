#include "004AFFB0-Camera_UpdateTransform_34.h"
/* 0x004affb0 Camera_UpdateTransform_34 full linked: callers=1 callees=0 */
int32_t sub_4affb0(int32_t a1, char* a2)

{
    char* eax = nullptr;
    char* ecx = nullptr;
    int32_t var_410 = 0;
    int32_t edi = 1;
    int32_t var_40c = 0;

    if (!*a2)
    {
        *a1 = 0;
        return 1;
    }

    do
    {
        char i_1 = *(ecx + a2);

        if (i_1 - 0x28 > 0x55)
            goto label_4b0083;

        int32_t ebx_2 = 0;
        ebx_2 = *(i_1 + &jump_table_4b01f0);
        int32_t var_414;
        char* var_404;
        int32_t var_400[0x100];

        switch (ebx_2)
        {
            case 0:
            {
                var_400[var_410] = eax;
                var_410 += 1;
            label_4b0083:
                edi = 0;
                var_414 = 0;
            label_4b0089:
                eax[a1] = i_1;
                eax = &eax[1];
                ecx = &ecx[1];
                break;
            }
            case 1:
            {
                edi = 0;
                var_414 = 0;

                if (!var_410)
                    return 0;

                var_410 -= 1;
                goto label_4b0089;
            }
            case 2:
            {
                if (edi)
                    return 0;

            label_4b0180:
                edi = 1;
            label_4b0185:
                eax[a1] = i_1;
                eax = &eax[1];
                ecx = &ecx[1];
                var_414 = 0;
                break;
            }
            case 3:
            {
                if (edi)
                    return 0;

                if (!var_414)
                {
                    edi = 1;

                    if (*(ecx + a2 - 1) != 0x29)
                        goto label_4b0185;

                    void* edx_7 = var_400[var_410];
                    void* ebp_7 = eax - edx_7;

                    if (ebp_7 > 0)
                    {
                        char* ebx_6 = &eax[a1];
                        char* var_414_1 = edx_7 + a1;
                        void* var_408_1 = ebp_7;
                        bool cond:3_1;

                        do
                        {
                            *ebx_6 = *var_414_1;
                            ebx_6 = &ebx_6[1];
                            var_414_1 = &var_414_1[1];
                            cond:3_1 = var_408_1 != 1;
                            var_408_1 -= 1;
                        } while (cond:3_1);
                    }

                    char* eax_3 = eax + ebp_7;
                    var_414 = 0;
                    eax_3[a1] = 0x2a;
                    eax = &eax_3[1];
                    ecx = &ecx[1];
                }
                else
                {
                    char* i_3 = eax - var_404;

                    if (i_3 > 0)
                    {
                        char* ebp_5 = &var_404[a1];
                        char* i_2 = i_3;
                        char* i;

                        do
                        {
                            *(i_3 + ebp_5) = *ebp_5;
                            ebp_5 = &ebp_5[1];
                            i = i_2;
                            i_2 -= 1;
                        } while (i != 1);
                    }

                    char* eax_2 = eax + i_3;
                    edi = 1;
                    var_414 = 0;
                    eax_2[a1] = 0x2a;
                    eax = &eax_2[1];
                    ecx = &ecx[1];
                }
                break;
            }
            case 4:
            {
                edi = 0;
                eax[a1] = i_1;
                eax = &eax[1];
                ecx = &ecx[1];
                var_414 = 0;
                i_1 = *(ecx + a2);
                goto label_4b0089;
            }
            case 5:
            {
                if (edi)
                    return 0;

                goto label_4b0180;
            }
            case 6:
            {
                var_404 = eax;

                for (; i_1 != 0x5d; i_1 = *(ecx + a2))
                {
                    if (!i_1)
                        return 0;

                    if (i_1 == 0x2f || i_1 == 0x5c)
                    {
                        eax[a1] = i_1;
                        eax = &eax[1];
                        ecx = &ecx[1];
                    }

                    eax = &eax[1];
                    i_1 = *(ecx + a2);
                    ecx = &ecx[1];
                    eax[a1 - 1] = i_1;
                }

                eax = &eax[1];
                var_414 = 1;
                char edx_4 = *(ecx + a2);
                ecx = &ecx[1];
                eax[a1 - 1] = edx_4;
                edi = 0;
                break;
            }
            case 7:
            {
                edi = 0;

                if (var_410 || var_40c)
                    return 0;

                var_414 = 0;
                var_40c = 1;
                goto label_4b0089;
            }
            case 8:
            {
                edi = 0;

                if (!var_40c)
                    return 0;

                var_414 = 0;
                var_40c = 0;
                goto label_4b0089;
            }
            case 9:
            {
                goto label_4b0083;
            }
        }
    } while (*(ecx + a2));

    eax[a1] = 0;
    return 1;
}
