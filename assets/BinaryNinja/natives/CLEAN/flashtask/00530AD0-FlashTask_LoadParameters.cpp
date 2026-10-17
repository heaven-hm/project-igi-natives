// IGI native provenance: FlashTask_LoadParameters - 0x00530AD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00530AD0-FlashTask_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FlashTask_LoadParameters.h"
int32_t FlashTask_LoadParameters(float context)

{
    int32_t temp_val = *(context + 0x48);
    int32_t source_val = *(context + 0x40);
    int32_t dest_val = *(context + 0x4c);
    int32_t entity_val = temp_val * 5;
    float* entity_1 = source_val + (entity_val << 2);

    if (dest_val < *(source_val + (entity_val << 2) - 8) && !*(context + 0x50))
    {
        long double fpu_val_7_1 = *(context + 0x60) + *(context + 0x6c);
        *(context + 0x4c) = dest_val + 1;
        *(context + 0x6c) = fpu_val_7_1;
        long double fpu_val_6_1 = *(context + 0x64) + *(context + 0x70);
        *(context + 0x70) = fpu_val_6_1;
        long double fpu_val_6_3 = *(context + 0x68) + *(context + 0x74);
        *(context + 0x58) = fpu_val_6_1;
        int32_t* temp_3 = *(context + 0x20) + 0x68;
        *(context + 0x74) = fpu_val_6_3;
        *(context + 0x54) = fpu_val_7_1;
        long double fpu_val_7_3 = *(context + 0x78) + *(context + 0x7c);
        *(context + 0x5c) = fpu_val_6_3;
        int32_t entity_3 = *(context + 0x54);
        *(context + 0x7c) = fpu_val_7_3;
        *temp_3 = entity_3;
        temp_3[1] = *(context + 0x58);
        temp_3[2] = *(context + 0x5c);
        return SpriteParticleSystemDynCubeObj_OnTick(*(context + 0x24), *(context + 0x20), context + 0x28, *(context + 0x7c));
    }

    if (temp_val >= *(context + 0x44) - 1)
    {
        if (entity_1[3] != 0xffffffff)
            return QTask_FindType(*(context + 0x80));

        *(context + 0x48) = 0;
        *(context + 0x4c) = 0;
        *(context + 0x50) = 1;
        return context;
    }

    *(context + 0x60) = (*(source_val + (temp_val + 1) * 0x14) - *entity_1) / entity_1[3];
    *(context + 0x64) = (entity_1[6] - entity_1[1]) / entity_1[3];
    *(context + 0x68) = (entity_1[7] - entity_1[2]) / entity_1[3];
    *(context + 0x78) = (entity_1[9] - entity_1[4]) / entity_1[3];
    *(context + 0x6c) = *entity_1;
    *(context + 0x70) = entity_1[1];
    *(context + 0x74) = entity_1[2];
    *(context + 0x54) = *entity_1;
    *(context + 0x58) = entity_1[1];
    *(context + 0x5c) = entity_1[2];
    int32_t entity_8 = entity_1[4];
    *(context + 0x48) = temp_val + 1;
    void* temp_7 = *(context + 0x20);
    *(context + 0x7c) = entity_8;
    int32_t entity_9 = *(context + 0x54);
    *(context + 0x4c) = 0;
    *(context + 0x50) = 0;
    *(temp_7 + 0x68) = entity_9;
    *(temp_7 + 0x6c) = *(context + 0x58);
    *(temp_7 + 0x70) = *(context + 0x5c);
    return SpriteParticleSystemDynCubeObj_OnTick(*(context + 0x24), *(context + 0x20), context + 0x28, *(context + 0x7c));
}
