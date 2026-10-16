#include "gi_platform.h"
#include "004CF790-DynObj_LocalTexturesSTex.h"
int32_t* DynObj_LocalTexturesSTex(void* a1)

{
    void* ctxB = a1;
    int32_t flagP = 0;
    int32_t* valA1 = DynObj_CreateMagicObject_13((*(int32_t*)(uintptr_t)(ctxB + 8)), 0x54455846, nullptr);
    int32_t* srcS = valA1;
    int32_t __saved_ecx_2 = *srcS;
    (*(int32_t*)(uintptr_t)(ctxB + 0x40)) = __saved_ecx_2;

    if (__saved_ecx_2 <= 0)
    {
        (*(int32_t*)(uintptr_t)(ctxB + 0x34)) = 0;
        (*(int32_t*)(uintptr_t)(ctxB + 0x38)) = 0;
    }
    else
    {
        (*(int32_t*)(uintptr_t)(ctxB + 0x34)) = Mem_Alloc(__saved_ecx_2 * 0x24, 4);
        valA1 = Mem_Alloc(__saved_ecx_2 * 0xc, 4);
        void* srcS1 = &srcS[1];
        (*(int32_t*)(uintptr_t)(ctxB + 0x38)) = valA1;

        if (__saved_ecx_2 > 0)
        {
            a1 = nullptr;
            int32_t saved_ctx = __saved_ecx_2;
            int32_t __saved_ecx_1;
            bool cond_3_1;

            do
            {
                void* v_18_1 = srcS1;
                (*(int32_t*)(uintptr_t)(*(ctxB + 0x38) + flagP + 4)) = 0;
                Game_DataSymbolLoad(0xa4ec6c, "LOCAL:textures/%s.tex");
                Sys_SIsNotAValidTextureF((*(int32_t*)(uintptr_t)(ctxB + 0x34)) + a1, flagP + (*(int32_t*)(uintptr_t)(ctxB + 0x38)), 0xa4ec6c);
                void* dstD1 = srcS1;
                int32_t i = 0xffffffff;

                while (i)
                {
                    bool cond_2_1 = 0 != *dstD1;
                    dstD1 += 1;
                    i -= 1;

                    if (!cond_2_1)
                        break;
                }

                flagP += 0xc;
                srcS1 = srcS1 + ~i - 1 + 1;
                __saved_ecx_1 = saved_ctx - 1;
                cond_3_1 = saved_ctx != 1;
                a1 += 0x24;
                saved_ctx = __saved_ecx_1;
            } while (cond_3_1);
            return __saved_ecx_1;
        }
    }

    return valA1;
}
