#include "004A6CA4-Camera_UpdateViewCone_9.h"
/* 0x004a6ca4 Camera_UpdateViewCone_9 full linked: callers=2 callees=2 */
uint32_t sub_4a6ca4(int32_t* a1)

{
    int32_t eax = a1[3];

    if (eax & 0x83 && !(eax & 0x40))
    {
        if (!(eax & 2))
        {
            eax |= 1;
            a1[3] = eax;

            if (eax & 0x10c)
                *a1 = a1[2];
            else
                sub_4ac323(a1);

            void* eax_2 = sub_4ac12d(a1[4], a1[2], a1[6]);
            a1[1] = eax_2;

            if (eax_2 && eax_2 != 0xffffffff)
            {
                int32_t edx = a1[3];

                if (!(edx & 0x82))
                {
                    int32_t ecx_2 = a1[4];
                    void* edi_4;

                    if (ecx_2 == 0xffffffff)
                        edi_4 = &g_543fb0;
                    else
                        edi_4 = (&g_c32440)[ecx_2 >> 5] + ((ecx_2 & 0x1f) << 3);

                    if ((*(edi_4 + 4) & 0x82) == 0x82)
                    {
                        *(&edx + 1) |= 0x20;
                        a1[3] = edx;
                    }
                }

                if (a1[6] == 0x200)
                {
                    int16_t ecx_4 = a1[3];

                    if (ecx_4 & 8 && !(*(&ecx_4 + 1) & 4))
                        a1[6] = 0x1000;
                }

                char* ecx_5 = *a1;
                a1[1] = eax_2 - 1;
                uint32_t result = *ecx_5;
                *a1 = &ecx_5[1];
                return result;
            }

            int32_t eax_4 = -(eax_2);
            a1[3] |= ((eax_4 - eax_4) & 0x10) + 0x10;
            a1[1] = 0;
        }
        else
        {
            eax |= 0x20;
            a1[3] = eax;
        }
    }

    return 0xffffffff;
}
