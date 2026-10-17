// IGI native provenance: AI_FireWeapon - 0x00450CA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00450CA0-AI_FireWeapon.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_FireWeapon.h"
int32_t AI_FireWeapon()

{
    char result = g_53c923;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_53c923 = result;
    }

    return result;
}
