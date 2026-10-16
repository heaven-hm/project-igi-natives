#include "gi_platform.h"
#include "0045DF50-HumanPlayerInput_Process.h"
int32_t HumanPlayerInput_Process(void* a1)

{
    if ((*(int32_t*)(uintptr_t)(a1 + 0x80)))
        (*(int32_t*)(uintptr_t)(a1 + 0x188)) = Mem_Alloc(0x15f900, 4);
    else if ((*(int32_t*)(uintptr_t)(a1 + 0x81)))
    {
        int32_t v_100 = g_53f30c[0];
        int16_t v_fc_1 = g_53f30c[4][0];
        char v_fa_1 = g_53f30c[6][0];
        char v_f9;
        (*(int32_t*)__builtin_memset(&v_f9, 0, 0xf8)) = 0;
        void* dstD3 = a1 + 0x82;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD3;
            dstD3 += 1;
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t objC2 = ~i;
        int32_t* dstD5 = &v_100;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond_1_1 = 0 != *dstD5;
            dstD5 += 1;
            i_1 -= 1;

            if (!cond_1_1)
                break;
        }

        int32_t srcS2;
        int32_t dstD7;
        dstD7 = memcpy(dstD5 - 1, dstD3 - objC2, objC2 & 0xfffffffc);
        int32_t v_104;
        int32_t* v_118_1 = &v_104;
        memcpy(dstD7, srcS2, objC2 & 3);
        void* valA3 = Resource_PackUnpack(&v_100, v_118_1);
        (*(int32_t*)(uintptr_t)(a1 + 0x184)) = valA3;

        if (valA3)
            (*(int32_t*)(uintptr_t)(a1 + 0x190)) = v_104 / 0xa0;
    }

    Script_Isexists(a1 + 0x194, a1);
    return 0;
}
