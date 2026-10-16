#include "004ABA99-Camera_ApplyPostProcess_22.h"
/* 0x004aba99 Camera_ApplyPostProcess_22 full linked: callers=2 callees=0 */
int32_t sub_4aba99(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t ecx;
    int32_t var_8 = ecx;
    void* esi = a1[1];
    char* edi = *a1;
    char* var_8_1 = edi;
    char* eax = edi;
    void* eax_6;

    if (esi < a3)
    {
        char* esi_1 = esi + edi;

        if (*esi_1)
            eax = esi_1;

        if (&eax[a3] >= &a1[0x3e])
        {
        label_4abb31:
            char* esi_6 = &a1[2];
            int32_t eax_5;

            while (true)
            {
                if (esi_6 >= edi)
                    return 0;

                if (&esi_6[a3] >= &a1[0x3e])
                    return 0;

                char eax_4 = *esi_6;

                if (eax_4)
                    esi_6 = &esi_6[eax_4];
                else
                {
                    char* ebx_3 = &esi_6[1];
                    eax_5 = 1;

                    while (!*ebx_3)
                    {
                        ebx_3 = &ebx_3[1];
                        eax_5 += 1;
                    }

                    if (eax_5 >= a3)
                        break;

                    a2 -= eax_5;

                    if (a2 < a3)
                        return 0;

                    esi_6 = ebx_3;
                }
            }

            void* ebx_5 = &esi_6[a3];

            if (ebx_5 >= &a1[0x3e])
            {
                a1[1] = 0;
                *a1 = &a1[2];
            }
            else
            {
                *a1 = ebx_5;
                a1[1] = eax_5 - a3;
            }

            *esi_6 = a3;
            eax_6 = &esi_6[8];
        }
        else
        {
            while (true)
            {
                char ebx_1 = *eax;

                if (ebx_1)
                    eax = &eax[ebx_1];
                else
                {
                    char* ebx_2 = &eax[1];
                    int32_t esi_3 = 1;

                    while (!*ebx_2)
                    {
                        ebx_2 = &ebx_2[1];
                        esi_3 += 1;
                    }

                    if (esi_3 >= a3)
                    {
                        void* ebx_4 = &eax[a3];

                        if (ebx_4 >= &a1[0x3e])
                        {
                            a1[1] = 0;
                            *a1 = &a1[2];
                        }
                        else
                        {
                            *a1 = ebx_4;
                            a1[1] = esi_3 - a3;
                        }

                        *eax = a3;
                        eax_6 = &eax[8];
                        break;
                    }

                    if (eax != var_8_1)
                    {
                        a2 -= esi_3;

                        if (a2 < a3)
                            return 0;
                    }
                    else
                        a1[1] = esi_3;

                    edi = var_8_1;
                    eax = ebx_2;
                }

                if (&eax[a3] >= &a1[0x3e])
                    goto label_4abb31;
            }
        }
    }
    else
    {
        *edi = a3;

        if (&edi[a3] >= &a1[0x3e])
        {
            a1[1] = 0;
            *a1 = &a1[2];
        }
        else
        {
            *a1 += a3;
            a1[1] -= a3;
        }

        eax_6 = &edi[8];
    }

    return (eax_6 << 4) - a1 * 0xf;
}
