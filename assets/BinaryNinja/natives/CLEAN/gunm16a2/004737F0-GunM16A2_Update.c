// IGI native provenance: GunM16A2_Update - 0x004737F0 - CFG score 92.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 004737F0-GunM16A2_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GunM16A2_Update.h"
void* GunM16A2_Update(int32_t* context )

{
    void* data_1 = *(context[1] + 0x6e4);

    if (data_1)
    {
        Sys_ExecuteBytecode_2(data_1);
        *(context[1] + 0x6e4) = 0;
    }

    int32_t item_10 = g_5404e0[0];
    void* temp_1 = *context;
    char* item_30_2 = "M203 - Muzzle velocity (km/h)";
    int32_t item_1c = 0x43870000;
    int32_t item_18 = 0x40a00000;
    int32_t item_14 = 0x3f800000;
    int32_t item_c = g_5404e0[4][0];
    char item_8 = g_5404e0[8][0];
    int32_t* flagP = Script_FormatString_31(temp_1, item_30_2);
    void* item_38;

    if (!flagP)
    {
        int32_t data_4 = item_1c;
        char* item_34_1 = "M203 - Muzzle velocity (km/h)";
        item_38 = *context;
        flagP = Script_CallNativeHandler_31(item_38, item_34_1, data_4);
    }

    int32_t* dest_val = Script_FormatString_31(*context, "M203 - Explosion radius (meters)");

    if (!dest_val)
    {
        char* item_34_3 = "M203 - Explosion radius (meters)";
        item_38 = *context;
        dest_val = Script_CallNativeHandler_31(item_38, item_34_3, item_18);
    }

    int32_t* source_val = Script_FormatString_31(*context, "M203 - Activate radius (meters)");

    if (!source_val)
    {
        char* item_34_5 = "M203 - Activate radius (meters)";
        item_38 = *context;
        source_val = Script_CallNativeHandler_31(item_38, item_34_5, item_14);
    }

    struct status_msg* data_12 = Script_FormatString_31(*context, "M203 - Model");

    if (!data_12)
    {
        int32_t* item_30_9 = &item_10;
        char* item_34_7 = "M203 - Model";
        item_38 = *context;
        data_12 = Script_EvaluateCondition_31(item_38, item_34_7, item_30_9);
    }

    int32_t item_30_10 = 4;
    item_1c = flagP[0x49];
    int32_t item_18_1 = dest_val[0x49];
    char* dest_1 = &data_12->sprite[0x70];
    int32_t i = 0xffffffff;
    int32_t item_14_1 = source_val[0x49];

    while (i)
    {
        bool flag_0_1 = 0 != *(ADJ(dest_1) + 0x124);
        dest_1 = &dest_1[1];
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_7 = ~i;
    int32_t item_34_8 = 0x1c;
    int32_t source_2;
    int32_t dest_3;
    dest_3 = memcpy(&item_10, dest_1 - entity_7, entity_7 & 0xfffffffc);
    memcpy(dest_3, source_2, entity_7 & 3);
    void* result = Mem_Alloc(item_34_8, item_30_10);
    *(context[1] + 0x6e4) = result;
    memcpy(*(context[1] + 0x6e4), &item_1c, 0x1c);
    return result;
}
