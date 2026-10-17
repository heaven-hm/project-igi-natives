// Original IGI.EXE function: BandFilter_Cleanup_6 (VA 0x004A4D10; static CFG gate PASS, CFG score 1.000).
#include "BandFilter_Cleanup_6.h"
int32_t BandFilter_Cleanup_6(int32_t a1)

{
    int32_t dstD = a1;
    void* valA1 = Sys_AllocateMemory_19(sub_4a4c90, 0x10, *(dstD + 0x2c));
    *(valA1 + 4) = g_935c08;
    *(valA1 + 0xc) = dstD;
    char valA2 = QHash_ValueGet();

    if (!valA2)
        QHash_ValueSet();

    int32_t v_3c = g_936038;
    int32_t tmpD2 = v_3c / 0x18;
    int32_t f1 = tmpD2 / 0x3c % 0x3c;
    int32_t v_5c_1 = v_3c % 0x18;
    int32_t v_60 = tmpD2 % 0x3c;
    int32_t v_64 = f1;
    int32_t v_68 = f1 / 0x3c;
    void v_34;
    int32_t objC2 = Game_DataSymbolLoad(&v_34, "%2.2d : %2.2d : %2.2d : %2.2d");
    int32_t v_60_1 = objC2;
    int32_t v_64_1 = objC2;
    int32_t** valA20 = Sys_OpenFileStream_18(*(dstD + 0x30),
        g_bcabc0 * 0.899999976f + g_bcabb8 - g_936030,
        g_bcabc4 * 0.800000012f + g_bcabbc - g_936034, &v_34);
    int32_t objC3 = valA20[9];
    valA20[5] = 0x42c80000;
    valA20[6] = 0x42c80000;
    valA20[7] = 0x42c80000;
    valA20[9] = objC3 | 0x40000;
    valA20[3] = *(dstD + 0x2c);
    Sys_CloseFileStream_18(valA20);
    Sys_ReadFileBlock_18(valA20);

    if (!valA2)
        Sys_DispatchOpcode_2();

    long double x87_r7_10 = *(dstD + 0x4c);
    long double f2 = 0.75f;
    x87_r7_10 - f2;
    int32_t v_44 = 0;

    if (!(*(&((x87_r7_10 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, f2) ? 1 : 0) << 0xa
            | (x87_r7_10 == f2 ? 1 : 0) << 0xe) + 1) & 1))
        v_44 = 0x3f800000;

    float v_48 = g_bcabc0 * 0.0700000003f;
    v_3c = Sys_ExecuteBytecode_17(dstD + 0x34);
    long double x87_r7_14 = Sys_CloseFileStream_17(dstD + 0x34);
    int32_t v_7c = v_44;
    float v_40 = g_bcabc0 * 0.100000001f + g_936028 + g_bcabb8;
    long double x87_r6_7 = g_bcabc4 * 0.200000003f + g_93602c + g_bcabbc;
    a1 = x87_r6_7;
    v_3c = x87_r6_7 + v_3c / x87_r7_14 * v_48;
    float v_48_1 = v_40 + v_48;
    float v_8c = v_40;
    return Qsprite_Register4Az(dstD + 0x34, v_40, v_3c, v_48_1, v_3c, v_40, a1,
        v_48_1, a1, 128f, 128f, 128f, *(dstD + 0x2c), v_44, 0, 0x10c0000, 0);
}
