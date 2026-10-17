// Original IGI.EXE function: DefineAnimTrigger (VA 0x004EBEB0; static CFG gate PASS, CFG score 1.000).
#include "DefineAnimTrigger.h"
int32_t DefineAnimTrigger(int32_t context, float param_2 )

// Sig: unknown DefineAnimTrigger(unknown param1, unknown param2)
// Note: Registered at 0x4EBEA2 via registrar 0x4B8890 (push 0x4EBEB0 +
// 'DefineAnimTrigger'), argc bounds (0, -1). Config parser; corroborates
// cataloged AnimTrigger_ParseConfigFile family.  Verified: r2 forced-analysis
// confirmed exact start (size 264); P3 byte-level name<->address binding at
// registrar callsite 0x4EBEA2 via 0x4B8890; P6 SHA-256(first 32 code
// bytes)=8d8596b3b0925dc5ff62e61171fc68c6e9c092c1c519e972629a790081ddd636;
// re-agent reverser/checker loop ran on this native (C decompilation pending
// ARM64 native port).
{
    float dest_val = param_2;
    int32_t data_val = Script_GetArg(dest_val, 0);
    int32_t entity_val = g_a5ef84;
    int32_t item_2c = 1;
    float item_30 = dest_val;
    int32_t source_1 = entity_val * 0xc;
    *(entity_val * 0xc + &g_a5ec80) = data_val;
    *(source_1 + 0xa5ec84) = Script_GetArg(item_30, item_2c);
    int32_t data_2 = 0;
    data_2 = g_54db81;
    int32_t entity_1 = 0;
    *(source_1 + &g_a5ec88) = 0;
    entity_1 = *(source_1 + 0xa5ec84);
    int32_t data_6 = *(((data_2 * 0x180 + entity_1) << 2) + &g_a96ae0);
    void* item_18;

    if (data_6)
    {
        data_6(0, &param_2);
        int32_t item_2c_1 = 4;
        item_30 = param_2;
        void* data_8 = Mem_Alloc(item_30, item_2c_1);
        int32_t entity_2 = g_a5ef84;
        item_18 = data_8;
        int32_t temp_1 = 0;
        float item_14_1 = dest_val;
        int32_t item_10_1 = 2;
        int32_t entity_4 = entity_2 * 0xc;
        *(entity_4 + &g_a5ec88) = data_8;
        temp_1 = *(entity_4 + 0xa5ec84);
        int32_t data_9 = 0;
        data_9 = g_54db82;
        (*(((temp_1 + data_9 * 0x180) << 2) + &g_a96ae0))(0, &item_18, item_30);
    }

    g_a5ef84 += 1;
    item_18 = 1;
    int32_t item_10_2 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
