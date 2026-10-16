#include "004AA730-Camera_UpdateViewCone_20.h"
/* 0x004aa730 Camera_UpdateViewCone_20 full linked: callers=10 callees=0 */
void* sub_4aa730(char* a1)

{
    char* ecx = a1;

    while (ecx & 3)
    {
        int32_t eax;
        eax = *ecx;
        ecx = &ecx[1];

        if (!eax)
            return &ecx[0xffffffff] - a1;
    }

    while (true)
    {
        int32_t eax_2 = *ecx;
        ecx = &ecx[4];

        if ((eax_2 ^ 0xffffffff ^ (0x7efefeff + eax_2)) & 0x81010100)
        {
            int32_t eax_5 = *(ecx - 4);

            if (!eax_5)
                return &ecx[0xfffffffc] - a1;

            if (!*(&eax_5 + 1))
                return &ecx[0xfffffffd] - a1;

            if (!(eax_5 & 0xff0000))
                return &ecx[0xfffffffe] - a1;

            if (!(eax_5 & 0xff000000))
                break;
        }
    }

    return &ecx[0xffffffff] - a1;
}
