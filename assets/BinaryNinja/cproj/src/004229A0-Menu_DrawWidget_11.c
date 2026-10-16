#include "gi_platform.h"
#include "004229A0-Menu_DrawWidget_11.h"
int32_t Menu_DrawWidget_11(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)

{
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + (a5 << 2) + 0x94));

    if (result)
    {
        int32_t valA;
        int32_t objC1;
        valA = Sys_ExecuteBytecode_17(result);
        int32_t i_1 = a4 / valA;
        result = a6;

        if (result)
        {
            result = Sys_CloseFileStream_17((*(int32_t*)(uintptr_t)(a1 + (a5 << 2) + 0x94)));
            objC1 = a2 - result;
            a2 = objC1;
        }

        if (i_1 > 0)
        {
            int32_t i;

            do
            {
                int32_t v_2c_1 = objC1;
                result = Sys_ResolveSymbol_14((*(int32_t*)(uintptr_t)(a1 + (a5 << 2) + 0x94)), a2, a3, 128.0f, 128.0f, 128.0f, 0,
                    0, 0xffffffff);
                objC1 = a3 + valA;
                i = i_1;
                i_1 -= 1;
                a3 = objC1;
            } while (i != 1);
        }
    }

    return result;
}
