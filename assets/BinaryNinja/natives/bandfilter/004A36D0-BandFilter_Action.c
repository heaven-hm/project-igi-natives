#include "BandFilter_Action.h"
void* BandFilter_Action(float a1)

{
    float dstD = a1;
    void* result = Sys_AllocateMemory_19(sub_4a36b0, 0x10, *(dstD + 0x20));
    int32_t objC = g_935c0c;
    *(result + 0xc) = dstD;
    *(result + 4) = objC;
    long double fpu7 = *(dstD + 0x28);
    long double f0 = 0f;
    fpu7 - f0;
    result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        char valA1 = QHash_ValueGet();

        if (!valA1)
            QHash_ValueSet();

        int32_t v_4c_1 = *(dstD + 0x60);
        void v_34;
        Game_DataSymbolLoad(&v_34, "CAMERA %d");
        void* v_50_1 = &v_34;
        void* v_54_2 = &v_34;
        int32_t** valA2 = Sys_OpenFileStream_18(*(dstD + 0x70),
            g_bcabc0 * g_93603c + g_936044 + g_bcabb8,
            g_bcabc4 * g_936040 + g_936048 + g_bcabbc, &v_34);
        int32_t tmpD3 = valA2[9];
        valA2[5] = 0x42c80000;
        valA2[6] = 0x42c80000;
        valA2[7] = 0x42c80000;
        valA2[9] = tmpD3 | 0x40000;
        valA2[3] = *(dstD + 0x20);
        Sys_CloseFileStream_18(valA2);
        result = Sys_ReadFileBlock_18(valA2);

        if (!valA1)
            Sys_DispatchOpcode_2();
    }

    long double x87_r7_10 = *(dstD + 0x28);
    long double f1 = 0f;
    x87_r7_10 - f1;
    result = (x87_r7_10 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, f1) ? 1 : 0) << 0xa
        | (x87_r7_10 == f1 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        return result;

    long double x87_r7_11 = *(dstD + 0x20);
    long double f2_1 = g_bcadc0;
    x87_r7_11 - f2_1;

    if (*(&((x87_r7_11 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        a1 = g_bcadc0;
    else
        a1 = *(dstD + 0x20);

    float v_50_3 = a1;
    float v_54_4 = a1;
    float v_58_2 = a1;
    float v_5c_2 = a1;
    float v_60_2 = a1;
    int32_t v_3c_3 = g_bcabbc;
    int32_t v_64_1 = v_3c_3;
    int32_t v_68_1 = v_3c_3;
    return Sys_CloseFileStream_14(g_bcabb8, v_3c_3, g_bcabc0, g_bcabc4, *(dstD + 0x64) * 128f,
        *(dstD + 0x68) * 128f, *(dstD + 0x6c) * 128f, 0x80000000, 0, a1);
}
