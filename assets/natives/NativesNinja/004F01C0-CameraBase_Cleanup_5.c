#include "004F01C0-CameraBase_Cleanup_5.h"
/* 0x004f01c0 CameraBase_Cleanup_5 full linked: callers=0 callees=6 */
int32_t sub_4f01c0(int32_t* a1, int32_t* a2)

{
    void* eax = *a1;

    if (eax)
    {
        sub_4b0d10(eax);
        *a1 = 0;
    }

    sub_4f1c20(a2, 1);
    void var_400;
    sub_4b8a80(a2[1], *a2, &var_400, 0x400);
    void* edi = &var_400;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    if (~i != 1)
    {
        void* edi_1 = &var_400;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:1_1 = 0 != *edi_1;
            edi_1 += 1;
            i_1 -= 1;

            if (!cond:1_1)
                break;
        }

        void* eax_1 = Mem_Alloc(~i_1, 4);
        void* edi_2 = &var_400;
        int32_t i_2 = 0xffffffff;
        *a1 = eax_1;

        while (i_2)
        {
            bool cond:2_1 = 0 != *edi_2;
            edi_2 += 1;
            i_2 -= 1;

            if (!cond:2_1)
                break;
        }

        int32_t ecx_3 = ~i_2;
        int32_t esi_2;
        int32_t edi_5;
        edi_5 = memcpy(eax_1, edi_2 - ecx_3, ecx_3 & 0xfffffffc);
        memcpy(edi_5, esi_2, ecx_3 & 3);
    }

    int32_t result = *a2 + 1;
    *a2 = result;
    return result;
}
