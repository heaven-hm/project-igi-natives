// Original IGI.EXE function: Render_SkinBones_2 (VA 0x004D0D30; static CFG gate PASS, CFG score 0.883).
#include "Render_SkinBones_2.h"
void* Render_SkinBones_2(int32_t* a1)

{
    int32_t ctxB = QHash_ValueGet();

    if (!ctxB)
        QHash_ValueSet();

    int32_t* srcS = a1;
    int32_t i_1 = 5;
    void* result;
    int32_t i;

    do
    {
        result = *srcS;

        if (result)
        {
            result = Sys_ExecuteBytecode_2(result);
            *srcS = 0;
        }

        srcS = &srcS[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);

    if (ctxB)
        return result;

    /* tailcall */
    return Sys_DispatchOpcode_2();
}
