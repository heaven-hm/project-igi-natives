#include "00532030-TransparencyList_Setup.h"
/* 0x00532030 TransparencyList_Setup full linked: callers=0 callees=1 */
int32_t* sub_532030(int32_t* a1)

{
    void* eax_1 = a1[3];
    int32_t* __saved_ecx_2 = *(eax_1 + 0x6c);
    void** edi = *(eax_1 + 0x78);
    int32_t eax_2 = sub_5321f0(edi, __saved_ecx_2, 8, sub_5320d0);

    if (__saved_ecx_2 <= 0)
    {
        g_a84620 = 0;
        return eax_2;
    }

    int32_t* edi_1 = &edi[1];
    a1 = edi_1;
    int32_t* __saved_ecx = __saved_ecx_2;
    int32_t* __saved_ecx_1;
    bool cond:0_1;

    do
    {
        void* eax_3 = *edi_1;
        int32_t i_1 = *(eax_3 + 4);
        int32_t ebp_1 = *(eax_3 + 0x18);
        int32_t edi_2 = *(eax_3 + 0x1c);
        void* esi = eax_3 + 0x20;

        if (i_1 > 0)
        {
            int32_t i;

            do
            {
                int32_t* eax_4 = g_5ca114;
                (*(*eax_4 + 0x64))(eax_4, 4, edi_2, esi, 3, 0);
                esi += ebp_1 * 3;
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }

        edi_1 = &a1[2];
        __saved_ecx_1 = __saved_ecx - 1;
        cond:0_1 = __saved_ecx != 1;
        a1 = edi_1;
        __saved_ecx = __saved_ecx_1;
    } while (cond:0_1);
    g_a84620 = 0;
    return __saved_ecx_1;
}
