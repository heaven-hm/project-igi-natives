#include "gi_platform.h"
#include "004C6940-WorldObject_CommitTransform.h"
int32_t WorldObject_CommitTransform(void* a1, void* a2, double* a3, float a4)

{
    int32_t* v_2c = (*(int32_t*)(uintptr_t)(a2 + 0x50));
    int32_t result = Sys_ResolveSymbol_11(a3, a2 + 0x20);

    if (!result)
    {
    label_4c697e: ;
        int32_t v_1c_1 = a4;
        int32_t tmpD2 = (*(int32_t*)(uintptr_t)(a1 + 0xde0));
        int32_t objC2 = *a3 + tmpD2;
        int32_t v_28_1 = tmpD2;
        int32_t tmpD3 = (*(int32_t*)(uintptr_t)(a1 + 0xde4));
        int32_t valA4 = (*(int32_t*)(uintptr_t)(a1 + 0xde8));
        int32_t objC4 = a3[1] + tmpD3;
        void* objC6 = a3[2] + valA4;
        int32_t valA6 = (*(int32_t*)(uintptr_t)(a2 + 0x20)) + v_28_1;
        int32_t objC8 = (*(int32_t*)(uintptr_t)(a2 + 0x28)) + tmpD3;
        v_28_1 = (*(int32_t*)(uintptr_t)(a2 + 0x30));
        (*(int32_t*)(uintptr_t)(a2 + 0x20)) = *a3;
        (*(int32_t*)(uintptr_t)(a2 + 0x24)) = (*(int32_t*)(uintptr_t)(a3 + 4));
        (*(int32_t*)(uintptr_t)(a2 + 0x28)) = a3[1];
        (*(int32_t*)(uintptr_t)(a2 + 0x2c)) = (*(int32_t*)(uintptr_t)(a3 + 0xc));
        (*(int32_t*)(uintptr_t)(a2 + 0x30)) = a3[2];
        (*(int32_t*)(uintptr_t)(a2 + 0x34)) = (*(int32_t*)(uintptr_t)(a3 + 0x14));
        (*(int32_t*)(uintptr_t)(a2 + 0x44)) = a4;
        int32_t tmpD13 = *v_2c;
        int32_t result_1 = DynObj_LinkDynamicCube_7(valA6, objC8, v_28_1 + valA4, objC2, objC4, objC6);
        result = DynObj_LinkDynamicCube_7(objC2 - v_1c_1, objC4 - v_1c_1, objC6 - v_1c_1, objC2 + v_1c_1,
            objC4 + v_1c_1, objC6 + v_1c_1);

        if (result > result_1)
        {
            result_1 = result;
    label_4c6aac: ;
            DynObj_InsertHashItem_8(v_2c, a2);

            if (tmpD13 >= result_1)
            {
                int32_t* tmpD23 = v_2c;
                int32_t objC14 = 0x8000;
                void* i = tmpD23[0xb];

                while (i)
                {
                    result_1 = *(i + 0x5c);
                    i = *(i + 0x58);
                    objC14 |= result_1;
                }

                tmpD23[0xe] = objC14;
            }
            else
                DynObj_FindSymbol_8(a1, result_1, tmpD13, &v_2c);

            return DynObj_LookupHashItem_8(a1, v_2c, a2, result, objC2, objC4, objC6);
        }

        if (tmpD13 != result_1 || result_1 != result)
            goto label_4c6aac;
    }
    else
    {
        long double x87_r7_1 = a4;
        long double f0_1 = (*(int32_t*)(uintptr_t)(a2 + 0x44));
        x87_r7_1 - f0_1;
        result = (x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_4c697e;
    }

    return result;
}
