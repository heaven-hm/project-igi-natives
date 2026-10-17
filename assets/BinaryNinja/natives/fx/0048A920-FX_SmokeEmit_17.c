// IGI native provenance: FX_SmokeEmit_17 - 0x0048A920 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048A920-FX_SmokeEmit_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_SmokeEmit_17.h"
int32_t* FX_SmokeEmit_17(void* context, void* param_2)

{
    int32_t* source_val = context;
    void* data_val = source_val[5];
    source_val[0xf79] = 0;
    int32_t* result = source_val[0xeaa];

    if (result)
    {
        result = AI_CheckSector_2(source_val);
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
                        AI_UpdatePatrol_3(source_val[0xeaa] + 0x110, source_val);

                        if (!*(param_2 + 0x21))
                        {
                            int16_t data_4 = HumanPlayer_LoadParameters_12();

                            if (*(*result_1[2] + 0x1c) == data_4)
                            {
                                int32_t data_6;

                                if (g_5416cc != 0xffffffff)
                                    data_6 = Frames_GetUpdateCounter() - g_5416cc;

                                if (g_5416cc == 0xffffffff || data_6 > 0x5a)
                                {
                                    SoundSys_SetMasterVolume_7(data_val,
                                        (&g_5416d0)[Sys_FreeMemory_14(Level_SetMission_5(), 6)]);
                                    g_5416cc = Frames_GetUpdateCounter();
                                }

                                *(param_2 + 0x21) = 1;
                            }
                        }
                    }
                    else if (source_val[0x224] || source_val[0x229] || source_val[0x22a] || source_val[0x22b] || source_val[0x22c]
                            || source_val[0x22d] || source_val[0x22f] || source_val[0x231] || source_val[0x233] || source_val[0x22e])
                        AI_UpdatePatrol_3(source_val[0xeaa] + 0x110, source_val);

                    int32_t* data_21 = AI_SelectTarget_4(source_val);

                    if (!data_21)
                        source_val[0xf7b] = 0xffffffff;
                    else
                    {
                        int32_t entity_4 = source_val[0xf7b];
                        int32_t data_22 = *data_21;

                        if (entity_4 == 0xffffffff)
                            source_val[0xf7b] = data_22;
                        else if (entity_4 != data_22)
                        {
                            source_val[0xf7b] = data_22;
                            source_val[0xf7c] = 1;
                        }
                    }

                    double* entity_6 = source_val[0xeaa] + 0x110;
                    source_val[0xf79] = result_1;
                    long double fp0_1 = Sys_DispatchOpcode_11(DynObj_UpdateDynTree_4(data_val), entity_6);
                    int32_t data_24 = *(param_2 + 0x1c);
                    *(param_2 + 8) = fp0_1;

                    if (!data_24)
                        FX_DebrisSpawn_17(source_val);

                    int32_t data_27;
                    int32_t temp_7;
                    temp_7 = HIGHD(*(param_2 + 0x1c) + 1);
                    data_27 = LOWD(*(param_2 + 0x1c) + 1);
                    result = COMBINE(temp_7, data_27) / 0x14;
                    *(param_2 + 0x1c) = COMBINE(temp_7, data_27) % 0x14;
                }
            }
        }
    }

    return result;
}
