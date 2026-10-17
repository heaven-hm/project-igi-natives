// IGI native provenance: ExplosionObj_Invoke10 - 0x004389A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004389A0-ExplosionObj_Invoke10.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ExplosionObj_Invoke10.h"

int32_t ExplosionObj_Invoke10(void* arg1, int32_t arg2)

{
    int32_t result = (*((Env_InitLadder_10() << 2) + &g_a96ae0))(arg1, arg2);
    *(arg1 + 0x2a8) = 0x3f400000;
    *(arg1 + 0x2ac) = 0xffffffff;
    return result;
}
