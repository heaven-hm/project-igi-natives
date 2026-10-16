#include "Light_ApplyLightmap_11.h"
int32_t Light_ApplyLightmap_11(int32_t* a1, int32_t* a2)

{
    int32_t ctxB;
    int32_t v_204 = ctxB;
    void v_100;
    Light_SetLightColor_10(a1, &v_100, 0x100, 1, 1, 1);
    void v_200;
    Light_SetLightColor_10(a2, &v_200, 0x100, 1, 1, 1);
    char* srcS = &v_200;
    char* valA1 = &v_100;

    while (true)
    {
        char tmpD1 = *valA1;
        char ctxB1 = *srcS;
        bool c_1 = tmpD1 < ctxB1;

        if (tmpD1 == ctxB1)
        {
            if (!tmpD1)
                break;

            tmpD1 = valA1[1];
            ctxB1 = srcS[1];
            c_1 = tmpD1 < ctxB1;

            if (tmpD1 == ctxB1)
            {
                valA1 = &valA1[2];
                srcS = &srcS[2];

                if (!tmpD1)
                    break;

                continue;
            }
        }

        return valA1 - valA1 + 1;
    }

    return 0;
}
