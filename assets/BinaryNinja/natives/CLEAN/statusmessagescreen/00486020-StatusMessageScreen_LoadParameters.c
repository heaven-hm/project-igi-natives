// IGI native provenance: StatusMessageScreen_LoadParameters - 0x00486020 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00486020-StatusMessageScreen_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "StatusMessageScreen_LoadParameters.h"
int32_t StatusMessageScreen_LoadParameters(void* context)

{
    Level_LoadLevel_6();
    Level_LoadLevel_6();
    int32_t result = Display_GetActiveMode();
    int32_t i = 0;
    long double fpu_val_7_1 = g_c28b44 * 0.015625f;
    char* context_val = context + 0x40;
    long double fpu_val_7_2 = g_c28b48;
    float item_10_1 = fpu_val_7_2 * 0.020833334f;

    do
    {
        if (*context_val)
        {
            void* data_1;
            int32_t entity_1;
            data_1 = FX_FragmentSimulate_6(context, i);
            entity_1 = *(data_1 + 0x1c6);

            if (!entity_1)
                result = FX_TrailUpdate_6(context, i, fpu_val_7_1, item_10_1);
            else
            {
                int32_t item_24_2 = entity_1;
                result = FX_FireBallUpdate_7(context, i, fpu_val_7_1, fpu_val_7_2 * 0.864583313f);
            }

            item_10_1 = item_10_1 + 42.0;
        }

        i += 1;
        context_val = &context_val[0x102c];
    } while (i < 0x18);

    return result;
}
