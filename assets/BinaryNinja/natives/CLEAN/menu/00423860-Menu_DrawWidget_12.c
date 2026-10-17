// IGI native provenance: Menu_DrawWidget_12 - 0x00423860 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00423860-Menu_DrawWidget_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_DrawWidget_12.h"
int32_t Menu_DrawWidget_12(int32_t context, int32_t param_2)

{
    int32_t dest_2 = context << 0x1e | param_2;
    int32_t i;

    for (i = 0; i < 0x7f; i += 1)
    {
        KEY_ANGLE(i, &context, nullptr);

        if (context == dest_2)
            break;
    }

    if (i != 0x7f)
        return i;

    return 0xffffffff;
}
