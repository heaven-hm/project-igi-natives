// IGI native provenance: Sys_ReadFileBlock_10 - 0x004B29A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B29A0-Sys_ReadFileBlock_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ReadFileBlock_10.h"
int32_t Sys_ReadFileBlock_10(double* context)

{
    int32_t result;
    long double fp0;
    fp0 = Sys_CloseFileStream_10(context);
    long double fpu_val_7_1 = 1.0 / fp0;
    *context = fpu_val_7_1 * *context;
    context[1] = fpu_val_7_1 * context[1];
    return result;
}
