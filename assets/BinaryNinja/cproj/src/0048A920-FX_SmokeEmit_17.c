#include "gi_platform.h"
#include "0048A920-FX_SmokeEmit_17.h"
int32_t* FX_SmokeEmit_17(void* a1, void* a2)

{
    int32_t* srcS = a1;
    void* valA = srcS[5];
    srcS[0xf79] = 0;
    int32_t* result = srcS[0xeaa];

    if (result)
    {
        result = AI_CheckSector_2(srcS);
        int32_t* result_1 = result;

        if (result_1)
        {
            result = *result_1[2];

            if (result)
            {
                result = AI_FireWeapon_19(result);

                if (!result)
                {
                    if (*(result_1 + 0x29))
                    {
                        AI_UpdatePatrol_3(srcS[0xeaa] + 0x110, srcS);

                        if (!(*(int32_t*)(uintptr_t)(a2 + 0x21)))
                        {
                            int16_t valA4 = HumanPlayer_LoadParameters_12();

                            if (*(*result_1[2] + 0x1c) == valA4)
                            {
                                int32_t valA6;

                                if (g_5416cc != 0xffffffff)
                                    valA6 = Frames_GetUpdateCounter() - g_5416cc;

                                if (g_5416cc == 0xffffffff || valA6 > 0x5a)
                                {
                                    SoundSys_SetMasterVolume_7(valA,
                                        (&g_5416d0)[Sys_FreeMemory_14(Level_SetMission_5(), 6)]);
                                    g_5416cc = Frames_GetUpdateCounter();
                                }

                                (*(int32_t*)(uintptr_t)(a2 + 0x21)) = 1;
                            }
                        }
                    }
                    else if (srcS[0x224] || srcS[0x229] || srcS[0x22a] || srcS[0x22b] || srcS[0x22c]
                            || srcS[0x22d] || srcS[0x22f] || srcS[0x231] || srcS[0x233] || srcS[0x22e])
                        AI_UpdatePatrol_3(srcS[0xeaa] + 0x110, srcS);

                    int32_t* valA21 = AI_SelectTarget_4(srcS);

                    if (!valA21)
                        srcS[0xf7b] = 0xffffffff;
                    else
                    {
                        int32_t objC4 = srcS[0xf7b];
                        int32_t valA22 = *valA21;

                        if (objC4 == 0xffffffff)
                            srcS[0xf7b] = valA22;
                        else if (objC4 != valA22)
                        {
                            srcS[0xf7b] = valA22;
                            srcS[0xf7c] = 1;
                        }
                    }

                    double* objC6 = srcS[0xeaa] + 0x110;
                    srcS[0xf79] = result_1;
                    long double fp0_1 = Sys_DispatchOpcode_11(DynObj_UpdateDynTree_4(valA), objC6);
                    int32_t valA24 = (*(int32_t*)(uintptr_t)(a2 + 0x1c));
                    (*(int32_t*)(uintptr_t)(a2 + 8)) = fp0_1;

                    if (!valA24)
                        FX_DebrisSpawn_17(srcS);

                    int32_t valA27;
                    int32_t tmpD7;
                    tmpD7 = HIGHD((*(int32_t*)(uintptr_t)(a2 + 0x1c)) + 1);
                    valA27 = LOWD((*(int32_t*)(uintptr_t)(a2 + 0x1c)) + 1);
                    result = COMBINE(tmpD7, valA27) / 0x14;
                    (*(int32_t*)(uintptr_t)(a2 + 0x1c)) = COMBINE(tmpD7, valA27) % 0x14;
                }
            }
        }
    }

    return result;
}
