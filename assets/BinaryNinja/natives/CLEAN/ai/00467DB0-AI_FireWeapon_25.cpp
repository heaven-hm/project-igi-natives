// IGI native provenance: AI_FireWeapon_25 - 0x00467DB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00467DB0-AI_FireWeapon_25.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_FireWeapon_25.h"
int32_t AI_FireWeapon_25()

{
    char result = g_53f583;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0x181);
        g_53f583 = result;
    }

    return result;
}
