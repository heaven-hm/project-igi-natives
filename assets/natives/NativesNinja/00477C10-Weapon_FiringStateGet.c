#include "00477C10-Weapon_FiringStateGet.h"
/* 0x00477c10 Weapon_FiringStateGet full linked: callers=3 callees=0 */
int32_t Weapon_FiringStateGet()

// Sig: uint8_t Weapon_FiringStateGet(void)
// Note: Returns the byte at the retail weapon firing-state configuration global
// 0x005407B9. Ghidra/r2 CFG agreement: 1 basic block and 0 edges; see
// assets/IGI1-Native-Name-Evidence.json.
{
    int32_t result;
    result = g_5407b9;
    return result;
}
