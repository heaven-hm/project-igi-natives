#include "BoneMagicObj_LoadParameters.h"
int32_t BoneMagicObj_LoadParameters(void* a1)

{
    Render_DrawBoneMesh_7(a1 + 0x78, a1 + 0x68);
    float v_c;
    Render_TransformVertices_5(nullptr, &v_c, a1 + 0x68);
    *(a1 + 0x120) = v_c + *(a1 + 0x120);
    float v_8;
    *(a1 + 0x124) = v_8 + *(a1 + 0x124);
    float v_4;
    *(a1 + 0x128) = v_4 + *(a1 + 0x128);
    int32_t result = Render_ClipMesh_5(0, a1 + 0x68);
    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i;
            void* valA4;

            if (!srcS1)
                valA4 = nullptr;
            else
            {
                int32_t valA1 = *srcS1;
                int32_t valA2 = -(valA1);
                valA4 = (valA2 - valA2) & srcS1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA4;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA5 = 0;
            g_afa7e0 = tmpD2;
            valA5 = i[7];
            result = *((valA5 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                tmpD2 = g_afa7e0;
            }

            i = *((tmpD2 << 2) + &g_afa6dc);
            tmpD1 = tmpD2 - 1;
            g_afa7e0 = tmpD1;
        } while (i);
    }

    return result;
}
