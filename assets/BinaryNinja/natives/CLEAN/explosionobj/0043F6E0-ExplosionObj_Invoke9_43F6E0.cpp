// IGI native provenance: ExplosionObj_Invoke9_43F6E0 - 0x0043F6E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043F6E0-ExplosionObj_Invoke9_43F6E0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ExplosionObj_Invoke9_43F6E0.h"

int32_t ExplosionObj_Invoke9_43F6E0(int32_t* arg1)

{
    void* result_val = *arg1;
    return FX_FireBallUpdate_9(result_val, result_val + 0x4ac);
}
