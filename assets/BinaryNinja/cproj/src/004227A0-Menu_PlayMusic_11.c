#include "gi_platform.h"
#include "004227A0-Menu_PlayMusic_11.h"
int32_t Menu_PlayMusic_11(void* a1, int32_t a2, int32_t a3, int32_t a4, float a5, int32_t a6, int32_t a7, int32_t a8)

{
    int32_t dstD = 0;
    int32_t flagP = 0;
    int32_t v_4 = 0;
    int32_t result = 0;
    int32_t result_4;

    if ((*(int32_t*)(uintptr_t)(a1 + 0x94)))
    {
        dstD = Sys_CloseFileStream_17((*(int32_t*)(uintptr_t)(a1 + (a5 << 2) + 0x94)));
        int32_t result_1;
        result_1 = Sys_ExecuteBytecode_17((*(int32_t*)(uintptr_t)(a1 + (a5 << 2) + 0x94)));
        result = result_1;
    }

    if ((*(int32_t*)(uintptr_t)(a1 + 0x98)))
    {
        flagP = Sys_CloseFileStream_17((*(int32_t*)(uintptr_t)(a1 + (a6 << 2) + 0x94)));
        result_4 = result;

        if (result_4 <= Sys_ExecuteBytecode_17((*(int32_t*)(uintptr_t)(a1 + (a6 << 2) + 0x94))))
        {
            int32_t result_2;
            result_2 = Sys_ExecuteBytecode_17((*(int32_t*)(uintptr_t)(a1 + (a6 << 2) + 0x94)));
            result = result_2;
        }
    }

    int32_t ctxB3 = a7;

    if ((*(int32_t*)(uintptr_t)(a1 + 0x9c)))
    {
        v_4 = Sys_CloseFileStream_17((*(int32_t*)(uintptr_t)(a1 + (ctxB3 << 2) + 0x94)));
        result_4 = result;

        if (result_4 <= Sys_ExecuteBytecode_17((*(int32_t*)(uintptr_t)(a1 + (ctxB3 << 2) + 0x94))))
        {
            int32_t result_3;
            result_3 = Sys_ExecuteBytecode_17((*(int32_t*)(uintptr_t)(a1 + (ctxB3 << 2) + 0x94)));
            result = result_3;
        }
    }

    if (a8)
        a3 -= result;

    int32_t valA16;

    if (!dstD)
        valA16 = a4;
    else
    {
        int32_t result_8 = result_4;
        int32_t result_5 = result_4;
        result_4 = Sys_ResolveSymbol_14((*(int32_t*)(uintptr_t)(a1 + (a5 << 2) + 0x94)), a2, a3, 128.0f, 128.0f, 128.0f, 0, 0, 0);
        a2 += dstD;
        valA16 = a4 - dstD;
    }

    if (!flagP)
    {
        result_4 = a2 + valA16 - v_4;
        a2 = result_4;
    }
    else
    {
        int32_t i_2 = (valA16 - v_4) / flagP;

        if (i_2 > 0)
        {
            int32_t i_1 = i_2;
            int32_t i;

            do
            {
                int32_t result_6 = result_4;
                Sys_ResolveSymbol_14((*(int32_t*)(uintptr_t)(a1 + (a6 << 2) + 0x94)), a2, a3, 128.0f, 128.0f, 128.0f, 0, 0, 0);
                result_4 = a2 + flagP;
                i = i_1;
                i_1 -= 1;
                a2 = result_4;
            } while (i != 1);
            ctxB3 = a7;
        }
    }

    if (v_4)
    {
        int32_t result_9 = result_4;
        int32_t result_7 = result_4;
        Sys_ResolveSymbol_14((*(int32_t*)(uintptr_t)(a1 + (ctxB3 << 2) + 0x94)), a2, a3, 128.0f, 128.0f, 128.0f, 0, 0, 0);
    }

    return result;
}
