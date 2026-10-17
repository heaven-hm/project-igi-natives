// IGI native provenance: Siren_LoadParameters - 0x004494D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004494D0-Siren_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Siren_LoadParameters.h"
struct status_msg* Siren_LoadParameters(long double context , void* param_2)

{
    (*((FX_TrailUpdate() << 2) + &g_a970e0))(param_2);
    *(param_2 + 0x2d1) = *(param_2 + 0x2d0);
    struct status_msg* result = Script_SpawnNewTask_7(param_2 + 0x278, param_2);
    result = context;
    *(param_2 + 0x2d0) = result;

    if (!result)
    {
        result = *(param_2 + 0x190);

        if (!result)
        {
            result = *(param_2 + 0x2c8);

            if (result)
            {
                result = SoundSys_SetFrequency_7(result);
                *(param_2 + 0x2c8) = 0;
            }
        }
    }

    result = *(param_2 + 0x2d0);

    if (result)
    {
    label_44957c:
        result = *(param_2 + 0x190);

        if (!result)
        {
            result = *(param_2 + 0x2c8);

            if (!result)
            {
                result = SoundSys_SetMasterVolume_7(param_2, param_2 + 0x238);
                *(param_2 + 0x2c8) = result;
            }
        }

        result = *(param_2 + 0x2d0);

        if (result)
        {
            result = *(param_2 + 0x190);

            if (result)
            {
                void* data_5 = *(param_2 + 0x2c8);

                if (data_5)
                {
                    SoundSys_SetFrequency_7(data_5);
                    *(param_2 + 0x2c8) = 0;
                }

                result = *(param_2 + 0x2cc);

                if (!result)
                {
                    result = SoundSys_SetMasterVolume_7(param_2, param_2 + 0x258);
                    *(param_2 + 0x2cc) = result;
                }
            }
        }
    }
    else
    {
        result = *(param_2 + 0x190);

        if (result)
        {
            result = *(param_2 + 0x2cc);

            if (result)
            {
                result = SoundSys_SetFrequency_7(result);
                *(param_2 + 0x2cc) = 0;
            }
        }

        result = *(param_2 + 0x2d0);

        if (result)
            goto label_44957c;
    }

    return result;
}
