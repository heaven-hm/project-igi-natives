// IGI native provenance: MathSys_Invoke7_4A67E4 - 0x004A67E4 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A67E4-MathSys_Invoke7_4A67E4.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke7_4A67E4.h"

int32_t __convention("regparm") MathSys_Invoke7_4A67E4(char* arg1, int16_t arg2, void* arg3, void* arg4, int32_t arg5)

{
    char* source_ptr;
    char* var_4 = source_ptr;
    *(&arg2 + 1) ^= *arg1;
    char* result_val = var_4;
    *result_val ^= *(&arg2 + 1);
    char* frame_ptr;
    var_4 = frame_ptr;
    char** ebp_1 = &var_4;
    int32_t entry_ebx;
    int32_t var_10 = entry_ebx + 2;
    char* var_14 = source_ptr;
    void* ebx_2 = arg4;

    if (*(arg3 + 4) & 6)
    {
        char** var_20_5 = &var_4;
        Camera_SetFieldOfView_7(ebx_2, 0xffffffff);
        return 1;
    }

    void* var_c = arg3;
    int32_t var_8_1 = arg5;
    *(ebx_2 - 4) = &var_c;
    int32_t i = *(ebx_2 + 0xc);
    int32_t edi_1 = *(ebx_2 + 8);

    for (; i != 0xffffffff; i = *(edi_1 + i * 0xc))
    {
        int32_t ecx_1 = i * 3;

        if (*(edi_1 + (ecx_1 << 2) + 4))
        {
            int32_t eax_3 = (*(edi_1 + (ecx_1 << 2) + 4))(ebp_1, i, &var_4);
            ebx_2 = ebp_1[3];

            if (eax_3)
            {
                if (eax_3 < 0)
                    return 0;

                int32_t edi_2 = *(ebx_2 + 8);
                Camera_UpdateTransform_7(ebx_2);
                ebp_1 = ebx_2 + 0x10;
                Camera_SetFieldOfView_7(ebx_2, i);
                int32_t ecx_2 = i * 3;
                int32_t var_20_4 = 1;
                Camera_ApplyLineFilter_7(*(edi_2 + (ecx_2 << 2) + 8), ebp_1);
                *(ebx_2 + 0xc) = *(edi_2 + (ecx_2 << 2));
                (*(edi_2 + (ecx_2 << 2) + 8))();
            }
        }

        edi_1 = *(ebx_2 + 8);
    }

    return 1;
}
