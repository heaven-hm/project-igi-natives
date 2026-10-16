#include "Display_ClearSurfaces_8.h"
int32_t Display_ClearSurfaces_8()

{
    g_6840e9 = 0;
    Display_CheckCapabilities_8(0x5ca1b8);
    g_67a4a0 = 0xffffd8f0;
    int32_t v_b8 = 0x2710;

    for (int32_t* i = &g_6840e0; i > &g_67a4a0; )
    {
        long double fp1_1;
        bool c1_1;
        fp1_1 = __fyl2x(v_b8 * 0.0001, 0.69314718048553914 + 7.4406171098029793e-11);
        int32_t valA1 = fp1_1 * 1442.6950408888495;

        if (valA1 < 0xffffd8f0)
            valA1 = 0xffffd8f0;
        else if (valA1 > 0)
            valA1 = 0;

        *i = valA1;
        i -= 4;
        v_b8 -= 1;
    }

    int32_t valA2 = Ordinal_DSOUND_1(0, &g_67a498, 0);

    if (!valA2)
    {
        int32_t srcS3 = **&g_67a498;
        int32_t valA4 = FX_ExplosionSpawn_22();

        if (!(*(srcS3 + 0x18))(g_67a498, valA4, 3))
        {
            int32_t* valA6 = g_67a498;
            int32_t v_60 = 0x60;

            if ((*(*valA6 + 0x10))(valA6, &v_60))
            {
                int32_t* valA8 = g_67a498;
                int32_t valA9 = (*(*valA8 + 8))(valA8);
                g_67a498 = 0;
                return valA9;
            }

            int32_t v_84;
            __builtin_memset(&v_84, 0, 0x24);
            g_6840ea = 0;
            __builtin_memset(&v_84, 0, 0x24);
            int32_t* valA10 = g_67a498;
            int32_t v_5c;
            g_543900 = v_5c >> 1 & 1;
            v_84 = 0x24;
            int32_t v_80_1 = 9;

            if ((*(*valA10 + 0xc))(valA10, &v_84, &g_5ca154, 0))
            {
                int32_t* valA12 = g_67a498;
                int32_t valA13 = (*(*valA12 + 8))(valA12);
                g_67a498 = 0;
                return valA13;
            }

            int32_t* valA14 = g_5ca154;
            int32_t v_a0 = 0;
            v_a0 = 0x14;
            int32_t v_9c_1 = 0;
            int32_t v_98_1 = 0;
            int32_t v_94_1 = 0;
            int32_t v_90_1 = 0;
            int32_t valA15 = (*(*valA14 + 0xc))(valA14, &v_a0);

            if (!valA15)
            {
                int32_t v_b0_1 = 0x5622;
                valA15 = g_543900;
                g_676e50 = 1;
                int32_t valA17 = v_5c;
                valA17 &= 8;
                g_5ca134 = 0x20;
                char f1_1 = valA17;
                valA17 = -(valA17);
                int16_t v_a4_1 = 0x12;
                int16_t v_b4 = 1;
                uint16_t v_a6_1 = ((valA17 - valA17) & 8) + 8;
                int16_t v_a8 = ((((valA17 - valA17) & 8) + 8) >> 3) * (valA15 + 1);
                int32_t* valA26 = g_5ca154;
                uint32_t v_ac_1 = v_a8 * 0x5622;
                bool cond_1_1 = !(*(*valA26 + 0x38))(valA26, &v_b4);
                int32_t* valA28 = g_5ca154;
                int32_t tmpD5 = *valA28;

                if (!cond_1_1)
                {
                    (*(tmpD5 + 8))(valA28);
                    int32_t* valA29 = g_67a498;
                    int32_t valA30 = (*(*valA29 + 8))(valA29);
                    g_67a498 = 0;
                    return valA30;
                }

                if (!(*(tmpD5 + 0x30))(valA28, 0, 0, 1))
                {
                    void* valA35 = Mem_Alloc(g_5ca134 * 0x4c, 4);
                    int32_t valA36 = g_5ca134;
                    g_6840f0 = valA35;
                    int32_t srcS4 = 0;
                    int32_t valA37 = 0;
                    int32_t objC18 = valA36 * 0x4c;
                    __builtin_memset(__builtin_memset(valA35, 0, objC18 & 0xfffffffc), 0,
                        objC18 & 3);

                    if (g_5ca134 > 0)
                    {
                        void* dstD2 = nullptr;

                        do
                        {
                            Display_SetGammaRamp_8(dstD2 + g_6840f0, &g_6840f8);
                            valA37 = g_5ca134;
                            srcS4 += 1;
                            dstD2 += 0x4c;
                        } while (srcS4 < valA37);
                    }

                    g_6840f4 = 0;
                    g_6840e9 = 1;
                    return valA37;
                }
            }

            int32_t* valA32 = g_5ca154;
            (*(*valA32 + 8))(valA32);
        }

        int32_t* valA33 = g_67a498;
        valA2 = (*(*valA33 + 8))(valA33);
    }

    g_67a498 = 0;
    return valA2;
}
