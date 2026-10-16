#include "Terrain_BuildMipMaps_4.h"
char* Terrain_BuildMipMaps_4(char* a1, char* a2, int32_t a3)

{
    char* dstD = a1;
    a1 = dstD;

    if (!g_c3221c)
        return Camera_ApplyLineFilter_5(dstD, a2, a3);

    int32_t i = a3;

    if (i)
    {
        char* objC1 = a2;

        do
        {
            char valA2 = *objC1;
            i -= 1;
            bool cond_2_1 = !(*(valA2 + 0xc32321) & 4);
            *dstD = valA2;

            if (cond_2_1)
            {
                dstD = &dstD[1];
                objC1 = &objC1[1];

                if (!valA2)
                    break;
            }
            else
            {
                dstD = &dstD[1];

                if (!i)
                {
                    dstD[0xffffffff] = 0;
                    break;
                }

                valA2 = objC1[1];
                i -= 1;
                *dstD = valA2;
                dstD = &dstD[1];
                objC1 = &objC1[2];

                if (!valA2)
                {
                    dstD[0xfffffffe] = 0;
                    break;
                }
            }
        } while (i);
    }

    if (i)
        __builtin_memset(__builtin_memset(dstD, 0, i & 0xfffffffc), 0, i & 3);

    return a1;
}
