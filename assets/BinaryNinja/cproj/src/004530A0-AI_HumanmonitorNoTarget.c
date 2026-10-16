#include "gi_platform.h"
#include "004530A0-AI_HumanmonitorNoTarget.h"
int32_t* AI_HumanmonitorNoTarget(int32_t* a1)

{
    int32_t* dstD = a1;
    int32_t valA = AI_CombatTarget_3(dstD);

    if (valA)
    {
        int32_t* arg_8;
        int32_t* ctxB1 = arg_8;
        int32_t* srcS1 = ctxB1[3];
        int32_t* valA2 = *srcS1;
        double v_18[0x3];

        if (!valA2)
        {
    label_4530f6: ;
            int32_t* i_1 = g_57e1b8;
            int32_t* i = *i_1;

            if (i)
            {
                int32_t* valA5;

                do
                {
                    arg_8 = nullptr;
                    Camera_ApplyHandiCam_33(i_1);
                    Camera_SetFieldOfView_33(&ctxB1[3], i_1);
                    i_1[4] = valA;
                    uint32_t valA4 = Frames_GetUpdateCounter();
                    int32_t* objC1 = a1;
                    i_1[3] = valA4;
                    AI_UpdatePatrol_3(&v_18, objC1);
                    Physics_ApplyImpulse_8(&arg_8, ctxB1[2], &v_18);
                    valA5 = arg_8;

                    if (valA5)
                    {
                        i_1[2] = *valA5;
                        return valA5;
                    }

                    i_1[2] = 0xffffffff;
                    i_1 = i;
                    i = *i;
                } while (i);

                return valA5;
            }
        }
        else
        {
            while (true)
            {
                if (srcS1[4] == valA)
                {
                    uint32_t valA6 = Frames_GetUpdateCounter();

                    if (srcS1[3] == valA6)
                    {
                        int32_t srcS2 = srcS1[2];

                        if (srcS2 != 0xffffffff)
                            return Script_ExecuteLevelScript_23(ctxB1[2], srcS2);

                        break;
                    }

                    a1 = nullptr;
                    srcS1[3] = Frames_GetUpdateCounter();
                    AI_UpdatePatrol_3(&v_18, dstD);
                    Physics_ApplyImpulse_8(&a1, ctxB1[2], &v_18);
                    int32_t* valA11 = a1;

                    if (!valA11)
                    {
                        srcS1[2] = 0xffffffff;
                        return 0;
                    }

                    srcS1[2] = *valA11;
                    return valA11;
                }

                srcS1 = valA2;
                valA2 = *valA2;

                if (!valA2)
                    goto label_4530f6;
            }
        }
    }
    else
        Warning_Show("HumanMonitor - no target");

    return 0;
}
