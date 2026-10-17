// IGI native provenance: InputPort_Action - 0x004ED5E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004ED5E0-InputPort_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "InputPort_Action.h"
int32_t InputPort_Action(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7, int32_t param_8 , int32_t param_9, int32_t param_10, int32_t param_11, int32_t param_12, int32_t param_13, int32_t param_14, int32_t param_15)

{
    int32_t data_1 = context * 0xb0;
    *(data_1 + 0xbc20a4) = param_2;
    *(data_1 + 0xbc20a8) = param_3;
    *(data_1 + 0xbc20ac) = param_4;
    *(data_1 + 0xbc20b0) = 0;
    *(data_1 + 0xbc20b4) = 0;
    *(data_1 + 0xbc20b8) = 0;
    *(data_1 + 0xbc20c0) = param_5;
    *(data_1 + 0xbc20c4) = param_5;
    *(data_1 + 0xbc20c8) = param_10;
    *(data_1 + 0xbc20cc) = param_13;
    *(data_1 + 0xbc20d0) = param_6;
    *(data_1 + 0xbc20d4) = param_8;
    *(data_1 + 0xbc20d8) = param_11;
    *(data_1 + 0xbc20dc) = param_14;
    *(data_1 + 0xbc20e0) = param_7;
    *(data_1 + 0xbc20e4) = param_9;
    *(data_1 + 0xbc20e8) = param_12;
    *(data_1 + 0xbc20ec) = param_15;
    Physics_ApplyImpulse_6(data_1 + &g_bc20f0, SoundSys_StopSoundSample_17);
    return 0;
}
