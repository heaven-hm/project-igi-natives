// IGI native provenance: Script_ParseEnumReal32_21 - 0x004F8EF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F8EF0-Script_ParseEnumReal32_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumReal32_21.h"
int32_t Script_ParseEnumReal32_21(int32_t context)

{
    int32_t result = *(context + 0xd8) * 0x30;
    *(result + 0xba80c8) = *(context + 0x108);
    *(result + 0xba80b0) = 0x3f800000;
    int32_t entity_1 = 0x17 - *(context + 0xb8);
    *(result + 0xba80a4) = entity_1;
    *(result + 0xba80b0) = 1.0f / (1 << (entity_1 & 0x1f)) * *(result + 0xba80b0);
    *(result + 0xba80b4) = 256.0f / *(context + 0xd4) * 0.5f;
    *(result + 0xba80b8) = *(context + 0x20) - (0x40000000 >> (*(context + 0xb8) & 0x1f));
    *(result + 0xba80c0) = *(context + 0x28) - (0x40000000 >> (*(context + 0xb8) & 0x1f));
    return result;
}
