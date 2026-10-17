// IGI native provenance: QTask_ChangeParent - 0x004014E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004014E0-QTask_ChangeParent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_ChangeParent.h"
int32_t QTask_ChangeParent(int16_t context)

{
    int32_t result = 0;

    for (int32_t i = 0; i < 0x10; i += 1)
    {
        char temp_1 = *(i + &g_54ff24);

        if (temp_1 != 0xff)
        {
            uint32_t temp_5 = temp_1 * 0x180 + context;
            temp_5 = *((temp_5 << 2) + &g_a96ae0);
            temp_5 = temp_5;
            result |= temp_5 << (i & 0x1f);
        }
    }

    *(&result + 1) |= 0x80;
    return result;
}
