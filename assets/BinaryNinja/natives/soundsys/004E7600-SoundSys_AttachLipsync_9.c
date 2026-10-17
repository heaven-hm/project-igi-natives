// IGI native provenance: SoundSys_AttachLipsync_9 - 0x004E7600 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7600-SoundSys_AttachLipsync_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_AttachLipsync_9.h"
int32_t** SoundSys_AttachLipsync_9(void* context, int32_t param_2, int32_t param_3)

{
    int32_t** result = Mem_Alloc(0x24, 4);
    int32_t* data_1;

    if (!context)
        data_1 = nullptr;
    else
        data_1 = Sys_DispatchOpcode_20(param_2, param_3, context);

    *result = data_1;
    result[6] = 0;
    result[7] = 0;
    result[2] = 0;
    result[3] = 0;
    result[1] = 0;
    result[4] = param_2;
    result[5] = param_3;
    return result;
}
