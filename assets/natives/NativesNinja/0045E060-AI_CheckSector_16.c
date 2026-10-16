#include "0045E060-AI_CheckSector_16.h"
/* 0x0045e060 AI_CheckSector_16 full linked: callers=2 callees=8 */
int32_t sub_45e060(int32_t a1)

{
    void* eax = Config_GetActivePlayerProfileRecord();
    int32_t* esi = a1;
    __builtin_memset(esi, 0, 0xa0);
    int32_t edi_1 = g_bc210c;
    *esi = g_bc20f4;
    int32_t var_4 = 0;
    esi[1] = g_bc20f8;
    int32_t var_4_1 = 0;
    esi[2] = (edi_1 & 1);
    int32_t var_4_2 = 0;
    esi[3] = (edi_1 & 2);
    int32_t var_4_3 = 0;
    esi[4] = (edi_1 & 4);
    esi[5] = (edi_1 & 8);

    if (*(eax + 0x538))
        esi[1] = -(esi[1]);

    long double x87_r7_7 = *(eax + 0x53c);
    long double temp0 = 0.0500000007f;
    x87_r7_7 - temp0;

    if (!(*(&((x87_r7_7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp0) ? 1 : 0) << 0xa
        | (x87_r7_7 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double temp1_1 = 1f;
        x87_r7_7 - temp1_1;

        if (!(*(&((x87_r7_7 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            x87_r7_7 = 1f;
    }
    else
        x87_r7_7 = 0.0500000007f;

    int32_t var_4_4 = 0;
    *esi = x87_r7_7 * *esi;
    esi[1] = x87_r7_7 * esi[1];
    int32_t var_4_5 = 0;
    esi[6] = (edi_1 & 0x100);
    int32_t var_4_6 = 0;
    esi[7] = (edi_1 & 0x4000);
    int32_t var_4_7 = 0;
    esi[8] = (edi_1 & 0x200);
    int32_t var_4_8 = 0;
    esi[9] = (edi_1 & 0x400);
    int32_t var_4_9 = 0;
    esi[0xa] = (edi_1 & 0x800);
    int32_t var_4_10 = 0;
    esi[0xb] = (edi_1 & 0x1000);
    esi[0xc] = (edi_1 & 0x8000);
    int32_t var_4_11 = 0;
    esi[0xd] = 0xffffffff;
    int32_t var_4_12 = 0;
    esi[0xe] = (edi_1 & 0x100000);
    int32_t var_4_13 = 0;
    esi[0xf] = (edi_1 & 0x200000);
    int32_t var_4_14 = 0;
    esi[0x14] = (edi_1 & 0x40000);
    int32_t var_4_15 = 0;
    esi[0x15] = (edi_1 & 0x2000);
    esi[0x16] = (edi_1 & 0x80000);
    int32_t var_4_16 = 0;
    int32_t var_4_17 = 0;
    esi[0x17] = (edi_1 & &__dos_header);
    int32_t var_4_18 = 0;
    esi[0x18] = (edi_1 & 0x800000);
    int32_t var_4_19 = 0;
    esi[0x19] = (edi_1 & 0x1000000);
    int32_t var_4_20 = 0;
    esi[0x1a] = (edi_1 & 0x2000000);
    int32_t var_4_21 = 0;
    esi[0x1b] = (edi_1 & 0x4000000);
    int32_t var_4_22 = 0;
    esi[0x1c] = (edi_1 & 0x8000000);
    int32_t var_4_23 = 0;
    esi[0x1d] = (edi_1 & 0x10000000);
    int32_t var_4_24 = 0;
    esi[0x1e] = (edi_1 & 0x20000000);
    int32_t var_4_25 = 0;
    esi[0x1f] = (edi_1 & 0x40000000);
    int32_t var_4_26 = 0;
    esi[0x22] = (edi_1 & 0x10000);
    esi[0x20] = (edi_1 & 0x20000);
    esi[0x10] = WeaponType_GetConfig_2(0x4e);
    esi[0x11] = WeaponType_GetConfig_2(0x4a);
    esi[0x12] = DEBUG_KEYSENABLEINVALID(0x9c);
    esi[0x13] = DEBUG_KEYSENABLEINVALID(0x37);
    int32_t result = DEBUG_KEYSENABLEINVALID(0x21);
    esi[0x21] = result;
    return result;
}
