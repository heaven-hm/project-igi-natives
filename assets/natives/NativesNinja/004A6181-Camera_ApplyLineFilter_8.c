#include "004A6181-Camera_ApplyLineFilter_8.h"
/* 0x004a6181 Camera_ApplyLineFilter_8 full linked: callers=2 callees=0 */
int32_t* sub_4a6181(char* a1, int32_t* a2, char* a3, int32_t* a4, int32_t* a5)

{
    int32_t* ecx = a5;
    *ecx = 0;
    char* esi = a3;
    int32_t* edi = a2;
    *a4 = 1;
    char* eax_1 = a1;

    if (edi)
    {
        *edi = esi;
        edi = &edi[1];
        a2 = edi;
    }

    if (*eax_1 != 0x22)
    {
        while (true)
        {
            *ecx += 1;

            if (esi)
            {
                *esi = *eax_1;
                esi = &esi[1];
            }

            char edx_5 = *eax_1;
            eax_1 = &eax_1[1];

            if (*(edx_5 + 0xc32321) & 4)
            {
                *ecx += 1;

                if (esi)
                {
                    *esi = *eax_1;
                    esi = &esi[1];
                }

                eax_1 = &eax_1[1];
            }

            if (edx_5 == 0x20)
            {
            label_4a6228:

                if (edx_5)
                {
                    if (esi)
                        esi[0xffffffff] = 0;

                    break;
                }
            }
            else if (edx_5)
            {
                if (edx_5 == 9)
                    goto label_4a6228;

                continue;
            }

            eax_1 -= 1;
            break;
        }
    }
    else
    {
        while (true)
        {
            char edx_1 = eax_1[1];
            eax_1 = &eax_1[1];

            if (edx_1 == 0x22)
                break;

            if (!edx_1)
                break;

            if (*(edx_1 + 0xc32321) & 4)
            {
                *ecx += 1;

                if (esi)
                {
                    *esi = *eax_1;
                    esi = &esi[1];
                    eax_1 = &eax_1[1];
                }
            }

            *ecx += 1;

            if (esi)
            {
                *esi = *eax_1;
                esi = &esi[1];
            }
        }

        *ecx += 1;

        if (esi)
        {
            *esi = 0;
            esi = &esi[1];
        }

        if (*eax_1 == 0x22)
            eax_1 = &eax_1[1];
    }

    a5 = nullptr;

    while (*eax_1)
    {
        while (true)
        {
            char edx_6 = *eax_1;

            if (edx_6 != 0x20 && edx_6 != 9)
                break;

            eax_1 = &eax_1[1];
        }

        if (!*eax_1)
            break;

        if (edi)
        {
            *edi = esi;
            edi = &edi[1];
            a2 = edi;
        }

        *a4 += 1;

        while (true)
        {
            a1 = 1;
            uint32_t i_2 = 0;

            while (*eax_1 == 0x5c)
            {
                eax_1 = &eax_1[1];
                i_2 += 1;
            }

            if (*eax_1 == 0x22)
            {
                if (!(i_2 & 1))
                {
                    if (!a5 || eax_1[1] != 0x22)
                        a1 = nullptr;
                    else
                        eax_1 = &eax_1[1];

                    edi = a2;
                    int32_t* edx_9 = nullptr;
                    edx_9 = !a5;
                    a5 = edx_9;
                }

                i_2 u>>= 1;
            }

            if (i_2)
            {
                int32_t i_1 = i_2;
                int32_t i;

                do
                {
                    if (esi)
                    {
                        *esi = 0x5c;
                        esi = &esi[1];
                    }

                    *ecx += 1;
                    i = i_1;
                    i_1 -= 1;
                } while (i != 1);
            }

            char edx_11 = *eax_1;

            if (!edx_11)
                break;

            if (!a5)
            {
                if (edx_11 == 0x20)
                    break;

                if (edx_11 == 9)
                    break;
            }

            if (a1)
            {
                if (esi)
                {
                    if (*(edx_11 + 0xc32321) & 4)
                    {
                        *esi = edx_11;
                        esi = &esi[1];
                        eax_1 = &eax_1[1];
                        *ecx += 1;
                    }

                    *esi = *eax_1;
                    esi = &esi[1];
                }
                else if (*(edx_11 + 0xc32321) & 4)
                {
                    eax_1 = &eax_1[1];
                    *ecx += 1;
                }

                *ecx += 1;
            }

            eax_1 = &eax_1[1];
        }

        if (esi)
        {
            *esi = 0;
            esi = &esi[1];
        }

        *ecx += 1;
    }

    if (edi)
        *edi = 0;

    *a4 += 1;
    return a4;
}
