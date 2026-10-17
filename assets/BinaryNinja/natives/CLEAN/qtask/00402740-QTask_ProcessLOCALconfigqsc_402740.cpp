// IGI native provenance: QTask_ProcessLOCALconfigqsc_402740 - 0x00402740 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00402740-QTask_ProcessLOCALconfigqsc_402740.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_ProcessLOCALconfigqsc_402740.h"

int32_t QTask_ProcessLOCALconfigqsc_402740()

{
    FX_TrailUpdate_23(0, 0);
    SoundSys_PlaySoundSample_19(Config_Write("LOCAL:config.qsc"));
    struct frames_ctx* frames_ctx_1 = g_frames_ctx;
    int32_t* ecx_1;
    ecx_1 = frames_ctx_1->pad_45[3];
    *(&ecx_1 + 1) = frames_ctx_1->pad_45[4];
    *(&ecx_1 + 2) = frames_ctx_1->pad_45[5];
    *(&ecx_1 + 3) = frames_ctx_1->pad_45[6];
    int32_t result = QTask_FindType(ecx_1);
    __builtin_memset(&g_frames_ctx, 0, 4);
    return result;
}
