// Original IGI.EXE function: AIConfig_NoHumanaiconfigTaskF (VA 0x00406F70; static CFG gate PASS, CFG score 1.000).
#include "AIConfig_NoHumanaiconfigTaskF.h"
int32_t AIConfig_NoHumanaiconfigTaskF(void* a1)

{
    int32_t srcS = g_5690d0;
    void* ctxB = *(a1 + 0x14);

    if (!srcS)
        return Warning_Show("No HumanAIConfig task found");

    int32_t* valA1 = Config_GetActivePlayerProfileRecord();

    if (!valA1)
        return Warning_Show("No active playerprofile found");

    int32_t objC = *(a1 + 0x3d38);
    int32_t __saved_ebp_1 = *valA1;
    void* srcS1 = *(srcS + (((objC + 3) * 3 + __saved_ebp_1) << 2));

    if (!srcS1)
    {
        int32_t saved_frame = __saved_ebp_1;
        int32_t v_1c_1 = AI_UpdatePatrol_4(objC);
        return Warning_Show("No configuration found for AIType: #%d, Difficulty: #%d");
    }

    *(a1 + 0x3d48) = *(srcS1 + 0x230) * 30f;
    *(a1 + 0x3d44) = *(srcS1 + 0x22c) * 30f;
    *(a1 + 0x3d4c) = *(srcS1 + 0x228);
    *(a1 + 0x3d50) = *(srcS1 + 0x268) * 30f;
    *(a1 + 0x3d54) = *(srcS1 + 0x234);
    *(a1 + 0x3d58) = *(srcS1 + 0x238);
    *(a1 + 0x3d5c) = *(srcS1 + 0x23c);
    *(a1 + 0x3d60) = *(srcS1 + 0x240);
    *(a1 + 0x3d64) = *(srcS1 + 0x244);
    *(a1 + 0x3d68) = *(srcS1 + 0x248);
    *(a1 + 0x3d6c) = *(srcS1 + 0x24c);
    *(a1 + 0x3d70) = *(srcS1 + 0x250);
    *(a1 + 0x3d74) = *(srcS1 + 0x254);
    *(a1 + 0x3d78) = *(srcS1 + 0x258);
    *(a1 + 0x3d7c) = *(srcS1 + 0x25c);
    *(a1 + 0x3d80) = *(srcS1 + 0x260);
    *(a1 + 0x3d84) = *(srcS1 + 0x264);
    *(a1 + 0x3d88) = *(srcS1 + 0x278);
    *(a1 + 0x3d8c) = *(srcS1 + 0x27c);
    *(a1 + 0x3d90) = *(srcS1 + 0x280) * 4096f;
    *(a1 + 0x3d94) = *(srcS1 + 0x284) * 4096f;
    *(a1 + 0x3d98) = *(srcS1 + 0x288);
    *(a1 + 0x3d9c) = *(srcS1 + 0x28c);
    *(a1 + 0x3da0) = *(srcS1 + 0x290);
    *(a1 + 0x3da4) = *(srcS1 + 0x294);
    *(a1 + 0x3da8) = *(srcS1 + 0x298);
    *(a1 + 0x3dac) = *(srcS1 + 0x29c);
    *(a1 + 0x3dc0) = *(srcS1 + 0x270) * 4096f;
    *(a1 + 0x3db8) = *(srcS1 + 0x26c) * 4096f;
    *(a1 + 0x3dc8) = *(srcS1 + 0x274);
    *(ctxB + 0x258) = *(srcS1 + 0x2a0);
    int16_t result = AI_UpdateOrders_16();

    if (*(ctxB + 0x1c) == result)
        *(ctxB + 0xd04) = *(srcS1 + 0x2a4);

    return result;
}
