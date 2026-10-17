// IGI native provenance: MathSys_Invoke3 - 0x004AD004 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AD004-MathSys_Invoke3.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MathSys_Invoke3.h"

int32_t __convention("regparm") MathSys_Invoke3(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, void* arg5, void* arg6, int32_t arg7)

{
    *(arg6 + (arg3 << 2) + 0x1c) = *(arg5 + (arg3 << 2) + 0x1c);
    *(arg6 + (arg3 << 2) + 0x18) = *(arg5 + (arg3 << 2) + 0x18);
    *(arg6 + (arg3 << 2) + 0x14) = *(arg5 + (arg3 << 2) + 0x14);
    *(arg6 + (arg3 << 2) + 0x10) = *(arg5 + (arg3 << 2) + 0x10);
    *(arg6 + (arg3 << 2) + 0xc) = *(arg5 + (arg3 << 2) + 0xc);
    *(arg6 + (arg3 << 2) + 8) = *(arg5 + (arg3 << 2) + 8);
    *(arg6 + (arg3 << 2) + 4) = *(arg5 + (arg3 << 2) + 4);
    int32_t eax_6 = arg3 << 2;
    void* source_ptr = arg5 + eax_6;
    void* dest_ptr = arg6 + eax_6;

    switch (arg2)
    {
        case 0:
        {
            *arg4;
            return arg4[2];
            break;
        }
        case 1:
        {
            *(dest_ptr + 3) = *(source_ptr + 3);
            *arg4;
            return arg4[2];
            break;
        }
        case 2:
        {
            *(dest_ptr + 3) = *(source_ptr + 3);
            *(dest_ptr + 2) = *(source_ptr + 2);
            *arg4;
            return arg4[2];
            break;
        }
        case 3:
        {
            *(dest_ptr + 3) = *(source_ptr + 3);
            *(dest_ptr + 2) = *(source_ptr + 2);
            *(dest_ptr + 1) = *(source_ptr + 1);
            *arg4;
            return arg4[2];
            break;
        }
    }
}
