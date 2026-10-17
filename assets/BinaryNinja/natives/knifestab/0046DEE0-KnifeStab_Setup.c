// IGI native provenance: KnifeStab_Setup - 0x0046DEE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046DEE0-KnifeStab_Setup.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "KnifeStab_Setup.h"

int32_t KnifeStab_Setup(void* pThis)

{
    return QTask_FindType(*(pThis + 0xe8));
}
