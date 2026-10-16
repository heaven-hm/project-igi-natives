#include "CamTask_OnTick.h"
int32_t CamTask_OnTick(int32_t a1 @ 0x8, int32_t* a2, int32_t* a3)

{
    char* flagP = *a2;
    char* v_10 = flagP;
    void* valA1 = Mem_Alloc(0x3006, 4);
    void* valA2 = Mem_Alloc(0x800, 4);
    int32_t srcS = 1;
    int32_t* dstD = nullptr;

    while (a1)
    {
        *(dstD + valA2 + 1) = *flagP;
        flagP = &flagP[1];
        dstD += 1;
        a1 -= 1;

        if (dstD >= 0x82)
            break;
    }

    char* v_10_1 = flagP;
    a2 = dstD;
    Particle_Render3DSprites(valA1, 1);
    int32_t* flagP1 = nullptr;
    int32_t v_8 = 0;

    if (dstD > 0)
    {
        do
        {
            if (flagP1 > a2)
                flagP1 = a2;

            int32_t* dstD1;

            if (flagP1 > 2)
            {
                Particle_TriggerMuzzleFlash_2(a3, 0);
                Particle_RenderTrails_2(a3, v_8, 0xb);
                Particle_RenderTrails_2(a3, flagP1 - 3, 7);
                dstD1 = flagP1;

                if (flagP1 > 0)
                    goto label_5303b4;
            }
            else
            {
                dstD1 = 1;
                Particle_TriggerMuzzleFlash_2(a3, 1);
                int32_t tmpD1 = 0;
                tmpD1 = *(srcS + valA2);
                Particle_RenderTrails_2(a3, tmpD1, 8);
            label_5303b4:
                int32_t* v_4_1 = dstD1;
                bool cond_1_1;

                do
                {
                    Particle_TriggerMuzzleFlash(valA1, (srcS + 0x82) & 0x7ff);

                    if (a1)
                    {
                        char valA12 = *v_10_1;
                        v_10_1 = &v_10_1[1];
                        a1 -= 1;
                        *(((srcS + 0x82) & 0x7ff) + valA2) = valA12;
                    }
                    else
                        a2 -= 1;

                    srcS = (srcS + 1) & 0x7ff;

                    if (a2)
                        flagP1 = Particle_EmitParticles_2(valA1, valA2, srcS, &v_8);

                    cond_1_1 = v_4_1 != 1;
                    v_4_1 -= 1;
                } while (cond_1_1);
            }
        } while (a2 > 0);
    }

    Particle_TriggerMuzzleFlash_2(a3, 0);
    Particle_RenderTrails_2(a3, 0, 0xb);
    Sys_ExecuteBytecode_2(valA1);
    return Sys_ExecuteBytecode_2(valA2);
}
