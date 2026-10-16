#include "004AE5F3-Camera_UpdateViewCone_29.h"
/* 0x004ae5f3 Camera_UpdateViewCone_29 full linked: callers=2 callees=1 */
void sub_4ae5f3(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t ebx = 0x546a98;

    if (!a2)
        return;

    if (a2 < 0)
    {
        a2 = -(a2);
        ebx = 0x546bf8;
    }

    if (!a3)
        *a1 = 0;

    while (a2)
    {
        int32_t eax_2 = a2;
        ebx += 0x54;
        a2 s>>= 3;
        int32_t eax = eax_2 & 7;

        if (eax)
        {
            int32_t eax_3 = eax * 3;
            int32_t* esi_1 = ebx + (eax_3 << 2);

            if (*(ebx + (eax_3 << 2)) >= 0x8000)
            {
                int32_t var_10 = *esi_1;
                void var_c;
                int32_t* edi_1 = &var_c;
                int32_t* esi_2 = &esi_1[1];
                *edi_1 = *esi_2;
                edi_1[1] = esi_2[1];
                *(&var_10 + 2) -= 1;
                esi_1 = &var_10;
            }

            sub_4ae3d3(a1, esi_1);
        }
    }
}
