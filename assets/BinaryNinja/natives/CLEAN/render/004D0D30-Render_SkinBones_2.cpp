// IGI native provenance: Render_SkinBones_2 - 0x004D0D30 - CFG score 88.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D0D30-Render_SkinBones_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
