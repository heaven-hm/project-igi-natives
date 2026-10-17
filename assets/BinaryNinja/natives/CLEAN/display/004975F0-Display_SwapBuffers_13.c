// IGI native provenance: Display_SwapBuffers_13 - 0x004975F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004975F0-Display_SwapBuffers_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SwapBuffers_13.h"
int32_t Display_SwapBuffers_13(void* context)

{
    Sys_ExecuteBytecode_2(*(context + 0x48));
    void* entity_val = *(context + 0x44);
    *(context + 0x48) = 0;
    int32_t result = Sys_ExecuteBytecode_2(entity_val);
    *(context + 0x44) = 0;
    return result;
}
