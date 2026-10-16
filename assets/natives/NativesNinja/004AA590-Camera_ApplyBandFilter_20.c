#include "004AA590-Camera_ApplyBandFilter_20.h"
/* 0x004aa590 Camera_ApplyBandFilter_20 full linked: callers=3 callees=0 */
char* sub_4aa590(char* a1, char* a2)

{
    char* ecx = a1;
    int32_t* edi;

    while (ecx & 3)
    {
        char eax_1 = *ecx;
        ecx = &ecx[1];

        if (!eax_1)
        {
        label_4aa5df:
            edi = &ecx[0xffffffff];
            goto label_4aa5f1;
        }
    }

    while (true)
    {
        int32_t eax_2 = *ecx;
        ecx = &ecx[4];

        if ((eax_2 ^ 0xffffffff ^ (0x7efefeff + eax_2)) & 0x81010100)
        {
            int32_t eax_5 = *(ecx - 4);

            if (!eax_5)
            {
                edi = &ecx[0xfffffffc];
                break;
            }

            if (!*(&eax_5 + 1))
            {
                edi = &ecx[0xfffffffd];
                break;
            }

            if (!(eax_5 & 0xff0000))
            {
                edi = &ecx[0xfffffffe];
                break;
            }

            if (!(eax_5 & 0xff000000))
                goto label_4aa5df;
        }
    }

label_4aa5f1:
    char* ecx_1 = a2;
    int32_t edx_1;

    while (ecx_1 & 3)
    {
        edx_1 = *ecx_1;
        ecx_1 = &ecx_1[1];

        if (!edx_1)
            goto label_4aa668;

        *edi = edx_1;
        edi += 1;
    }

    while (true)
    {
        int32_t eax_6 = *ecx_1;
        edx_1 = *ecx_1;
        ecx_1 = &ecx_1[4];

        if ((eax_6 ^ 0xffffffff ^ (0x7efefeff + eax_6)) & 0x81010100)
        {
            if (!edx_1)
                break;

            if (!*(&edx_1 + 1))
            {
                *edi = edx_1;
                return a1;
            }

            if (!(edx_1 & 0xff0000))
            {
                *edi = edx_1;
                *(edi + 2) = 0;
                return a1;
            }

            if (!(edx_1 & 0xff000000))
            {
                *edi = edx_1;
                return a1;
            }
        }

        *edi = edx_1;
        edi = &edi[1];
    }

label_4aa668:
    *edi = edx_1;
    return a1;
}
