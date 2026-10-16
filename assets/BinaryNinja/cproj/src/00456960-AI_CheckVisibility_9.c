#include "gi_platform.h"
#include "00456960-AI_CheckVisibility_9.h"
int32_t AI_CheckVisibility_9(void* a1, void* a2)

{
    int32_t valA = (*(int32_t*)(uintptr_t)(a2 + 0xd04));
    (*(int32_t*)(uintptr_t)(a2 + 0x696)) = 0;

    if (valA == 0xffffffff)
    {
        int32_t valA6 = Human_StateAnimation(a2, 2, 0.0f);
        (*(int32_t*)(uintptr_t)(a2 + 0xd04)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_456a10;
        return valA6;
    }

    if (Render_BindTexture_11(a2 + 0x68, 0, valA))
    {
        int32_t valA3 = FX_DebrisSpawn_14(a2, (*(int32_t*)(uintptr_t)(a2 + 0xd04)), 0, 0.0f);
        (*(int32_t*)(uintptr_t)(a2 + 0xd04)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_456a10;
        return valA3;
    }

    int32_t v_c_1 = (*(int32_t*)(uintptr_t)(a2 + 0xd04));
    Warning_Show("Animation #%d not found");
    int32_t valA5 = Human_StateAnimation(a2, 2, 0.0f);
    (*(int32_t*)(uintptr_t)(a2 + 0xd04)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = sub_456a10;
    return valA5;
}
