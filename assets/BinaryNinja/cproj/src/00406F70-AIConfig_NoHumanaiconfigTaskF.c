#include "gi_platform.h"
#include "00406F70-AIConfig_NoHumanaiconfigTaskF.h"
int32_t AIConfig_NoHumanaiconfigTaskF(void* a1)

{
    int32_t srcS = g_5690d0;
    void* ctxB = (*(int32_t*)(uintptr_t)(a1 + 0x14));

    if (!srcS)
        return Warning_Show("No HumanAIConfig task found");

    int32_t* valA1 = Config_GetActivePlayerProfileRecord();

    if (!valA1)
        return Warning_Show("No active playerprofile found");

    int32_t objC = (*(int32_t*)(uintptr_t)(a1 + 0x3d38));
    int32_t __saved_ebp_1 = *valA1;
    void* srcS1 = (*(int32_t*)(uintptr_t)(srcS + (((objC + 3) * 3 + __saved_ebp_1) << 2)));

    if (!srcS1)
    {
        int32_t saved_frame = __saved_ebp_1;
        int32_t v_1c_1 = AI_UpdatePatrol_4(objC);
        return Warning_Show("No configuration found for AIType: #%d, Difficulty: #%d");
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x3d48)) = *(srcS1 + 0x230) * 30.0f;
    (*(int32_t*)(uintptr_t)(a1 + 0x3d44)) = *(srcS1 + 0x22c) * 30.0f;
    (*(int32_t*)(uintptr_t)(a1 + 0x3d4c)) = *(srcS1 + 0x228);
    (*(int32_t*)(uintptr_t)(a1 + 0x3d50)) = *(srcS1 + 0x268) * 30.0f;
    (*(int32_t*)(uintptr_t)(a1 + 0x3d54)) = *(srcS1 + 0x234);
    (*(int32_t*)(uintptr_t)(a1 + 0x3d58)) = *(srcS1 + 0x238);
    (*(int32_t*)(uintptr_t)(a1 + 0x3d5c)) = *(srcS1 + 0x23c);
    (*(int32_t*)(uintptr_t)(a1 + 0x3d60)) = *(srcS1 + 0x240);
    (*(int32_t*)(uintptr_t)(a1 + 0x3d64)) = *(srcS1 + 0x244);
    (*(int32_t*)(uintptr_t)(a1 + 0x3d68)) = *(srcS1 + 0x248);
    (*(int32_t*)(uintptr_t)(a1 + 0x3d6c)) = *(srcS1 + 0x24c);
    (*(int32_t*)(uintptr_t)(a1 + 0x3d70)) = *(srcS1 + 0x250);
    (*(int32_t*)(uintptr_t)(a1 + 0x3d74)) = *(srcS1 + 0x254);
    (*(int32_t*)(uintptr_t)(a1 + 0x3d78)) = *(srcS1 + 0x258);
    (*(int32_t*)(uintptr_t)(a1 + 0x3d7c)) = *(srcS1 + 0x25c);
    (*(int32_t*)(uintptr_t)(a1 + 0x3d80)) = *(srcS1 + 0x260);
    (*(int32_t*)(uintptr_t)(a1 + 0x3d84)) = *(srcS1 + 0x264);
    (*(int32_t*)(uintptr_t)(a1 + 0x3d88)) = *(srcS1 + 0x278);
    (*(int32_t*)(uintptr_t)(a1 + 0x3d8c)) = *(srcS1 + 0x27c);
    (*(int32_t*)(uintptr_t)(a1 + 0x3d90)) = *(srcS1 + 0x280) * 4096.0f;
    (*(int32_t*)(uintptr_t)(a1 + 0x3d94)) = *(srcS1 + 0x284) * 4096.0f;
    (*(int32_t*)(uintptr_t)(a1 + 0x3d98)) = *(srcS1 + 0x288);
    (*(int32_t*)(uintptr_t)(a1 + 0x3d9c)) = *(srcS1 + 0x28c);
    (*(int32_t*)(uintptr_t)(a1 + 0x3da0)) = *(srcS1 + 0x290);
    (*(int32_t*)(uintptr_t)(a1 + 0x3da4)) = *(srcS1 + 0x294);
    (*(int32_t*)(uintptr_t)(a1 + 0x3da8)) = *(srcS1 + 0x298);
    (*(int32_t*)(uintptr_t)(a1 + 0x3dac)) = *(srcS1 + 0x29c);
    (*(int32_t*)(uintptr_t)(a1 + 0x3dc0)) = *(srcS1 + 0x270) * 4096.0f;
    (*(int32_t*)(uintptr_t)(a1 + 0x3db8)) = *(srcS1 + 0x26c) * 4096.0f;
    (*(int32_t*)(uintptr_t)(a1 + 0x3dc8)) = *(srcS1 + 0x274);
    (*(int32_t*)(uintptr_t)(ctxB + 0x258)) = *(srcS1 + 0x2a0);
    int16_t result = AI_UpdateOrders_16();

    if ((*(int32_t*)(uintptr_t)(ctxB + 0x1c)) == result)
        (*(int32_t*)(uintptr_t)(ctxB + 0xd04)) = *(srcS1 + 0x2a4);

    return result;
}
