// IGI native provenance: WeaponType_GetConfig_2 - 0x00414FD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00414FD0-WeaponType_GetConfig_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponType_GetConfig_2.h"
int32_t WeaponType_GetConfig_2(void* context)

{
    if (*(context + 0xc28c62) & 0x80 && g_c28c7f & 0x80 && g_c28c8c & 0x80
            && Config_GetActivePlayerProfileRecord()
            && *(Config_GetActivePlayerProfileRecord() + 0x560) >= 0xe && g_57b194)
        return 1;

    return 0;
}
