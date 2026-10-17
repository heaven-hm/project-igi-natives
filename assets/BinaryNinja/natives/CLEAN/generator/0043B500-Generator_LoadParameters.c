// IGI native provenance: Generator_LoadParameters - 0x0043B500 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043B500-Generator_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Generator_LoadParameters.h"
struct status_msg* Generator_LoadParameters(long double context , void* param_2)

{
    int32_t flagP = *(param_2 + 0x23c);
    (*((FX_TrailUpdate() << 2) + &g_a970e0))(param_2);

    if (*(param_2 + 0x190))
        *(param_2 + 0x23c) = 0;
    else if (Script_FormatString_6(param_2 + 0x240))
    {
        Script_SpawnNewTask_7(param_2 + 0x240, param_2);
        *(param_2 + 0x23c) = context;
    }

    if (*(param_2 + 0x2b4))
    {
        if (!*(param_2 + 0x23c) && *(param_2 + 0x2b8) == 0xffffffff)
        {
🚫🚫            /* unimplemented  {fld fp0, dword [source_val+0x2b0]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_5333bc]} */
🚫🚫🚫            int32_t item_8_2 = /* int32_t item_8_2 =
                (unimplemented  {fistp qword [stack_ptr+0xc], fp0}).d */;
            /* unimplemented  {fistp qword [stack_ptr+0xc], fp0} */
            *(param_2 + 0x2b8) = item_8_2;
        }

        int32_t data_9 = *(param_2 + 0x2b8);

        if (data_9 <= 0)
            *(param_2 + 0x23c) = 1;
        else
            *(param_2 + 0x2b8) = data_9 - 1;
    }

    struct status_msg* result = *(param_2 + 0x238);

    if (!*(param_2 + 0x23c))
    {
        if (result)
        {
            result = SoundSys_SetFrequency_7(result);
            *(param_2 + 0x238) = 0;
        }

        if (flagP)
        {
            result = SoundSys_SetMasterVolume_7(param_2, param_2 + 0x2a0);

            if (result)
                return SoundSys_StopSoundSample_7(result, param_2 + 0x20);
        }
    }
    else if (!result)
    {
        result = param_2 + 0x290;

        if (*(param_2 + 0x290))
        {
            result = SoundSys_SetMasterVolume_7(param_2, result);
            *(param_2 + 0x238) = result;

            if (result)
                return SoundSys_StopSoundSample_7(result, param_2 + 0x20);
        }
    }

    return result;
}
