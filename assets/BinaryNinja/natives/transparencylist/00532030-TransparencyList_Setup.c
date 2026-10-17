// Original IGI.EXE function: TransparencyList_Setup (VA 0x00532030; static CFG gate PASS, CFG score 1.000).
#include "TransparencyList_Setup.h"
int32_t* TransparencyList_Setup(int32_t* a1)

{
    void* valA1 = a1[3];
    int32_t* __saved_ecx_2 = *(valA1 + 0x6c);
    void** dstD = *(valA1 + 0x78);
    int32_t valA2 = Particle_FadeParticles_5(dstD, __saved_ecx_2, 8, sub_5320d0);

    if (__saved_ecx_2 <= 0)
    {
        g_a84620 = 0;
        return valA2;
    }

    int32_t* dstD1 = &dstD[1];
    a1 = dstD1;
    int32_t* saved_ctx = __saved_ecx_2;
    int32_t* __saved_ecx_1;
    bool cond_0_1;

    do
    {
        void* valA3 = *dstD1;
        int32_t i_1 = *(valA3 + 4);
        int32_t flagP1 = *(valA3 + 0x18);
        int32_t dstD2 = *(valA3 + 0x1c);
        void* srcS = valA3 + 0x20;

        if (i_1 > 0)
        {
            int32_t i;

            do
            {
                int32_t* valA4 = g_5ca114;
                (*(*valA4 + 0x64))(valA4, 4, dstD2, srcS, 3, 0);
                srcS += flagP1 * 3;
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }

        dstD1 = &a1[2];
        __saved_ecx_1 = saved_ctx - 1;
        cond_0_1 = saved_ctx != 1;
        a1 = dstD1;
        saved_ctx = __saved_ecx_1;
    } while (cond_0_1);
    g_a84620 = 0;
    return __saved_ecx_1;
}
