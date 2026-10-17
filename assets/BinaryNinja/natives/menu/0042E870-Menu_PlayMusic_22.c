// IGI native provenance: Menu_PlayMusic_22 - 0x0042E870 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042E870-Menu_PlayMusic_22.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_PlayMusic_22.h"
int32_t* Menu_PlayMusic_22(long double context , int32_t param_2)

{
    int32_t* result = Script_FormatString_6(param_2 + 0x978);

    if (result)
    {
        int32_t result_1 = *(param_2 + 0x91d);
        result = Script_SpawnNewTask_7(param_2 + 0x978, param_2);
        result = context;
        *(param_2 + 0x91d) = result;

        if (result)
        {
            memcpy(param_2 + 0xa18, param_2 + 0x20, 0x18);
            *(param_2 + 0xa28) = *(param_2 + 0xa28) + 8192.0;
            memcpy(param_2 + 0xa30, param_2 + 0x70, 0x28);
            *(param_2 + 0xa88) = 0;
            result = Car_DetectionSweep(param_2 + 0xa90, param_2 + 0xa18, param_2, 1);
        }

        result = *(param_2 + 0x91d);

        if (!result)
        {
            result = result_1;

            if (result)
            {
                FX_TrailUpdate_13(param_2 + 0xa90);
                return FX_DebrisSpawn_13(param_2 + 0xa90, 1, 4, AI_CombatTarget_22(), 4, 8);
            }
        }
    }

    return result;
}
