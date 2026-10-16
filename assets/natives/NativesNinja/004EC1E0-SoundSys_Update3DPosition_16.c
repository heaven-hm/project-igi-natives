#include "004EC1E0-SoundSys_Update3DPosition_16.h"
/* 0x004ec1e0 SoundSys_Update3DPosition_16 full linked: callers=6 callees=0 */
int32_t sub_4ec1e0(void* a1, int32_t a2)

{
    void* eax = *(a1 + 8);
    int32_t ebx = *(a1 + 0x18);
    int32_t var_4 = ebx;
    (*a1)(a1, a2);
    int32_t edi = 0;
    *(a1 + 0x1c) = 0xffffffff;

    if (ebx > 0)
    {
        char* ecx_1 = a1 + 0x24;

        do
        {
            ebx = *ecx_1;
            int32_t edx_1 = *(a1 + 0x20);
            char* edx_2 = edx_1 + (edi << 3);
            int32_t* eax_4 = *(edx_1 + (edi << 3) + 4) + ebx * 0xc;

            if (*eax_4)
            {
                int32_t eax_5 = eax_4[2];

                if ((eax_5 & eax) != eax_5)
                    goto label_4ec27a;

                goto label_4ec257;
            }

            if (eax_4[2] & eax)
            {
            label_4ec27a:

                if (ebx)
                {
                    char eax_10 = ecx_1[1];
                    ecx_1[1] = eax_10 - 1;

                    if (eax_10 == 1)
                    {
                        *ecx_1 = 0;
                        ecx_1[1] = 0;
                    }
                }
            }
            else
            {
            label_4ec257:
                char eax_6 = ebx + 1;
                *ecx_1 = eax_6;
                ebx = *edx_2;

                if (eax_6 != ebx)
                    ecx_1[1] = *(*(edx_2 + 4) + eax_6 * 0xc + 4);
                else
                {
                    *(a1 + 0x1c) = edi;
                    *ecx_1 = 0;
                    ecx_1[1] = 0;
                }
            }

            edi += 1;
            ecx_1 = &ecx_1[2];
        } while (edi < var_4);
    }

    return (*(a1 + 0x14))(a1, a2);
}
