// IGI native provenance: QTask_Update - 0x004011B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004011B0-QTask_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_Update.h"
int32_t* QTask_Update()

{
    int32_t* i;

    for (i = &g_af5ee0; i < &g_afa6e0; i = &i[0xc])
    {
        *(i + 0x25) = 0;
        *i = 0;
    }

    return i;
}
