#include "0044E330-AIFunction_SetAlarmAccess.h"
/* 0x0044e330 AIFunction_SetAlarmAccess full linked: callers=0 callees=2 */
int32_t AIFunction_SetAlarmAccess(int32_t a1, float a2 @ 0xc)

// Sig: void AIFunction_SetAlarmAccess(int access)
// Note: Sets HOW the AI treats the alarm route. Param: access = AIALARMACCESS
// enum: BEFORECOMBAT=0 (run for the alarm first), AFTERCOMBAT=1 (fight first,
// raise alarm after). Retail template:
// AIFunction_SetAlarmAccess(AIALARMACCESS_BEFORECOMBAT).
{
    int32_t eax_1 = sub_4b8a20(a2, 0);
    struct ai_ctx* ecx = g_5bda58;
    int32_t var_18 = 1;
    ecx->pad[0x3acc] = eax_1;
    ecx->pad[0x3acd] = *(&eax_1 + 1);
    ecx->pad[0x3ace] = *(&eax_1 + 2);
    ecx->pad[0x3acf] = *(&eax_1 + 3);
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
