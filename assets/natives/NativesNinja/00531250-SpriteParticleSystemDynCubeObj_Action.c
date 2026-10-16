#include "00531250-SpriteParticleSystemDynCubeObj_Action.h"
/* 0x00531250 SpriteParticleSystemDynCubeObj_Action full linked: callers=1 callees=2 */
int32_t sub_531250(int32_t a1, int32_t* a2)

{
    sub_4c7560(a1, a2);
    int32_t* esi = g_afa814;
    int32_t ecx_1 = *(a2[0x1e] + esi);
    int32_t eax_1 = g_afa808 - 1;
    g_afa808 = eax_1;

    if (ecx_1 != eax_1)
    {
        int32_t edx_1 = g_afa804;
        int32_t eax_4 = *(edx_1 + (eax_1 << 2)) * g_afa810 + g_afa800;
        int32_t edi_2 = *(edx_1 + (ecx_1 << 2));
        int32_t esi_1 = *(esi + eax_4);
        *(edx_1 + (ecx_1 << 2)) = *(edx_1 + (esi_1 << 2));
        *(g_afa804 + (esi_1 << 2)) = edi_2;
        *(g_afa814 + eax_4) = ecx_1;
    }

    return QTask_FindType(a2);
}
