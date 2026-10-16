#include "AlarmControl_SetTrigger.h"

int32_t AlarmControl_SetTrigger(void* pThis, int32_t param)

{
    (*(((Script_ParseEnumReal32_8() * 0x180 + Env_UpdateCameraLens_3()) << 2) + &g_a96ae0))(pThis,
        param);
    Script_Isexists(pThis + 0x2ac, pThis);
    Script_Isexists(pThis + 0x2fc, pThis);
    return 0;
}
