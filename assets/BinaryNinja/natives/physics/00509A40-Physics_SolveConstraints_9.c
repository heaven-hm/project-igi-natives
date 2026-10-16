#include "Physics_SolveConstraints_9.h"
int32_t __stdcall Physics_SolveConstraints_9(void* a1)

{
    int32_t v_3c = *(a1 + 4);
    int32_t v_38 = *(a1 + 8);
    int32_t v_34 = *(a1 + 0xc);
    int32_t* valA2 = g_a7b4f0;
    int32_t v_30 = *(a1 + 0x10);
    void* v_48 = (g_a7b638 << 2) + &g_a7b2e0;

    if ((*(*valA2 + 0xc))(valA2, &v_3c) < 0)
    {
        Error_Show("Failed to create device.");

        while (true)
            /* nop */

        return;
    }

    int32_t objC3 = g_a7b638;
    int32_t ctxB;
    int32_t v_4c_1 = ctxB;
    int32_t srcS;
    int32_t v_50_1 = srcS;
    int32_t* valA4 = *((objC3 << 2) + &g_a7b2e0);
    int32_t valA5 = (**valA4)(valA4, 0x5349c0, (objC3 << 2) + &g_a7b4e0);
    int32_t* valA6 = *((g_a7b638 << 2) + &g_a7b2e0);
    (*(*valA6 + 8))(valA6);

    if (valA5 >= 0)
    {
        int32_t* valA7 = *((g_a7b638 << 2) + &g_a7b4e0);
        int32_t* valA9;

        if ((*(*valA7 + 0x2c))(valA7, 0x534c38) >= 0)
        {
            int32_t* srcS3 = *((g_a7b638 << 2) + &g_a7b4e0);

            if ((*(*srcS3 + 0x34))(srcS3, FX_ExplosionSpawn_22(), 5) < 0)
            {
                int32_t* valA14 = *((g_a7b638 << 2) + &g_a7b4e0);
                (*(*valA14 + 8))(valA14);
                *((g_a7b638 << 2) + &g_a7b4e0) = 0;
                return 1;
            }

            int32_t v_18 = 0x18;
            int32_t v_14_1 = 0x10;
            int32_t v_c_1 = 1;
            int32_t v_8_1 = 0xffffff80;
            int32_t v_4_1 = 0x80;
            int32_t* srcS5 = &g_54e8ac;

            while (true)
            {
                int32_t v_10_1 = srcS5[-1];
                int32_t* valA17 = *((g_a7b638 << 2) + &g_a7b2e0);
                int32_t valA18 = (*(*valA17 + 0x18))(valA17, 4, &v_18);

                if (valA18)
                {
                    if (valA18 != 0x80070002)
                        break;

                    *srcS5 = 0;
                }

                srcS5 = &srcS5[2];

                if (srcS5 >= "d not get capabilities for one or more joysticks .")
                {
                    int32_t valA19 = g_a7b638;
                    int32_t v_2c = 0x14;
                    int32_t v_28_1 = 0x10;
                    int32_t* valA20 = *((valA19 << 2) + &g_a7b2e0);
                    int32_t v_24_1 = 0;
                    int32_t v_20_1 = 0;
                    int32_t v_1c_1 = 1;
                    (*(*valA20 + 0x18))(valA20, 9, &v_2c);
                    int32_t v_20_2 = 0;
                    int32_t v_1c_2 = 0x2710;
                    int32_t* valA22 = *((g_a7b638 << 2) + &g_a7b2e0);
                    (*(*valA22 + 0x18))(valA22, 6, &v_2c);
                    int32_t v_20_3 = 1;
                    int32_t v_1c_3 = g_a7b63c;
                    int32_t* srcS6 = &g_54e8a8;

                    while (true)
                    {
                        if (srcS6[1])
                        {
                            int32_t v_24_2 = *srcS6;
                            int32_t* valA24 = *((g_a7b638 << 2) + &g_a7b2e0);

                            if ((*(*valA24 + 0x18))(valA24, 5, &v_2c))
                                break;
                        }

                        srcS6 = &srcS6[2];

                        if (srcS6 >= "Could not get capabilities for one or more joysticks .")
                        {
                            g_a7b638 += 1;
                            return 1;
                        }
                    }

                    break;
                }
            }

            valA9 = *((g_a7b638 << 2) + &g_a7b4e0);
        }
        else
            valA9 = *((g_a7b638 << 2) + &g_a7b4e0);

        (*(*valA9 + 8))(valA9);
        *((g_a7b638 << 2) + &g_a7b4e0) = 0;
        return 1;
    }

    Error_Show("Failed to obtain interface.");

    while (true)
        /* nop */
}
