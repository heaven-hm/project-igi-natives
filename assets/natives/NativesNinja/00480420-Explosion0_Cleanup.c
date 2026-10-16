#include "00480420-Explosion0_Cleanup.h"
/* 0x00480420 Explosion0_Cleanup full linked: callers=0 callees=8 */
int32_t sub_480420(int32_t a1)

{
    int32_t* esi = a1;
    int32_t eax = esi[8];

    if (eax <= 0)
        return QTask_FindType(esi);

    int32_t ecx = esi[9];
    int64_t var_8;

    if (eax == ecx)
    {
        var_8 = ecx * 0.100000001f;
        int16_t edi_1 = var_8;
        a1 = esi[9];
        long double x87_r7_5 = sub_4b4770(Level_SetMission_5()) * 0.200000003f;
        int32_t eax_3 = esi[0x10];
        var_8 = eax_3;
        *(&var_8 + 4) = eax_3;
        sub_47ead0(esi, 0x1000008, &var_8, 1f / a1, edi_1, (x87_r7_5 + 0.800000012f) * a1,
            (sub_4b4770(Level_SetMission_5()) + 1f) * 0.100000001f);
    }

    struct status_msg* eax_7 = esi[9];
    int32_t ecx_2 = esi[8];
    long double x87_r7_13 = eax_7;
    var_8 = x87_r7_13 * 0.899999976f;

    if (ecx_2 == var_8)
    {
        int32_t ecx_3 = esi[0x10];
        var_8 = ecx_3;
        *(&var_8 + 4) = ecx_3;
        esi[0x11] = sub_47ead0(esi, 0x1000010, &var_8, 1f / x87_r7_13, eax_7, 0, 0x3a83126f);
    }

    void* __saved_ebx_4 = esi[0x11];

    if (__saved_ebx_4)
    {
        long double x87_r7_16 = esi[8];
        long double x87_r6_4 = esi[9];
        long double x87_r6_5 = x87_r6_4 * 0.5f;
        x87_r7_16 - x87_r6_5;
        long double x87_r6_9;

        x87_r6_9 = *(&((x87_r7_16 < x87_r6_5 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_16, x87_r6_5) ? 1 : 0) << 0xa
            | (x87_r7_16 == x87_r6_5 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41 ? x87_r7_16 / x87_r6_5
            : 1f - (x87_r7_16 - x87_r6_5) / (x87_r6_4 * 0.899999976f - x87_r6_5);

        void* __saved_ebx_2 = __saved_ebx_4;
        sub_4fe5e0(__saved_ebx_4, x87_r6_9 * 0.300000012f);
    }

    int32_t result = esi[8] - 1;
    esi[8] = result;
    return result;
}
