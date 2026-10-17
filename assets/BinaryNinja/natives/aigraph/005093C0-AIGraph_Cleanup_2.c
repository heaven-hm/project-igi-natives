// Original IGI.EXE function: AIGraph_Cleanup_2 (VA 0x005093C0; static CFG gate PASS, CFG score 1.000).
#include "AIGraph_Cleanup_2.h"
int32_t AIGraph_Cleanup_2(void* context, int32_t param_2)

{
    if (Script_EvaluateCondition_4(context) == 0xffffffff)
        Script_LevelqtaskidDAlready(Script_ParseEnumReal32_6(), context);

    long double fpu7 = *(context + 0x80);
    long double f0 = 100.0;
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x41))
        *(context + 0x80) = *(context + 0x80) * 0.000244140625;

    long double fpu_val_7_3 = *(context + 0x88);
    long double f1 = 100.0;
    fpu_val_7_3 - f1;

    if (!(*(&((fpu_val_7_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f1) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f1 ? 1 : 0) << 0xe) + 1) & 0x41))
        *(context + 0x88) = *(context + 0x88) * 0.000244140625;

    int32_t item_8_2 = param_2;
    return Graph_Update(context);
}
