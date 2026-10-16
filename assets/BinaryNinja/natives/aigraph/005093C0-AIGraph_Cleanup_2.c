#include "AIGraph_Cleanup_2.h"
int32_t AIGraph_Cleanup_2(void* a1, int32_t a2)

{
    if (Script_EvaluateCondition_4(a1) == 0xffffffff)
        Script_LevelqtaskidDAlready(Script_ParseEnumReal32_6(), a1);

    long double fpu7 = *(a1 + 0x80);
    long double f0 = 100.0;
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x41))
        *(a1 + 0x80) = *(a1 + 0x80) * 0.000244140625;

    long double x87_r7_3 = *(a1 + 0x88);
    long double f1 = 100.0;
    x87_r7_3 - f1;

    if (!(*(&((x87_r7_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f1 ? 1 : 0) << 0xe) + 1) & 0x41))
        *(a1 + 0x88) = *(a1 + 0x88) * 0.000244140625;

    int32_t v_8_2 = a2;
    return Graph_Update(a1);
}
