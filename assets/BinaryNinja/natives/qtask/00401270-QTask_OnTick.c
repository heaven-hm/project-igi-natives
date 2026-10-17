// IGI native provenance: QTask_OnTick - 0x00401270 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401270-QTask_OnTick.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_OnTick.h"
void QTask_OnTick()

{
    char* i = &g_54f932;

    do
    {
        if (*i)
            Warning_Show("QTask event not deallocated");

        i = &i[6];
    } while (i < (g_54ff24 + 2));
}
