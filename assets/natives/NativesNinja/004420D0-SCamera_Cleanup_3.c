#include "004420D0-SCamera_Cleanup_3.h"
/* 0x004420d0 SCamera_Cleanup_3 full linked: callers=0 callees=11 */
int32_t sub_4420d0(float a1)

{
    double* esi = a1;
    void* ebx = esi[0x4ba];
    char* var_30 = ebx + 0x128;
    char* eax_1 = sub_4cec10(var_30);

    if (eax_1)
    {
        var_30 = eax_1;
        sub_4c48d0(esi, var_30);
    }

    double* ecx = esi[0x4ba];
    var_30 = nullptr;
    double var_18;
    WeaponType_UpdateAnim(&var_18, ecx, var_30);
    var_18 = var_18 + *(ebx + 0x20);
    double var_10;
    double var_10_1 = var_10 + *(ebx + 0x28);
    double var_8;
    double var_8_1 = var_8 + *(ebx + 0x30);
    long double x87_r7_6 = *(esi + 0x9c);
    long double x87_r6 = esi[0x14];
    x87_r6 - x87_r7_6;
    long double x87_r7_7;

    if (!(*(&((x87_r6 < x87_r7_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7_6) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_7 = esi[0x14];
    else
        x87_r7_7 = *(esi + 0x9c);

    long double x87_r6_1 = esi[0x13];
    x87_r6_1 - x87_r7_7;
    long double x87_r7_9;

    if (*(&((x87_r6_1 < x87_r7_7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_7) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_10 = *(esi + 0x9c);
        long double x87_r6_2 = esi[0x14];
        x87_r6_2 - x87_r7_10;

        if (!(*(&((x87_r6_2 < x87_r7_10 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_2, x87_r7_10) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_10 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_9 = esi[0x14];
        else
            x87_r7_9 = *(esi + 0x9c);
    }
    else
        x87_r7_9 = esi[0x13];

    var_30 = *(esi + 0x6c);
    long double x87_r7_12 = sub_4d0950(var_30) * x87_r7_9;
    void* edx = esi[0xd];
    var_30 = x87_r7_12;
    sub_4c6940(edx, esi, &var_18, var_30);
    double* eax_5 = sub_4c3440(esi);
    sub_4dcf00(esi[0xd], esi, eax_5);
    long double x87_r7_13 = *(ebx + 0x120);
    esi[0x1e] = x87_r7_13;
    var_30 = *(ebx + 0x108) + *(ebx + 0x124);
    sub_4b38e0(&esi[0xe], x87_r7_13, 0f, var_30);
    WeaponType_UpdateAnim(&var_18, esi, 1);
    var_18 = var_18 + esi[4];
    double var_10_2 = var_10_1 + esi[5];
    double var_8_2 = var_8_1 + esi[6];
    memcpy(&esi[0x22], &var_18, 0x18);
    memcpy(&esi[0x25], &esi[0xe], 0x28);
    int32_t eax_9;
    int32_t edx_1;
    edx_1 = HIGHD(*(ebx + 0x154));
    eax_9 = LOWD(*(ebx + 0x154));
    esi[0x2a] = ((eax_9 - edx_1) >> 1) * 0.0174532924f;
    int32_t eax_13;
    int32_t edx_2;
    edx_2 = HIGHD(*(ebx + 0x156));
    eax_13 = LOWD(*(ebx + 0x156));
    int32_t result = (eax_13 - edx_2) >> 1;
    esi[0x2b] = result * 0.0174532924f;
    esi[0x2c] = *(ebx + 0x158) * 4096f;
    return result;
}
