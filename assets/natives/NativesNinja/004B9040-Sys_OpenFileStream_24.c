#include "004B9040-Sys_OpenFileStream_24.h"
/* 0x004b9040 Sys_OpenFileStream_24 full linked: callers=3 callees=6 */
int32_t sub_4b9040(long double a1 @ st2, char* a2, void* a3)

{
    int32_t eax = *(a3 + 4);
    int32_t eax_3;

    if (eax == 1)
    {
        int32_t eax_11 = *(a3 + 0xc);

        if (eax_11 != 1)
        {
            if (eax_11 == 2)
            {
                int32_t eax_15 = sub_4b9120(a2);
                **(a3 + 0x18) = eax_15;
                return eax_15;
            }

            int32_t eax_14 = sub_4b9120(a2);
            **(a3 + 0x18) = eax_14;
            return eax_14;
        }

        eax_3 = sub_4b9120(a2);
        **(a3 + 0x18) = eax_3;
    }
    else
    {
        if (eax == 2)
        {
            long double x87_r0;
            long double x87_r1;
            int32_t eax_10 = sub_4b9660(x87_r0, x87_r1, a2);
            **(a3 + 0x18) = a1;
            return eax_10;
        }

        eax_3 = eax - 3;

        if (eax == 3)
        {
            int32_t eax_5 = *(a3 + 0xc) - 1;
            void var_800;
            char* eax_6 = sub_4b8ce0(a2, &var_800, 0x800);
            char* eax_8 = sub_4a5500(*(a3 + 0x18), eax_6, eax_5);
            *(*(a3 + 0x18) + *(a3 + 0xc) - 1) = 0;
            return eax_8;
        }
    }

    return eax_3;
}
