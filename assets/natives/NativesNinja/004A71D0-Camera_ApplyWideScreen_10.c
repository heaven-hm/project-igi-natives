#include "004A71D0-Camera_ApplyWideScreen_10.h"
/* 0x004a71d0 Camera_ApplyWideScreen_10 full linked: callers=0 callees=2 */
uint32_t sub_4a71d0(char* a1)

{
    char* esi = a1;
    uint32_t i;
    int32_t ecx;
    int32_t edx;
    i = sub_4a9fc1(ecx);
    int32_t ecx_1 = *esi;

    if (i != 0x65)
    {
        do
        {
            esi = &esi[1];

            if (g_54427c <= 1)
            {
                int32_t eax_2 = *esi;
                ecx_1 = g_544070;
                eax_2 = *(ecx_1 + (eax_2 << 1));
                i = eax_2 & 4;
            }
            else
            {
                int32_t eax_1 = *esi;
                int32_t var_c_1 = eax_1;
                i = sub_4a7f2a(eax_1, edx, ecx_1, 4);
                ecx_1 = 4;
            }
        } while (i);
    }

    i = *esi;
    *esi = g_544280;
    char* esi_1 = &esi[1];
    char i_1;

    do
    {
        i_1 = *esi_1;
        *esi_1 = i;
        i = i_1;
        i_1 = *esi_1;
        esi_1 = &esi_1[1];
    } while (i_1);
    return i;
}
