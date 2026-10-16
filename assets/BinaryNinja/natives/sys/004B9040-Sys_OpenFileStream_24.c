#include "Sys_OpenFileStream_24.h"
int32_t Sys_OpenFileStream_24(long double a1 @ fp2, char* a2, void* a3)

{
    int32_t valA = *(a3 + 4);
    int32_t valA3;

    if (valA == 1)
    {
        int32_t valA11 = *(a3 + 0xc);

        if (valA11 != 1)
        {
            if (valA11 == 2)
            {
                int32_t valA15 = Sys_ReadFileBlock_24(a2);
                **(a3 + 0x18) = valA15;
                return valA15;
            }

            int32_t valA14 = Sys_ReadFileBlock_24(a2);
            **(a3 + 0x18) = valA14;
            return valA14;
        }

        valA3 = Sys_ReadFileBlock_24(a2);
        **(a3 + 0x18) = valA3;
    }
    else
    {
        if (valA == 2)
        {
            long double fpu0;
            long double fpu1;
            int32_t valA10 = Sys_DispatchOpcode_24(fpu0, fpu1, a2);
            **(a3 + 0x18) = a1;
            return valA10;
        }

        valA3 = valA - 3;

        if (valA == 3)
        {
            int32_t valA5 = *(a3 + 0xc) - 1;
            void v_800;
            char* valA6 = Sys_SyntaxErrorInStringE(a2, &v_800, 0x800);
            char* valA8 = Camera_ApplyLineFilter_5(*(a3 + 0x18), valA6, valA5);
            *(*(a3 + 0x18) + *(a3 + 0xc) - 1) = 0;
            return valA8;
        }
    }

    return valA3;
}
