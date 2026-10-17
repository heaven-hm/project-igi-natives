// IGI native provenance: AIFunction_IsEventBehind - 0x0044E860 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0044E860-AIFunction_IsEventBehind.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIFunction_IsEventBehind.h"
int32_t AIFunction_IsEventBehind(int32_t context)

// Sig: int AIFunction_IsEventBehind()
// Note: RETURNS non-zero if the current event came from BEHIND the AI
// (direction test used for reaction animations). Takes no script args per
// retail table (engine reads an internal slot via flagP+8). Use in
// alert/detection handlers.
{
    int32_t* i_1 = **&g_5bda60;
    int32_t* i = *i_1;
    int32_t item_20;

    if (i)
    {
        void* temp_1 = g_5bda58;

        do
        {
            long double fpu_val_4_3 = *(temp_1 + 0x94) * (*(i_1 + 0x20) - *(temp_1 + 0x48))
                + *(temp_1 + 0x7c) * (*(i_1 + 0x10) - *(temp_1 + 0x38));
            long double fpu_val_4_4 = fpu_val_4_3 + *(temp_1 + 0x88) * (*(i_1 + 0x18) - *(temp_1 + 0x40));
            long double f0_1 = 0.0;
            fpu_val_4_4 - f0_1;

            if (*(&((fpu_val_4_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_4, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_4_4 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                item_20 = 1;
                int32_t item_18_1 = 0;
                int32_t item_14_1 = 0x3ff00000;
                char* item_10_1 = &g_567c74;
                memcpy(context, &item_20, 0x18);
                return context;
            }

            i_1 = i;
            i = *i;
        } while (i);
    }

    item_20 = 0;
    int32_t item_18 = 0;
    int32_t item_14 = 0;
    char* item_10 = &g_567c74;
    memcpy(context, &item_20, 0x18);
    return context;
}
