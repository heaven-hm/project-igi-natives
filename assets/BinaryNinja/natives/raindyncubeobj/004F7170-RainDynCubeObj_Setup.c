// Original IGI.EXE function: RainDynCubeObj_Setup (VA 0x004F7170; static CFG gate PASS, CFG score 0.917).
#include "RainDynCubeObj_Setup.h"
int32_t RainDynCubeObj_Setup(long double a1 @ fp1, float a2)

{
    float srcS = a2;
    long double fpu0;
    Script_ExecuteLevelScript_19(fpu0, srcS);
    Script_EvaluateCondition_19(srcS);
    *(srcS + 0x2d0c) += 1;
    int32_t result = g_a76cc4;

    if (!result)
        return result;

    long double f0_1;

    if (*(srcS + 0x2cac))
    {
        Script_SpawnNewTask_7(srcS + 0x2cb8, srcS);
        f0_1 = 0.0;
        a1 - f0_1;
        a2 = 1;
    }

    if (!*(srcS + 0x2cac) || *(&((a1 < f0_1 ? 1 : 0) << 8
            | (FCMP_UO(a1, f0_1) ? 1 : 0) << 0xa | (a1 == f0_1 ? 1 : 0) << 0xe | 0x1000) + 1)
            & 0x40)
        a2 = 0;

    *(&a2 + 1) = *(srcS + 0x2d10);
    return g_a76cc4(&a2);
}
