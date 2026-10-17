// IGI native provenance: ExplosionObj_Invoke8_43B170 - 0x0043B170 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043B170-ExplosionObj_Invoke8_43B170.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ExplosionObj_Invoke8_43B170.h"

int32_t ExplosionObj_Invoke8_43B170(void* arg1, int32_t arg2)

{
    (*(((Script_ParseEnumReal32_8() * 0x180 + FX_TrailUpdate()) << 2) + &g_a96ae0))(arg1, arg2);
    *(arg1 + 0x240) = 0;
    *(arg1 + 0x23c) = 0;
    Script_Isexists(arg1 + 0x244, arg1);
    return 0;
}
