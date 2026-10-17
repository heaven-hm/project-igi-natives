// IGI native provenance: Display_OpenDevice_12 - 0x00496DB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00496DB0-Display_OpenDevice_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_OpenDevice_12.h"
long double Display_OpenDevice_12(int32_t context, int32_t param_2)

{
    if (!g_6840e9)
        return 0.0f;

    int32_t* data_1 = Display_RestoreDevice_10(context, param_2);

    if (!data_1)
        return 0.0f;

    int32_t item_4 = 0;
    return data_1[8] / data_1[7];
}
