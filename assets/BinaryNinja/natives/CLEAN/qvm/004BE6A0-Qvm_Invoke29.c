// IGI native provenance: Qvm_Invoke29 - 0x004BE6A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BE6A0-Qvm_Invoke29.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qvm_Invoke29.h"

void* __fastcall Qvm_Invoke29(float arg1)

{
    float var_4 = arg1;
    int32_t arg_4;
    int32_t* source_ptr = arg_4;
    Sys_ExecuteBytecode_29(source_ptr);
    int32_t result_val = Sys_CloseFileStream_28(source_ptr, &arg_4, &var_4);

    if (!result_val)
    {
        void* eax_19 = source_ptr[8];

        if (eax_19)
            return eax_19;

        int32_t ecx_15 = source_ptr[5];
        source_ptr[8] = 6;
        source_ptr[4] = ecx_15;
        return Sys_DispatchOpcode_29(source_ptr);
    }

    int32_t eax_1 = source_ptr[5];

    if (result_val != 1)
    {
        int32_t edx_3 = 0;
        edx_3 = (*source_ptr)[eax_1];

        if (edx_3 - 0x2b > 3)
            source_ptr[8] = 3;
        else
            switch (edx_3)
            {
                case 0x2b:
                {
                    Sys_PopStack_29(source_ptr, var_4);
                    int32_t eax_14 = source_ptr[5] + 1;
                    source_ptr[5] = eax_14;
                    return eax_14;
                    break;
                }
                case 0x2c:
                {
                    int32_t var_c_6 = edx_3 - 0x2b;
                    Sys_PopStack_29(source_ptr, -(var_4));
                    int32_t eax_16 = source_ptr[5] + 1;
                    source_ptr[5] = eax_16;
                    return eax_16;
                    break;
                }
                case 0x2d:
                case 0x2e:
                {
                    source_ptr[8] = 6;
                    break;
                }
            }
    }
    else
    {
        int32_t context_val = 0;
        context_val = (*source_ptr)[eax_1];

        if (context_val - 0x2b <= 3)
            switch (context_val)
            {
                case 0x2b:
                {
                    Sys_PushStack_29(source_ptr, arg_4);
                    int32_t eax_4 = source_ptr[5] + 1;
                    source_ptr[5] = eax_4;
                    return eax_4;
                    break;
                }
                case 0x2c:
                {
                    Sys_PushStack_29(source_ptr, -(arg_4));
                    int32_t eax_6 = source_ptr[5] + 1;
                    source_ptr[5] = eax_6;
                    return eax_6;
                    break;
                }
                case 0x2d:
                {
                    Sys_PushStack_29(source_ptr, ~arg_4);
                    int32_t eax_8 = source_ptr[5] + 1;
                    source_ptr[5] = eax_8;
                    return eax_8;
                    break;
                }
                case 0x2e:
                {
                    int32_t eax_9 = 0;
                    eax_9 = !arg_4;
                    Sys_PushStack_29(source_ptr, eax_9);
                    int32_t eax_11 = source_ptr[5] + 1;
                    source_ptr[5] = eax_11;
                    return eax_11;
                    break;
                }
            }

        source_ptr[8] = 3;
    }

    source_ptr[4] = eax_1;
    Sys_DispatchOpcode_29(source_ptr);
    int32_t eax_18 = source_ptr[5] + 1;
    source_ptr[5] = eax_18;
    return eax_18;
}
