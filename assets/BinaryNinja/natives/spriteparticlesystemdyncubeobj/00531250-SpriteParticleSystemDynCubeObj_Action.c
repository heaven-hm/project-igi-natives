// Original IGI.EXE function: SpriteParticleSystemDynCubeObj_Action (VA 0x00531250; static CFG gate PASS, CFG score 1.000).
#include "SpriteParticleSystemDynCubeObj_Action.h"
int32_t SpriteParticleSystemDynCubeObj_Action(int32_t context, int32_t* param_2)

{
    DynObj_RegisterSymbol_9(context, param_2);
    int32_t* source_val = g_afa814;
    int32_t entity_1 = *(param_2[0x1e] + source_val);
    int32_t data_1 = g_afa808 - 1;
    g_afa808 = data_1;

    if (entity_1 != data_1)
    {
        int32_t temp_1 = g_afa804;
        int32_t data_4 = *(temp_1 + (data_1 << 2)) * g_afa810 + g_afa800;
        int32_t dest_2 = *(temp_1 + (entity_1 << 2));
        int32_t source_1 = *(source_val + data_4);
        *(temp_1 + (entity_1 << 2)) = *(temp_1 + (source_1 << 2));
        *(g_afa804 + (source_1 << 2)) = dest_2;
        *(g_afa814 + data_4) = entity_1;
    }

    return QTask_FindType(param_2);
}
