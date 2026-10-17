// IGI native provenance: AI_ActionstackFull - 0x00450DE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00450DE0-AI_ActionstackFull.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_ActionstackFull.h"
void* AI_ActionstackFull(void* context)

{
    int32_t i = 0;
    void* result = context + 0x908;

    do
    {
        if (!*(result + 0x2c))
            return result;

        i += 1;
        result += 0x30;
    } while (i < 0x20);

    Error_Show("ActionStack full");

    while (true)
        /* nop */
}
