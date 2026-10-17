// IGI native provenance: Weapon_ComputeAccuracy - 0x004703F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004703F0-Weapon_ComputeAccuracy.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_ComputeAccuracy.h"
uint32_t Weapon_ComputeAccuracy()

{
    int32_t data_val;
    data_val = g_53fec0;
    return QTask_CloseEvent_2(data_val);
}
