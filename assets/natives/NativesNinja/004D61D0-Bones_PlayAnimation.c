#include "004D61D0-Bones_PlayAnimation.h"
/* 0x004d61d0 Bones_PlayAnimation full linked: callers=31 callees=5 */
int32_t sub_4d61d0(float a1, int32_t a2, int32_t a3, int32_t a4, float a5)

{
    int32_t* ecx = a1;
    void* esi_3 = ecx[2] + a2 * 0x84;
    void* edi = *(esi_3 + 0x80);
    a1 = a5 * 4800f / g_a54658;
    int32_t* ebx = sub_4d47d0(*ecx, a2, a3, a4);

    if (edi || *(esi_3 + 0x74))
    {
        long double x87_r7_2 = a1;
        long double temp0_1 = 1f;
        x87_r7_2 - temp0_1;

        if (!(*(&((x87_r7_2 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            sub_4d5ec0(esi_3, ebx, a1, 0);
            int32_t eax_7 = *(esi_3 + 4) | 0x20000;
            *(esi_3 + 4) = eax_7;
            return eax_7;
        }

        if (edi)
            sub_4d34a0(edi);
    }

    int32_t* eax_3 = sub_4d35b0();
    sub_4d3600(eax_3, 0, 1, ebx, 0xffffffff, 0, 0, 0, 0, 0, 0, 0);
    int32_t ecx_5 = *(esi_3 + 4) & 0xfffafeff;
    *(esi_3 + 0x80) = eax_3;
    *(esi_3 + 4) = ecx_5;
    int32_t eax_5 = ecx_5 | 0x20000;
    *(esi_3 + 4) = eax_5;
    return eax_5;
}
