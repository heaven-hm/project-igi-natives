// IGI native provenance: FX_FragmentSimulate_16 - 0x0048A620 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048A620-FX_FragmentSimulate_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_FragmentSimulate_16.h"
int32_t FX_FragmentSimulate_16(int32_t* context, int32_t param_2)

{
    int32_t entity_1 = context[1] + param_2;
    context[1] = entity_1;
    int32_t f0 = context[4] * entity_1 / *context;
    int32_t i = 0;

    if (context[5] > 0)
    {
        do
        {
            int32_t entity_5;
            int32_t dest_2;

            if (f0 > 0)
                dest_2 = __memfill_u32(context[6] + ((context[4] * i) << 2), 0xff00, f0);
            i += 1;
        } while (i < context[5]);
    }

    void item_28;
    memset(&item_28, 0, 0x28);
    int32_t item_24 = Display_CreateSurface_4();
    int32_t data_9 = context[4];
    int32_t item_8 = context[6];
    int32_t item_10 = data_9;
    int32_t item_18 = context[2];
    int32_t item_1c = data_9 << 2;
    int32_t item_14 = context[3];
    int32_t item_c = context[5];
    int32_t item_4 = 1;
    return Display_RestoreDevice_4(&item_28);
}
