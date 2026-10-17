// IGI native provenance: CamTask_OnTick - 0x005302D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005302D0-CamTask_OnTick.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CamTask_OnTick.h"
int32_t CamTask_OnTick(int32_t context , int32_t* param_2, int32_t* param_3)

{
    char* flagP = *param_2;
    char* item_10 = flagP;
    void* data_1 = Mem_Alloc(0x3006, 4);
    void* data_2 = Mem_Alloc(0x800, 4);
    int32_t source_val = 1;
    int32_t* dest_val = nullptr;

    while (context)
    {
        *(dest_val + data_2 + 1) = *flagP;
        flagP = &flagP[1];
        dest_val += 1;
        context -= 1;

        if (dest_val >= 0x82)
            break;
    }

    char* item_10_1 = flagP;
    param_2 = dest_val;
    Particle_Render3DSprites(data_1, 1);
    int32_t* flagP1 = nullptr;
    int32_t item_8 = 0;

    if (dest_val > 0)
    {
        do
        {
            if (flagP1 > param_2)
                flagP1 = param_2;

            int32_t* dest_1;

            if (flagP1 > 2)
            {
                Particle_TriggerMuzzleFlash_2(param_3, 0);
                Particle_RenderTrails_2(param_3, item_8, 0xb);
                Particle_RenderTrails_2(param_3, flagP1 - 3, 7);
                dest_1 = flagP1;

                if (flagP1 > 0)
                    goto label_5303b4;
            }
            else
            {
                dest_1 = 1;
                Particle_TriggerMuzzleFlash_2(param_3, 1);
                int32_t temp_1 = 0;
                temp_1 = *(source_val + data_2);
                Particle_RenderTrails_2(param_3, temp_1, 8);
            label_5303b4:
                int32_t* item_4_1 = dest_1;
                bool flag_1_1;

                do
                {
                    Particle_TriggerMuzzleFlash(data_1, (source_val + 0x82) & 0x7ff);

                    if (context)
                    {
                        char data_12 = *item_10_1;
                        item_10_1 = &item_10_1[1];
                        context -= 1;
                        *(((source_val + 0x82) & 0x7ff) + data_2) = data_12;
                    }
                    else
                        param_2 -= 1;

                    source_val = (source_val + 1) & 0x7ff;

                    if (param_2)
                        flagP1 = Particle_EmitParticles_2(data_1, data_2, source_val, &item_8);

                    flag_1_1 = item_4_1 != 1;
                    item_4_1 -= 1;
                } while (flag_1_1);
            }
        } while (param_2 > 0);
    }

    Particle_TriggerMuzzleFlash_2(param_3, 0);
    Particle_RenderTrails_2(param_3, 0, 0xb);
    Sys_ExecuteBytecode_2(data_1);
    return Sys_ExecuteBytecode_2(data_2);
}
