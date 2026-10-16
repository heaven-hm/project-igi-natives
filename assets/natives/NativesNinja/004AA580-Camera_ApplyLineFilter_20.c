#include "004AA580-Camera_ApplyLineFilter_20.h"
/* 0x004aa580 Camera_ApplyLineFilter_20 full linked: callers=7 callees=0 */
char* sub_4aa580(char* a1, char* a2)

{
    char* edi = a1;
    char* ecx = a2;
    int32_t edx_1;

    while (ecx & 3)
    {
        edx_1 = *ecx;
        ecx = &ecx[1];

        if (!edx_1)
            goto label_4aa668;

        *edi = edx_1;
        edi = &edi[1];
    }

    while (true)
    {
        int32_t eax_1 = *ecx;
        edx_1 = *ecx;
        ecx = &ecx[4];

        if ((eax_1 ^ 0xffffffff ^ (0x7efefeff + eax_1)) & 0x81010100)
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
                edi[2] = 0;
                return a1;
            }

            if (!(edx_1 & 0xff000000))
            {
                *edi = edx_1;
                return a1;
            }
        }

        *edi = edx_1;
        edi = &edi[4];
    }

label_4aa668:
    *edi = edx_1;
    return a1;
}
