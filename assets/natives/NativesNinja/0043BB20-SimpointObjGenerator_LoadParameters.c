#include "0043BB20-SimpointObjGenerator_LoadParameters.h"
/* 0x0043bb20 SimpointObjGenerator_LoadParameters full linked: callers=0 callees=7 */
int32_t SimpointObjGenerator_LoadParameters(float a1)

{
    int32_t* esi = a1;
    int32_t var_18;
    __builtin_memset(&var_18, 0, 0x18);
    sub_4c5710(Level_StartMission_4(), esi, 0);
    long double x87_r7 = esi[0x27];
    long double x87_r6 = esi[0x28];
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = esi[0x28];
    else
        x87_r7_1 = esi[0x27];

    long double x87_r6_1 = esi[0x26];
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = esi[0x27];
        long double x87_r6_2 = esi[0x28];
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = esi[0x28];
        else
            x87_r7_3 = esi[0x27];
    }
    else
        x87_r7_3 = esi[0x26];

    float var_28_2 = sub_4d0950(esi[0x1b]) * x87_r7_3;
    sub_4c7140(Level_StartMission_4(), esi, &var_18, var_28_2, 2);
    esi[0x1c] = 0x3f800000;
    esi[0x1d] = 0;
    esi[0x1e] = 0;
    esi[0x1f] = 0;
    esi[0x20] = 0x3f800000;
    esi[0x21] = 0;
    esi[0x22] = 0;
    esi[0x23] = 0;
    esi[0x24] = 0x3f800000;
    esi[0x25] = 0;
    esi[0x3c] = 0;
    esi[0x3d] = 0;
    esi[0x41] = 0;
    esi[0x45] = 0;
    memcpy(&esi[0x49],
        "\x1e\x00\x00\x00\x0f\x00\x00\x00\x48\xe1\x7a\x3f\x00\x00\x80\x3f\x00\x00\x20\x41", 0x14);
    esi[0x4e] = 0;
    esi[0x4f] = 0;
    esi[0x50] = 0;
    esi[0x51] = 0x3f800000;
    esi[0x52] = 0;
    esi[0x53] = 0;
    esi[0x54] = 0;
    return 0x3f800000;
}
