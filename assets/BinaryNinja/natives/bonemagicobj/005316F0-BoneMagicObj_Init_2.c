// Original IGI.EXE function: BoneMagicObj_Init_2 (VA 0x005316F0; static CFG gate PASS, CFG score 1.000).
#include "BoneMagicObj_Init_2.h"

int32_t BoneMagicObj_Init_2(void* pThis, void* param)

{
    void* param_1 = param;
    int32_t result = BoneDynCubeObj_LoadParameters(pThis);
    void var_28;
    __builtin_memcpy(&var_28, pThis + 0x78, 0x28);
    void var_40;
    __builtin_memcpy(&var_40, pThis + 0x20, 0x18);
    int32_t* i = *(pThis + 8);

    if (*i && i)
    {
        int32_t afa7e0_1 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_3;

            if (!edx_1)
                eax_3 = nullptr;
            else
            {
                int32_t eax = *edx_1;
                int32_t eax_1 = -(eax);
                eax_3 = (eax_1 - eax_1) & edx_1;
            }

            *((afa7e0_1 << 2) + &g_afa6e0) = eax_3;
            g_afa7e0 = afa7e0_1 + 1;
            uint32_t eax_5 = DynObj_FindSymbol_6();
            int32_t edx_2 = 0;
            edx_2 = i[7];
            result = *(((eax_5 * 0x180 + edx_2) << 2) + &g_a96ae0);

            if (result)
            {
                param_1 = &var_40;
                result = result(i, param_1);
            }

            afa7e0_1 = g_afa7e0 - 1;
            g_afa7e0 = afa7e0_1;
            i = *((afa7e0_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
