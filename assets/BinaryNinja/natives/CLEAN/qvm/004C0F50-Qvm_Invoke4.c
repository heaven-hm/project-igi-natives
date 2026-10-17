// IGI native provenance: Qvm_Invoke4 - 0x004C0F50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C0F50-Qvm_Invoke4.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qvm_Invoke4.h"

int32_t Qvm_Invoke4(int32_t* arg1, void* arg2, char arg3)

{
    int32_t* eax_2 = arg1;
    arg1 = arg3;
    *eax_2 = 1;
    return Sys_CloseFileStream_4(*(arg2 + 0x10), &arg1, 1);
}
