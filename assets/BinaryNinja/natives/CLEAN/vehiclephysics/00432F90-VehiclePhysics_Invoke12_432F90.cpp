// IGI native provenance: VehiclePhysics_Invoke12_432F90 - 0x00432F90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00432F90-VehiclePhysics_Invoke12_432F90.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "VehiclePhysics_Invoke12_432F90.h"

int32_t* VehiclePhysics_Invoke12_432F90(void* arg1, int32_t arg2)

{
    (*(((DynObj_LinkDynamicCube_12() * 0x180 + Script_ExecuteLevelScript_16()) << 2) + &g_a96ae0))(
        arg1, arg2);
    int32_t* result = *(arg1 + 0x74c);

    if (result)
    {
        void* eax_5 = *result;

        if (eax_5)
            SoundSys_SetFrequency_7(eax_5);

        result = Qtask_UpdateList(*(arg1 + 0x74c));
        *(arg1 + 0x74c) = 0;
    }

    return result;
}
