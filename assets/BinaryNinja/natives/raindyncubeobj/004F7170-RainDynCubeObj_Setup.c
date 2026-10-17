// IGI native provenance: RainDynCubeObj_Setup - 0x004F7170 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F7170-RainDynCubeObj_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RainDynCubeObj_Setup.h"
int32_t RainDynCubeObj_Setup(long double context , float param_2)

{
    float source_val = param_2;
    long double fpu0;
    Script_ExecuteLevelScript_19(fpu0, source_val);
    Script_EvaluateCondition_19(source_val);
    *(source_val + 0x2d0c) += 1;
    int32_t result = g_a76cc4;

    if (!result)
        return result;

    long double f0_1;

    if (*(source_val + 0x2cac))
    {
        Script_SpawnNewTask_7(source_val + 0x2cb8, source_val);
        f0_1 = 0.0;
        context - f0_1;
        param_2 = 1;
    }

    if (!*(source_val + 0x2cac) || *(&((context < f0_1 ? 1 : 0) << 8
            | (FCMP_UO(context, f0_1) ? 1 : 0) << 0xa | (context == f0_1 ? 1 : 0) << 0xe | 0x1000) + 1)
            & 0x40)
        param_2 = 0;

    *(&param_2 + 1) = *(source_val + 0x2d10);
    return g_a76cc4(&param_2);
}
