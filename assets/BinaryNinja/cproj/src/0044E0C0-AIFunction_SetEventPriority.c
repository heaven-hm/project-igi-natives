#include "gi_platform.h"
#include "0044E0C0-AIFunction_SetEventPriority.h"
int32_t AIFunction_SetEventPriority(int32_t a1, float a2 )

// Sig: void AIFunction_SetEventPriority(int priority)
// Note: Sets the priority of the CURRENT event being handled (decides which
// queued event wins). Param: priority = engine priority number. Use inside an
// event handler.
{
    int32_t valA = Script_GetArg(a2, 0);
    int32_t objC = g_5bda58;

    if (!(*(int32_t*)(uintptr_t)(objC + valA + 0x8e4)))
    {
        (*(int32_t*)(uintptr_t)(objC + valA + 0x8e4)) = 1;
        void* objC1 = g_5bda58;
        *(objC1 + (*(objC1 + 0x8dc) << 2) + 0x81c) = valA;
        void* valA1 = g_5bda58;
        *(valA1 + 0x8dc) += 1;
    }

    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
