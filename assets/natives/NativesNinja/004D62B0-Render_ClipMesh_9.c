#include "004D62B0-Render_ClipMesh_9.h"
/* 0x004d62b0 Render_ClipMesh_9 full linked: callers=1 callees=7 */
void** sub_4d62b0(void* a1, int32_t a2, float a3)

{
    long double x87_r7_1 = a3 * 4800f / g_a54658;
    int32_t ecx_2 = a2 * 0x21;
    void** eax_1 = *(a1 + 8);
    void** esi = eax_1[ecx_2 + 0x20];
    void* edi = &eax_1[ecx_2];
    long double temp0 = 1f;
    x87_r7_1 - temp0;
    eax_1 = (x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&eax_1 + 1) & 1))
    {
        if (esi)
        {
            void** var_14_1 = esi;
            int32_t* eax_3 = sub_4d5f90();
            sub_4d5fd0(eax_3, x87_r7_1, 2);
            *(edi + 4) |= 0x10000;
            int32_t* eax_4 = sub_4d4710();
            sub_4d4750(eax_4, 0, sub_4d4780, 0, 0, edi);
            eax_1 = esi[9];

            if (eax_1 != 0xffffffff)
            {
                eax_1 = sub_4d35b0();
                *esi = eax_1;
                eax_1[8] = esi;
                eax_1[7] = 0;
                esi = eax_1;
            }

            esi[0xa] = eax_4;
            esi[9] = 1;
            esi[3] = sub_4d63a0;
            esi[4] = sub_4d63f0;
            esi[5] = sub_4d63b0;
            esi[6] = eax_3;
            *(edi + 0x80) = esi;
        }
    }
    else if (esi)
    {
        int32_t eax_2 = sub_4d34a0(esi);
        *(edi + 0x80) = 0;
        return eax_2;
    }

    return eax_1;
}
