#include "gi_platform.h"
#include "0049FB10-Display_ClearSurfaces_20.h"
int32_t* Display_ClearSurfaces_20(int32_t* a1)

{
    int32_t* srcS = a1;
    int32_t valA1 = (*(int32_t*)(uintptr_t)(*srcS + 0x20));

    if (!valA1)
    {
        void* valA35 = srcS[1];
        (*(int32_t*)(uintptr_t)(*srcS + 0x24)) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(valA35), 0x52443344), valA35);
        void* valA39 = srcS[1];
        void* dstD2 = (*(int32_t*)(uintptr_t)(*srcS + 0x24));
        *(dstD2 + 0x10) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(valA39), 0x56525458), valA39);
        void* valA43 = srcS[1];
        *(dstD2 + 0x14) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(valA43), 0x52454e44), valA43);
        Display_OpenDevice_19(nullptr, *srcS, *(dstD2 + 0xc));
    }
    else if (valA1 == 1)
    {
        void* valA22 = srcS[1];
        (*(int32_t*)(uintptr_t)(*srcS + 0x24)) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(valA22), 0x52443344), valA22);
        void* dstD1 = (*(int32_t*)(uintptr_t)(*srcS + 0x24));
        void* valA27 = srcS[1];
        *(dstD1 + 0x18) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(valA27), 0x56525458), valA27);
        void* valA31 = srcS[1];
        *(dstD1 + 0x1c) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(valA31), 0x52454e44), valA31);
    }
    else
    {
        void* dstD;

        if (valA1 == 3)
        {
            void* valA5 = srcS[1];
            (*(int32_t*)(uintptr_t)(*srcS + 0x24)) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(valA5), 0x52443344), valA5);
            void* valA9 = srcS[1];
            dstD = (*(int32_t*)(uintptr_t)(*srcS + 0x24));
            (*(int32_t*)(uintptr_t)(dstD + 0x14)) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(valA9), 0x56525458), valA9);
            void* valA13 = srcS[1];
            (*(int32_t*)(uintptr_t)(dstD + 0x1c)) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(valA13), 0x52454e44), valA13);
            void* valA17 = srcS[1];
            (*(int32_t*)(uintptr_t)(dstD + 0x18)) = Sys_CheckHeap_19(Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(valA17), 0x4c544d50), valA17);
        }
        else
        {
            Error_Show("Mesh format not supported");

            while (true)
                /* nop */
        }

        Display_OpenDevice_19(1, *srcS, (*(int32_t*)(uintptr_t)(dstD + 0x10)));
    }

    if (!(*(int32_t*)(uintptr_t)(*srcS + 0x28)))
    {
        int32_t* ctxB = Sys_ResolveSymbol_19(srcS[1]);
        int32_t* flagP = Sys_ResolveSymbol_19(srcS[1]);
        a1 = Sys_ResolveSymbol_19(srcS[1]);
        int32_t* v_8 = Sys_ResolveSymbol_19(srcS[1]);
        int32_t* result = Sys_ReadFileBlock_20(Sys_ResolveSymbol_19(srcS[1]), 0x434d5348);
        (*(int32_t*)(uintptr_t)(*srcS + 0x2c)) = 0;

        if (result)
        {
            int32_t* result_1 = 2;
            (*(int32_t*)(uintptr_t)(*srcS + 0x2c)) = Sys_CheckHeap_19(result, srcS[1]);
            void** dstD3 = (*(int32_t*)(uintptr_t)(*srcS + 0x2c)) + 0x10;
            bool cond_1_1;

            do
            {
                ctxB = Sys_ReadFileBlock_20(Sys_PopStack_19(ctxB), 0x43565458);
                flagP = Sys_ReadFileBlock_20(Sys_PopStack_19(flagP), 0x43464345);
                a1 = Sys_ReadFileBlock_20(Sys_PopStack_19(a1), 0x434d4154);
                v_8 = Sys_ReadFileBlock_20(Sys_PopStack_19(v_8), 0x43535048);
                dstD3[1] = Sys_CheckHeap_19(ctxB, srcS[1]);
                *dstD3 = Sys_CheckHeap_19(flagP, srcS[1]);
                dstD3[2] = Sys_CheckHeap_19(a1, srcS[1]);
                dstD3[3] = Sys_CheckHeap_19(v_8, srcS[1]);
                dstD3 = &dstD3[8];
                result = result_1 - 1;
                cond_1_1 = result_1 != 1;
                result_1 = result;
            } while (cond_1_1);
        }

        return result;
    }

    Error_Show("Mesh format not supported");

    while (true)
        /* nop */
}
