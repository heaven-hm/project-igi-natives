#include "gi_platform.h"
#include "004CF390-DynObj_LocalModelsSMef.h"
int32_t* DynObj_LocalModelsSMef(int32_t a1)

{
    int32_t* result = Mem_Alloc(0x18, 4);
    int32_t v_20 = a1;
    int32_t* ctxB = nullptr;
    result[1] = 0;
    *result = 0;
    result[4] = 0;
    result[5] = 0;
    int32_t valA;
    void* objC;
    int32_t tmpD;
    valA = Game_DataSymbolLoad(0xa4ec6c, "LOCAL:models/%s.mef");
    int32_t v_30 = 0xa4ec6c;
    int32_t* valA1 = Resource_Load(valA, tmpD, objC, nullptr);
    result[2] = valA1;
    float* valA4 = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(valA1), 0x4d455348), valA1);
    result[3] = valA4;

    if (*valA4 == 0x3dcccccd)
    {
        void* valA5 = result[2];
        *(result[3] + 0x8c) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(valA5), 0x41545441), valA5);
        void* valA9 = result[2];
        *(result[3] + 0x88) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(valA9), 0x4d565458), valA9);
        void* valA13 = result[2];
        *(result[3] + 0x98) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(valA13), 0x504f5254), valA13);
        void* valA17 = result[2];
        *(result[3] + 0x90) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(valA17), 0x50544643), valA17);
        void* valA21 = result[2];
        *(result[3] + 0x94) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(valA21), 0x50545658), valA21);

        if (Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(result[2]), 0x4e415854))
        {
            int32_t* valA29 = Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(result[2]), 0x4e415854);
            int32_t* dstD1 = valA29;
            int32_t i_2 = 1;
            int32_t* valA30;

            for (int32_t* i = Sys_PopStack_19(valA29); i; i = Sys_PopStack_19(valA30))
            {
                valA30 = Sys_ReadFileBlock_20(i, 0x4e415854);

                if (!valA30)
                    break;

                i_2 += 1;
            }

            result[5] = Mem_Alloc(i_2 * 0x14, 4);
            result[4] = i_2;

            if (i_2)
            {
                int32_t i_1;

                do
                {
                    int32_t* valA32 = Sys_CheckHeap_19(dstD1, result[2]);
                    (*(int32_t*)(uintptr_t)(ctxB + result[5] + 0x10)) = &valA32[2];
                    (*(int32_t*)(uintptr_t)(ctxB + result[5] + 8)) = *valA32;
                    (*(int32_t*)(uintptr_t)(ctxB + result[5])) = valA32[1];
                    (*(int32_t*)(uintptr_t)(ctxB + result[5] + 4)) = 0;
                    dstD1 = Sys_PopStack_19(dstD1);

                    if (dstD1)
                        dstD1 = Sys_ReadFileBlock_20(dstD1, 0x4e415854);

                    ctxB = &ctxB[5];
                    i_1 = i_2;
                    i_2 -= 1;
                } while (i_1 != 1);
            }
        }

        int32_t v_8 = result[3];
        int32_t v_4 = result[2];

        if (*((DynObj_InsertHashItem_13() << 2) + &g_a94e84))
            ((int(*)())(uintptr_t)(*((DynObj_InsertHashItem_13() << 2) + &g_a94e84)))(&v_8);

        return result;
    }

    int32_t __saved_ebp_1 = 0x3fb99999;
    int32_t v_1c_1 = 0xa0000000;
    int32_t v_28 = a1;
    int32_t v_2c = a1;
    Error_Show("Mesh "%s" and source code are incompatible. (Mesh "%s" is version %0.2.0f, source code "
    "is version %0.2.0f.)");

    while (true)
        /* nop */
}
