// IGI native provenance: Display_RestoreDevice_3 - 0x00491860 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00491860-Display_RestoreDevice_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_RestoreDevice_3.h"
int32_t* Display_RestoreDevice_3()

{
    int32_t* i = &g_c28a44;
    g_bcadec = 0;
    g_bcae00 = 0;
    g_bcadfc = 0;

    do
    {
        *i = 0;
        i = &i[2];
    } while (i < &g_c28b44);

    return i;
}
