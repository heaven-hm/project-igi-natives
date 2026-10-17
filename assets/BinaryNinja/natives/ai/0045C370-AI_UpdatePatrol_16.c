// IGI native provenance: AI_UpdatePatrol_16 - 0x0045C370 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045C370-AI_UpdatePatrol_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdatePatrol_16.h"
int32_t AI_UpdatePatrol_16(void* context, void* param_2)

{
    int32_t entity_val = *(context + 8);

    if (!(entity_val & 4))
    {
        void* entity_1 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x1d;
        int32_t data_1 = *(entity_1 + 0x74);
        *(context + 0x14) = data_1;
        return data_1(context, param_2);
    }

    if (entity_val & 0x20000)
    {
        void* entity_2 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x22;
        int32_t data_4 = *(entity_2 + 0x88);
        *(context + 0x14) = data_4;
        return data_4(context, param_2);
    }

    int32_t result = *(param_2 + 0xd14);

    if (result <= 0x13)
    {
        result += 1;
        *(param_2 + 0xd14) = result;
    }
    else if (entity_val & 0x10000)
    {
        void* entity_3 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x1f;
        int32_t data_7 = *(entity_3 + 0x7c);
        *(context + 0x14) = data_7;
        return data_7(context, param_2);
    }

    if (!(entity_val & 1))
        return result;

    FX_DebrisSpawn_15(param_2);
    void* data_9 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 0x1a;
    int32_t data_10 = *(data_9 + 0x68);
    *(context + 0x14) = data_10;
    return data_10(context, param_2);
}
