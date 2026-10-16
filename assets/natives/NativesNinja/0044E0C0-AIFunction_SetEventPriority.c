#include "0044E0C0-AIFunction_SetEventPriority.h"
/* 0x0044e0c0 AIFunction_SetEventPriority full linked: callers=0 callees=2 */
int32_t AIFunction_SetEventPriority(int32_t a1, float a2 @ 0xc)

// Sig: void AIFunction_SetEventPriority(int priority)
// Note: Sets the priority of the CURRENT event being handled (decides which
// queued event wins). Param: priority = engine priority number. Use inside an
// event handler.
{
    int32_t eax = sub_4b8a20(a2, 0);
    struct ai_ctx* ecx = g_5bda58;

    if (!ecx->pad[0x8e4 + eax])
    {
        ecx->pad[0x8e4 + eax] = 1;
        struct ai_ctx* ecx_1 = g_5bda58;
        int32_t esi;
        esi = ecx_1->pad[0x8dc];
        *(&esi + 1) = ecx_1->pad[0x8dd];
        *(&esi + 2) = ecx_1->pad[0x8de];
        *(&esi + 3) = ecx_1->pad[0x8df];
        *(&ecx_1->pad[0x81c] + (esi << 2)) = eax;
        struct ai_ctx* eax_1 = g_5bda58;
        eax_1->pad[0x8dc] += 1;
    }

    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
