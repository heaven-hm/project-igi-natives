// IGI native provenance: QTask_OnEvent - 0x004011D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004011D0-QTask_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_OnEvent.h"
char* QTask_OnEvent()

{
    char* i = &g_54f932;

    do
    {
        *i = 0;
        i = &i[6];
    } while (i < (g_54ff24 + 2));

    return i;
}
