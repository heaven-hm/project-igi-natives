// Original IGI.EXE function: Particle_FadeParticles_5 (VA 0x005321F0; static CFG gate PASS, CFG score 1.000).
#include "Particle_FadeParticles_5.h"
void Particle_FadeParticles_5(void** a1, int32_t* a2, void* a3, int32_t a4)

{
    if (a2 < 2 || !a3)
        return;

    int32_t v_8_1 = 0;
    char* ctxB1 = a1;
    void v_84;
    a1 = &v_84;
    char* srcS3 = (a2 - 1) * a3 + ctxB1;
    void v_fc;
    a2 = &v_fc;

    while (true)
    {
        if (COMBINE(0, srcS3 - ctxB1) / a3 + 1 > 8)
        {
            Particle_EmitParticles_6(((COMBINE(0, srcS3 - ctxB1) / a3 + 1) >> 1) * a3 + ctxB1, ctxB1, a3);
            char* v_c_1 = ctxB1;
            char* dstD2 = a3 + srcS3;

            while (true)
            {
                char* valA11 = v_c_1 + a3;
                v_c_1 = valA11;

                if (valA11 <= srcS3 && a4(valA11, ctxB1) <= 0)
                    continue;

                bool cond_2_1;

                do
                {
                    dstD2 -= a3;

                    if (dstD2 <= ctxB1)
                        break;

                    cond_2_1 = a4(dstD2, ctxB1) >= 0;
                } while (cond_2_1);

                if (dstD2 < v_c_1)
                    break;

                Particle_EmitParticles_6(v_c_1, dstD2, a3);
            }

            Particle_EmitParticles_6(ctxB1, dstD2, a3);

            if (dstD2 - ctxB1 - 1 < srcS3 - v_c_1)
            {
                if (v_c_1 < srcS3)
                {
                    int32_t* objC8 = a2;
                    v_8_1 += 1;
                    a2 = &a2[1];
                    *objC8 = v_c_1;
                    void** valA14 = a1;
                    a1 = &a1[1];
                    *valA14 = srcS3;
                }

                if (a3 + ctxB1 < dstD2)
                {
                    srcS3 = dstD2 - a3;
                    continue;
                }
            }
            else
            {
                if (ctxB1 + a3 < dstD2)
                {
                    int32_t* tmpD6 = a2;
                    a2 = &a2[1];
                    void** objC7 = a1;
                    v_8_1 += 1;
                    a1 = &a1[1];
                    *tmpD6 = ctxB1;
                    *objC7 = dstD2 - a3;
                }

                if (v_c_1 < srcS3)
                {
                    ctxB1 = v_c_1;
                    continue;
                }
            }
        }
        else
            Particle_ResetEmitters_5(ctxB1, srcS3, a3, a4);

        v_8_1 -= 1;
        a2 -= 4;
        a1 -= 4;

        if (v_8_1 < 0)
            break;

        ctxB1 = *a2;
        srcS3 = *a1;
    }
}
