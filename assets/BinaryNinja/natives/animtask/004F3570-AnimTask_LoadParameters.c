// IGI native provenance: AnimTask_LoadParameters - 0x004F3570 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F3570-AnimTask_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimTask_LoadParameters.h"
int32_t AnimTask_LoadParameters(void* context, int32_t param_2)

{
    int32_t* dest_val = param_2;
    int32_t source_val = *dest_val;
    int32_t source_1 = source_val + 1;
    int32_t result = Script_GetArg(dest_val[1], source_val);
    int32_t flagP = 0;
    *(context + 0x20150) = result;

    if (result > 0)
    {
        float* context_1 = context + 0xf8;

        do
        {
            float source_2 = source_1 + 1;
            char data_3 = Script_GetArg(dest_val[1], source_1);
            context_1[-1] = data_3;

            if (data_3 != 0x20)
            {
                source_1 = source_2 + 1;
                Profile_ValueSet(dest_val[1], source_2);
            }
            else
            {
                source_1 = source_2 + 1;
                Profile_ValueSet(dest_val[1], source_2);
🚫🚫🚫                int32_t item_8_1 = /* int32_t item_8_1 =
                    (unimplemented  {fistp qword [stack_ptr+0x18], fp0}).d */;
                /* unimplemented  {fistp qword [stack_ptr+0x18], fp0} */
                param_2 = item_8_1;
🚫🚫                /* unimplemented  {fild fp0, dword [stack_ptr+0x20]} */
            }

            flagP += 1;
🚫🚫🚫            *context_1 =
            /* unimplemented  {fstp dword [context_val], fp0} */
            int16_t idx = idx + 1;
            result = *(context + 0x20150);
            context_1 = &context_1[2];
        } while (flagP < result);
    }

    *dest_val = source_1;
    return result;
}
