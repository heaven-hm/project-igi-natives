#include "Camera_UpdateViewCone_20.h"
void* Camera_UpdateViewCone_20(char* a1)

{
    char* objC = a1;

    while (objC & 3)
    {
        int32_t valA;
        valA = *objC;
        objC = &objC[1];

        if (!valA)
            return &objC[0xffffffff] - a1;
    }

    while (true)
    {
        int32_t valA2 = *objC;
        objC = &objC[4];

        if ((valA2 ^ 0xffffffff ^ (0x7efefeff + valA2)) & 0x81010100)
        {
            int32_t valA5 = *(objC - 4);

            if (!valA5)
                return &objC[0xfffffffc] - a1;

            if (!*(&valA5 + 1))
                return &objC[0xfffffffd] - a1;

            if (!(valA5 & 0xff0000))
                return &objC[0xfffffffe] - a1;

            if (!(valA5 & 0xff000000))
                break;
        }
    }

    return &objC[0xffffffff] - a1;
}
