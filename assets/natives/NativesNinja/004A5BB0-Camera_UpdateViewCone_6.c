#include "004A5BB0-Camera_UpdateViewCone_6.h"
/* 0x004a5bb0 Camera_UpdateViewCone_6 full linked: callers=12 callees=1 */
char* sub_4a5bb0(char* a1, char* a2)

{
    int16_t edx;
    edx = *a2;
    char* result = a1;

    if (!edx)
        return result;

    *(&edx + 1) = a2[1];

    if (!*(&edx + 1))
    {
        int32_t eax_2 = 0;
        eax_2 = edx;
        /* tailcall */
        return sub_4aa0a6(eax_2, a1);
    }

    while (true)
    {
        char* ecx = a2;
        int16_t eax;
        eax = *result;
        char* esi_2 = &result[1];

        if (eax != edx)
        {
            if (!eax)
                return 0;

            while (true)
            {
                eax = *esi_2;
                esi_2 = &esi_2[1];
            label_4a5bdc:

                if (eax == edx)
                    break;

                if (!eax)
                    return 0;
            }
        }

        eax = *esi_2;
        esi_2 = &esi_2[1];

        if (eax != *(&edx + 1))
            break;

        result = &esi_2[0xffffffff];

        while (true)
        {
            *(&eax + 1) = ecx[2];

            if (*(&eax + 1))
            {
                eax = *esi_2;
                esi_2 = &esi_2[2];

                if (eax != *(&eax + 1))
                    break;

                eax = ecx[3];

                if (eax)
                {
                    *(&eax + 1) = esi_2[0xffffffff];
                    ecx = &ecx[2];

                    if (eax != *(&eax + 1))
                        break;

                    continue;
                }
            }

            return &result[0xffffffff];
        }
    }

    goto label_4a5bdc;
}
