// Original IGI.EXE function: Physics_MenuitemMoveCalledWi (VA 0x00505AD0; static CFG gate PASS, CFG score 0.963).
#include "Physics_MenuitemMoveCalledWi.h"
int32_t Physics_MenuitemMoveCalledWi(void* a1, int32_t a2)

{
    void* valA = Physics_ApplyImpulse_4(a1);
    void* srcS;

    if (a2 > 0)
    {
        srcS = Physics_CheckHullCollision_4(a1, a2);

        if (!*(srcS + 0x4c))
        {
        label_505b79:

            if (srcS)
            {
                int32_t v_1c;
                __builtin_memset(&v_1c, 0, 0x1c);
                v_1c = *(srcS + 0x38);
                uint32_t valA11 = Physics_InterpolateWaypoint_5();
                int32_t tmpD = 0;
                tmpD = *(srcS + 0x1c);
                (*(((valA11 * 0x180 + tmpD) << 2) + &g_a96ae0))(srcS, &v_1c);

                if (valA)
                {
                    uint32_t valA14 = Physics_InterpolateWaypoint_5();
                    int32_t valA15 = 0;
                    valA15 = *(valA + 0x1c);
                    (*(((valA14 * 0x180 + valA15) << 2) + &g_a96ae0))(valA, &v_1c);
                }

                return 1;
            }
        }

        return 0;
    }

    srcS = Physics_ApplyImpulse_4(a1);

    if (!srcS)
        srcS = Physics_UpdateForces_4(a1);
    else
    {
        int32_t valA5 = a2 + 4;

        if (a2 + 4 > 3)
        {
        label_505b64:
            Error_Show("MenuItem_Move() called with illegal direction parameter.");

            while (true)
                /* nop */
        }
        else
        {
            while (true)
            {
                int32_t srcS1;

                switch (valA5)
                {
                    case 0:
                    {
                        srcS1 = *(srcS + 0x40);
                        break;
                    }
                    case 1:
                    {
                        srcS1 = *(srcS + 0x3c);
                        break;
                    }
                    case 2:
                    {
                        srcS1 = *(srcS + 0x48);
                        break;
                    }
                    case 3:
                    {
                        srcS1 = *(srcS + 0x44);
                        break;
                    }
                }

                if (!srcS1)
                    return 0;

                srcS = Physics_CheckHullCollision_4(a1, srcS1);

                if (!*(srcS + 0x4c))
                    break;

                if (!srcS)
                    return 0;

                valA5 = a2 + 4;

                if (a2 + 4 > 3)
                    goto label_505b64;
            }
        }
    }

    goto label_505b79;
}
