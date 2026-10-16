#include "00406F70-AIConfig_NoHumanaiconfigTaskF.h"
/* 0x00406f70 AIConfig_NoHumanaiconfigTaskF full linked: callers=1 callees=6 */
int32_t AIConfig_NoHumanaiconfigTaskF(void* a1)

{
    int32_t esi = g_5690d0;
    void* ebx = *(a1 + 0x14);

    if (!esi)
        return Warning_Show("No HumanAIConfig task found");

    int32_t* eax_1 = Config_GetActivePlayerProfileRecord();

    if (!eax_1)
        return Warning_Show("No active playerprofile found");

    int32_t ecx = *(a1 + 0x3d38);
    int32_t __saved_ebp_1 = *eax_1;
    void* esi_1 = *(esi + (((ecx + 3) * 3 + __saved_ebp_1) << 2));

    if (!esi_1)
    {
        int32_t __saved_ebp = __saved_ebp_1;
        int32_t var_1c_1 = sub_452910(ecx);
        return Warning_Show("No configuration found for AIType: #%d, Difficulty: #%d");
    }

    *(a1 + 0x3d48) = *(esi_1 + 0x230) * 30f;
    *(a1 + 0x3d44) = *(esi_1 + 0x22c) * 30f;
    *(a1 + 0x3d4c) = *(esi_1 + 0x228);
    *(a1 + 0x3d50) = *(esi_1 + 0x268) * 30f;
    *(a1 + 0x3d54) = *(esi_1 + 0x234);
    *(a1 + 0x3d58) = *(esi_1 + 0x238);
    *(a1 + 0x3d5c) = *(esi_1 + 0x23c);
    *(a1 + 0x3d60) = *(esi_1 + 0x240);
    *(a1 + 0x3d64) = *(esi_1 + 0x244);
    *(a1 + 0x3d68) = *(esi_1 + 0x248);
    *(a1 + 0x3d6c) = *(esi_1 + 0x24c);
    *(a1 + 0x3d70) = *(esi_1 + 0x250);
    *(a1 + 0x3d74) = *(esi_1 + 0x254);
    *(a1 + 0x3d78) = *(esi_1 + 0x258);
    *(a1 + 0x3d7c) = *(esi_1 + 0x25c);
    *(a1 + 0x3d80) = *(esi_1 + 0x260);
    *(a1 + 0x3d84) = *(esi_1 + 0x264);
    *(a1 + 0x3d88) = *(esi_1 + 0x278);
    *(a1 + 0x3d8c) = *(esi_1 + 0x27c);
    *(a1 + 0x3d90) = *(esi_1 + 0x280) * 4096f;
    *(a1 + 0x3d94) = *(esi_1 + 0x284) * 4096f;
    *(a1 + 0x3d98) = *(esi_1 + 0x288);
    *(a1 + 0x3d9c) = *(esi_1 + 0x28c);
    *(a1 + 0x3da0) = *(esi_1 + 0x290);
    *(a1 + 0x3da4) = *(esi_1 + 0x294);
    *(a1 + 0x3da8) = *(esi_1 + 0x298);
    *(a1 + 0x3dac) = *(esi_1 + 0x29c);
    *(a1 + 0x3dc0) = *(esi_1 + 0x270) * 4096f;
    *(a1 + 0x3db8) = *(esi_1 + 0x26c) * 4096f;
    *(a1 + 0x3dc8) = *(esi_1 + 0x274);
    *(ebx + 0x258) = *(esi_1 + 0x2a0);
    int16_t result = sub_45d5a0();

    if (*(ebx + 0x1c) == result)
        *(ebx + 0xd04) = *(esi_1 + 0x2a4);

    return result;
}
