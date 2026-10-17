// Original IGI.EXE function: Camera_SetFieldOfView_7 (VA 0x004A5D42; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_7.h"
void* Camera_SetFieldOfView_7(void* a1, int32_t a2)

{
    void* v_10 = a1;
    int32_t v_14 = 0xfffffffe;
    int32_t (* v_18)(int32_t a1, int32_t a2, int32_t* a3 @ 0x10) = sub_4a5d20;
    TEB* fsbase;
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList;
    fsbase->NtTib.ExceptionList = &ExceptionList;

    while (true)
    {
        int32_t ctxB1 = *(a1 + 8);
        int32_t srcS1 = *(a1 + 0xc);

        if (srcS1 == 0xffffffff || srcS1 == a2)
        {
            fsbase->NtTib.ExceptionList = ExceptionList;
            return a1;
        }

        int32_t srcS2 = srcS1 * 3;
        int32_t objC1 = *(ctxB1 + (srcS2 << 2));
        int32_t v_14_1 = objC1;
        *(a1 + 0xc) = objC1;

        if (!*(ctxB1 + (srcS2 << 2) + 4))
        {
            int32_t v_20_1 = 0x101;
            void* flagP;
            Camera_ApplyLineFilter_7(*(ctxB1 + (srcS2 << 2) + 8), flagP);
            (*(ctxB1 + (srcS2 << 2) + 8))();
        }
    }
}
