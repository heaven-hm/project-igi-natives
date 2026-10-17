// IGI native provenance: DoorCabinet_Invoke3_440DE0 - 0x00440DE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00440DE0-DoorCabinet_Invoke3_440DE0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_Invoke3_440DE0.h"

char* DoorCabinet_Invoke3_440DE0(void* arg1)

{
    (*((Env_UpdateCameraLens_3() << 2) + &g_a976e0))(arg1);

    if (Script_EvaluateCondition_4(arg1) >= 0)
    {
        int32_t eax_4 = Script_SpawnNewTask_6();
        int32_t ecx_1 = 0;
        ecx_1 = *(arg1 + 0x1c);
        int32_t eax_8 = *(((eax_4 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (eax_8)
            eax_8(arg1);
    }

    return Script_CallNativeHandler_6(arg1 + 0x2a4);
}
