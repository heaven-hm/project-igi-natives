// Original IGI.EXE function: Render_SkinBones_2 (VA 0x004D0D30; static CFG gate PASS, CFG score 0.883).
#include "Render_SkinBones_2.h"
void* Render_SkinBones_2(int32_t* context)

{
    int32_t context_val = QHash_ValueGet();

    if (!context_val)
        QHash_ValueSet();

    int32_t* source_val = context;
    int32_t i_1 = 5;
    void* result;
    int32_t i;

    do
    {
        result = *source_val;

        if (result)
        {
            result = Sys_ExecuteBytecode_2(result);
            *source_val = 0;
        }

        source_val = &source_val[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);

    if (context_val)
        return result;

    /* tailcall */
    return Sys_DispatchOpcode_2();
}
