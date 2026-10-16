#include "004A6C37-Camera_ApplyPostProcess_9.h"
/* 0x004a6c37 Camera_ApplyPostProcess_9 full linked: callers=2 callees=2 */
int32_t sub_4a6c37(int32_t a1)

{
    int32_t i = 0;
    int32_t ebx = 0;
    int32_t edi = 0;

    if (g_c321e0 > 0)
    {
        do
        {
            int32_t* eax_2 = *(g_c311dc + (i << 2));

            if (eax_2)
            {
                char ecx_1 = eax_2[3];

                if (ecx_1 & 0x83)
                {
                    if (a1 == 1)
                    {
                        if (sub_4a6b97(eax_2) != 0xffffffff)
                            ebx += 1;
                    }
                    else if (!a1 && ecx_1 & 2)
                    {
                        int32_t eax_4 = sub_4a6b97(eax_2);

                        if (eax_4 == 0xffffffff)
                            edi |= eax_4;
                    }
                }
            }

            i += 1;
        } while (i < g_c321e0);
    }

    if (a1 == 1)
        return ebx;

    return edi;
}
