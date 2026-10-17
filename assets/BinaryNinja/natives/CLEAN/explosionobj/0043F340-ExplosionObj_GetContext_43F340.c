// IGI native provenance: ExplosionObj_GetContext_43F340 - 0x0043F340 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043F340-ExplosionObj_GetContext_43F340.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ExplosionObj_GetContext_43F340.h"

void* ExplosionObj_GetContext_43F340(void* arg1)

{
    *(arg1 + 0x131) = *(arg1 + 0x130);
    return arg1;
}
