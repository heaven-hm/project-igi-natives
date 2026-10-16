#include "gi_platform.h"
#include "004C6E70-DynObj_UpdateDynTree_8.h"
int32_t DynObj_UpdateDynTree_8(void* a1, void* a2, double* a3, double* a4, double* a5)

{
    int32_t* v_4c = (*(int32_t*)(uintptr_t)(a2 + 0x50));
    int32_t result = Sys_ResolveSymbol_11(a3, a2 + 0x20);

    if (!result)
    {
        int32_t tmpD8 = (*(int32_t*)(uintptr_t)(a2 + 0x20)) + (*(int32_t*)(uintptr_t)(a1 + 0xde0));
        int32_t tmpD10 = (*(int32_t*)(uintptr_t)(a2 + 0x28)) + (*(int32_t*)(uintptr_t)(a1 + 0xde4));
        int32_t tmpD12 = (*(int32_t*)(uintptr_t)(a2 + 0x30)) + (*(int32_t*)(uintptr_t)(a1 + 0xde8));
        int32_t ctxB4 = *a3 + (*(int32_t*)(uintptr_t)(a1 + 0xde0));
        int32_t ctxB6 = a3[1] + (*(int32_t*)(uintptr_t)(a1 + 0xde4));
        void* ctxB8 = a3[2] + (*(int32_t*)(uintptr_t)(a1 + 0xde8));
        int32_t ctxB10 = *a4 + (*(int32_t*)(uintptr_t)(a1 + 0xde0));
        int32_t ctxB12 = a4[1] + (*(int32_t*)(uintptr_t)(a1 + 0xde4));
        int32_t ctxB14 = a4[2] + (*(int32_t*)(uintptr_t)(a1 + 0xde8));
        int32_t ctxB16 = *a5 + (*(int32_t*)(uintptr_t)(a1 + 0xde0));
        int32_t ctxB18 = a5[1] + (*(int32_t*)(uintptr_t)(a1 + 0xde4));
        int32_t ctxB20 = a5[2] + (*(int32_t*)(uintptr_t)(a1 + 0xde8));
        (*(int32_t*)(uintptr_t)(a2 + 0x20)) = *a3;
        (*(int32_t*)(uintptr_t)(a2 + 0x24)) = (*(int32_t*)(uintptr_t)(a3 + 4));
        (*(int32_t*)(uintptr_t)(a2 + 0x28)) = a3[1];
        (*(int32_t*)(uintptr_t)(a2 + 0x2c)) = (*(int32_t*)(uintptr_t)(a3 + 0xc));
        (*(int32_t*)(uintptr_t)(a2 + 0x30)) = a3[2];
        (*(int32_t*)(uintptr_t)(a2 + 0x34)) = (*(int32_t*)(uintptr_t)(a3 + 0x14));
        long double x87_r7_14 = *a5 - *a4;
        long double x87_r6_2 = a5[1] - a4[1];
        long double x87_r5_2 = a5[2] - a4[2];
        int32_t* valA4 = v_4c;
        (*(int32_t*)(uintptr_t)(a2 + 0x44)) =
            sqrtl(x87_r5_2 * x87_r5_2 + x87_r6_2 * x87_r6_2 + x87_r7_14 * x87_r7_14) * 0.5.0f;
        int32_t objC5 = *valA4;
        int32_t result_3 = DynObj_LinkDynamicCube_7(tmpD8, tmpD10, tmpD12, ctxB4, ctxB6, ctxB8);
        result = DynObj_LinkDynamicCube_7(ctxB10, ctxB12, ctxB14, ctxB16 - 1, ctxB18 - 1, ctxB20 - 1);
        int32_t result_2 = result_3;

        if (result > result_2)
        {
            int32_t result_1 = result;
            result_2 = result;
    label_4c70f1: ;
            DynObj_InsertHashItem_8(v_4c, a2);

            if (objC5 < result_2)
                DynObj_FindSymbol_8(a1, result_2, objC5, &v_4c);

            return DynObj_LookupHashItem_8(a1, v_4c, a2, result, ctxB4, ctxB6, ctxB8);
        }

        if (objC5 != result_2 || result_2 != result)
            goto label_4c70f1;
    }

    return result;
}
