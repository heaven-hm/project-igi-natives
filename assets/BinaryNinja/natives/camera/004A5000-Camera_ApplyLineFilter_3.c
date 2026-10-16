#include "Camera_ApplyLineFilter_3.h"
int32_t Camera_ApplyLineFilter_3(int32_t a1 @ flagP, int32_t a2 @ srcS, int32_t a3 @ dstD, int32_t* a4, int32_t a5, struct _EXCEPTION_REGISTRATION_RECORD* a6, int32_t a7)

{
    *a4 = a1;
    int32_t entry_ebx;
    a4[1] = entry_ebx;
    a4[2] = a3;
    a4[3] = a2;
    a4[4] = &__return_addr;
    a4[5] = __return_addr;
    __builtin_strncpy(&a4[8], "02CV", 8);
    TEB* fsbase;
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList;
    a4[6] = ExceptionList;

    if (ExceptionList == 0xffffffff)
        a4[7] = 0xffffffff;
    else if (!a5)
        a4[7] = *(ExceptionList + 0xc);
    else
    {
        a4[9] = a6;

        if (a5 != 1)
        {
            a4[7] = a7;
            int32_t objC4 = a5 - 2;

            if (a5 != 2)
            {
                int32_t v_4_1 = a2;
                int32_t v_8_1 = a3;

                if (objC4 > 6)
                    objC4 = 6;

                void arg_14;
                memcpy(&a4[0xa], &arg_14, objC4 << 2);
            }
        }
        else
            a4[7] = *(a6 + 0xc);
    }

    return 0;
}
