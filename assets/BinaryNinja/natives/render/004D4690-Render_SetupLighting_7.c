#include "Render_SetupLighting_7.h"
float Render_SetupLighting_7(int32_t a1, float a2, int32_t* a3) __location("valA")

{
    int32_t tmpD = *a3;

    if (tmpD == 1)
    {
        void* objC = a3[1];
        int32_t tmpD1 = *(objC + 4);

        if (tmpD1)
            return tmpD1(a1, a2, *(objC + 0x10));
    }
    else if (!tmpD)
    {
        int32_t v_c_2 = a1;
        long double fpu6;
        return Render_DrawLightmapMesh_7(fpu6, a2, a3[1]);
    }

    return nanf;
}
