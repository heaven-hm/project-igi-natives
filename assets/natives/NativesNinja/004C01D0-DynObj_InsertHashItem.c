#include "004C01D0-DynObj_InsertHashItem.h"
/* 0x004c01d0 DynObj_InsertHashItem full linked: callers=1 callees=0 */
int32_t sub_4c01d0(void* a1)

{
    char* ecx = *(a1 + 0x14);
    char eax = *ecx;

    if (eax)
    {
        while (true)
        {
            if (eax == 0x2e || eax == 0x65 || eax == 0x45)
                return 0;

            eax = ecx[1];
            ecx = &ecx[1];

            if (!eax)
                break;

            continue;
        }
    }

    return 1;
}
