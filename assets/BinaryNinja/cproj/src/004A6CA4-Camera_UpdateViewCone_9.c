#include "gi_platform.h"
#include "004A6CA4-Camera_UpdateViewCone_9.h"
uint32_t Camera_UpdateViewCone_9(int32_t* a1)

{
    int32_t valA = a1[3];

    if (valA & 0x83 && !(valA & 0x40))
    {
        if (!(valA & 2))
        {
            valA |= 1;
            a1[3] = valA;

            if (valA & 0x10c)
                *a1 = a1[2];
            else
                Camera_ResetMatrix_23(a1);

            void* valA2 = Camera_UpdateViewCone_23(a1[4], a1[2], a1[6]);
            a1[1] = valA2;

            if (valA2 && valA2 != 0xffffffff)
            {
                int32_t tmpD = a1[3];

                if (!(tmpD & 0x82))
                {
                    int32_t objC2 = a1[4];
                    void* dstD4;

                    if (objC2 == 0xffffffff)
                        dstD4 = &g_543fb0;
                    else
                        dstD4 = (&g_c32440)[objC2 >> 5] + ((objC2 & 0x1f) << 3);

                    if ((*(dstD4 + 4) & 0x82) == 0x82)
                    {
                        *(&tmpD + 1) |= 0x20;
                        a1[3] = tmpD;
                    }
                }

                if (a1[6] == 0x200)
                {
                    int16_t objC4 = a1[3];

                    if (objC4 & 8 && !(*(&objC4 + 1) & 4))
                        a1[6] = 0x1000;
                }

                char* objC5 = *a1;
                a1[1] = valA2 - 1;
                uint32_t result = *objC5;
                *a1 = &objC5[1];
                return result;
            }

            int32_t valA4 = -(valA2);
            a1[3] |= ((valA4 - valA4) & 0x10) + 0x10;
            a1[1] = 0;
        }
        else
        {
            valA |= 0x20;
            a1[3] = valA;
        }
    }

    return 0xffffffff;
}
