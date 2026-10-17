// Original IGI.EXE function: Particle2DDynCubeObjTask_Update (VA 0x004FDE00; static CFG gate PASS, CFG score 1.000).
#include "Particle2DDynCubeObjTask_Update.h"
int32_t Particle2DDynCubeObjTask_Update(float a1, void* a2)

{
    int32_t* srcS = a1;
    a1 = Script_ParseEnumReal32_30(srcS);
    double v_18[0x3];
    Script_ParseEnumString_30(&v_18, srcS);
    int32_t result = DynObj_LinkDynamicCube_8(*(a2 + 4), srcS, &v_18, a1, 2);
    int32_t* i = srcS[2];

    if (*i && i)
    {
        int32_t objC1 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* valA4;

            if (!tmpD1)
                valA4 = nullptr;
            else
            {
                int32_t valA1 = *tmpD1;
                int32_t valA2 = -(valA1);
                valA4 = (valA2 - valA2) & tmpD1;
            }

            *((objC1 << 2) + &g_afa6e0) = valA4;
            g_afa7e0 = objC1 + 1;
            uint32_t valA6 = DynObj_UpdateDynTree_12();
            int32_t tmpD2 = 0;
            tmpD2 = i[7];
            result = *(((valA6 * 0x180 + tmpD2) << 2) + &g_a96ae0);

            if (result)
                result = result(i, a2);

            objC1 = g_afa7e0 - 1;
            g_afa7e0 = objC1;
            i = *((objC1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
