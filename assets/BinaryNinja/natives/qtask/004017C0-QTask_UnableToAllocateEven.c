// IGI native provenance: QTask_UnableToAllocateEven - 0x004017C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004017C0-QTask_UnableToAllocateEven.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_UnableToAllocateEven.h"
int32_t QTask_UnableToAllocateEvent(int16_t context)

{
    int32_t result = 0x20;
    char* i = &g_54f9f2;

    do
    {
        if (!*i)
        {
            int32_t entity_1 = result * 6;
            *(entity_1 + &g_54f932) = 1;
            *(entity_1 + 0x54f930) = context;
            *(entity_1 + 0x54f933) = 1;
            return result;
        }

        i = &i[6];
        result += 1;
    } while (i < (g_54ff24 + 2));

    Error_Show("Unable to allocate event");

    while (true)
        /* nop */
}
