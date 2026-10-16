#include "Physics_CouldNotCreateDirect.h"
int32_t Physics_CouldNotCreateDirect()

{
    int32_t srcS = 0;
    g_a7b638 = 0;

    if (!DirectInputCreateA(FX_TrailUpdate_21(), 0x700))
    {
        int32_t* valA2 = g_a7b4f0;
        int32_t ctxB;
        int32_t v_10 = ctxB;
        int32_t dstD;
        int32_t v_14_1 = dstD;
        (*(*valA2 + 0x10))(valA2, 4, Physics_SolveConstraints_9, 0, 1);
        int32_t result = g_a7b638;

        if (result && result > 0)
        {
            int32_t* ctxB1 = &g_a7b4e0;
            int32_t* dstD1 = &g_a7b430;

            while (true)
            {
                if (!Physics_CalculateSplineLength_10(srcS))
                {
                    Error_Show("Could not acquire one or more joystick devices.");

                    while (true)
                        /* nop */
                }
                else
                {
                    int32_t* valA4 = *ctxB1;
                    *dstD1 = 0x2c;

                    if ((*(*valA4 + 0xc))(valA4, dstD1))
                    {
                        Error_Show("Could not get capabilities for one or more joysticks .");

                        while (true)
                            /* nop */
                    }
                    else
                    {
                        Physics_SimulateRigidBody_10(srcS);
                        result = g_a7b638;
                        srcS += 1;
                        dstD1 = &dstD1[0xb];
                        ctxB1 = &ctxB1[1];

                        if (srcS >= result)
                            break;
                    }
                }
            }
        }

        return result;
    }

    Error_Show("Could not create DirectInput joypad object.");

    while (true)
        /* nop */
}
