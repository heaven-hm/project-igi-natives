// IGI native provenance: AlarmControl_SetTrigger - 0x004409F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004409F0-AlarmControl_SetTrigger.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AlarmControl_SetTrigger.h"

int32_t AlarmControl_SetTrigger(void* pThis, int32_t param)

{
    (*(((Script_ParseEnumReal32_8() * 0x180 + Env_UpdateCameraLens_3()) << 2) + &g_a96ae0))(pThis,
        param);
    Script_Isexists(pThis + 0x2ac, pThis);
    Script_Isexists(pThis + 0x2fc, pThis);
    return 0;
}
