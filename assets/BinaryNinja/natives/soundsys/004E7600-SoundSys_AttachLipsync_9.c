// Original IGI.EXE function: SoundSys_AttachLipsync_9 (VA 0x004E7600; static CFG gate PASS, CFG score 1.000).
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
