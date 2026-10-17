// IGI native provenance: Sys_CloseFileStream_18 - 0x004B6F50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B6F50-Sys_CloseFileStream_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CloseFileStream_18.h"
int32_t Sys_CloseFileStream_18(int32_t* context)

{
    int32_t result = Sys_OpenFileStream_21(*context, context[1], context[2], context[5], context[6], context[7], context[4],
        context[3], context[9] | 0x40000000, context[8]);
    return result;
}
