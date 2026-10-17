// Original IGI.EXE function: Human_Cleanup_6 (VA 0x004606F0; static CFG gate PASS, CFG score 0.970).
#include "Human_Cleanup_6.h"
int32_t* Human_Cleanup_6(void* a1, int32_t* a2)

{
    int32_t* result = a2[2];

    if (!result)
    {
    label_46074b:
        void* tmpD1 = *a2;
        double v_318[0x3];
        memcpy(&v_318, a1 + 0x20, 0x18);
        double v_300[0x60];
        result = Weapon_CheckAmmo_6(&v_300, 0x20, tmpD1, &v_318);

        if (result > 0)
        {
            double (* srcS3)[0x60] = &v_300;
            int32_t* result_1 = result;
            bool cond_3_1;

            do
            {
                if (!AI_CheckHearing_19(a1))
                {
                    int32_t* valA6 = a2[2];
                    int32_t objC1 = *a2;
                    int32_t v_334 = 0x14;
                    int32_t v_330 = 1;
                    int32_t v_32c_1 = 0x46;
                    int32_t v_328_1 = 0x46000000;
                    double (* v_324_1)[0x60] = srcS3;
                    int32_t v_320_1 = objC1;

                    if (!valA6)
                        int32_t v_31c_2 = 0;
                    else
                    {
                        void* valA7 = *valA6;
                        void* v_31c_1 = valA7;

                        if (valA7)
                            v_330 = AI_CombatTarget_19(valA7);
                    }

                    AI_EventBroadcast(&v_334);
                }
                else if (Frames_GetUpdateCounter() > *(a1 + 0x848))
                {
                    struct status_msg* valA3 = SoundSys_SetMasterVolume_7(a1, "gunshotmiss");

                    if (valA3)
                        SoundSys_StopSoundSample_7(valA3, srcS3);

                    *(a1 + 0x848) = Frames_GetUpdateCounter() + 5;
                }

                srcS3 = &(*srcS3)[3];
                result = result_1 - 1;
                cond_3_1 = result_1 != 1;
                result_1 = result;
            } while (cond_3_1);
        }
    }
    else
    {
        void* srcS1 = *result;
        int32_t dstD1 = 1;

        if (srcS1 != a1)
        {
            if (srcS1)
            {
                int32_t valA = AI_UpdateOrders_17();
                int16_t v_34c_1 = valA;
                valA = *(srcS1 + 0x1c);
                result = TaskType_IsDerivedFrom(valA, v_34c_1);

                if (result)
                    dstD1 = *(srcS1 + 0xfc);
            }

            if (*(a1 + 0xfc) != dstD1)
                goto label_46074b;
        }
    }

    return result;
}
