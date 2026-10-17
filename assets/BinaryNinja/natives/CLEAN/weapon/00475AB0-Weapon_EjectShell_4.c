// IGI native provenance: Weapon_EjectShell_4 - 0x00475AB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00475AB0-Weapon_EjectShell_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_EjectShell_4.h"
uint32_t Weapon_EjectShell_4()

{
    int32_t data_val;
    data_val = g_5be394;
    return QTask_CloseEvent_2(data_val);
}
