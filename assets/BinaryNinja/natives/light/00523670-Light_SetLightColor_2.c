// IGI native provenance: Light_SetLightColor_2 - 0x00523670 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00523670-Light_SetLightColor_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_SetLightColor_2.h"
int32_t Light_SetLightColor_2(int32_t* context)

{
    int32_t i = 0;

    if (*context > 0)
    {
        int32_t* source_1 = &context[1];

        do
        {
            void* data_1 = *source_1;

            if (data_1)
            {
                Sys_ExecuteBytecode_2(data_1);
                *source_1 = 0;
                Sys_ExecuteBytecode_2(source_1[1]);
                source_1[1] = 0;
            }

            i += 1;
            source_1 = &source_1[3];
        } while (i < *context);
    }

    return Sys_ExecuteBytecode_2(context);
}
