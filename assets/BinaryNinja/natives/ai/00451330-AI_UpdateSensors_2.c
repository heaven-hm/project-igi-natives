// IGI native provenance: AI_UpdateSensors_2 - 0x00451330 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00451330-AI_UpdateSensors_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdateSensors_2.h"
void* AI_UpdateSensors_2(void* context)

{
    return AI_FireWeapon_19(*(context + 0x14));
}
