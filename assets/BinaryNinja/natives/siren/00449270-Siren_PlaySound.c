// IGI native provenance: Siren_PlaySound - 0x00449270 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00449270-Siren_PlaySound.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Siren_PlaySound.h"

int32_t Siren_PlaySound(void* pThis, int32_t* param)

{
    *param = pThis + 0x20;
    param[1] = pThis + 0x70;
    int32_t result = *(pThis + 0x178);
    param[2] = result;
    return result;
}
