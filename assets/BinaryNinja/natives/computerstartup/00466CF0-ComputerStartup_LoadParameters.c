// Original IGI.EXE function: ComputerStartup_LoadParameters (VA 0x00466CF0; static CFG gate PASS, CFG score 1.000).
#include "ComputerStartup_LoadParameters.h"
void ComputerStartup_LoadParameters(int32_t a1)

{
    if (!(*(a1 + 0x70) & 1))
        return;

    void* valA2 = Sys_AllocateMemory_19(sub_466c60, 0x10, *(a1 + 0x58));
    *(valA2 + 4) = g_5bdc50;
    *(valA2 + 0xc) = a1;
    char valA3 = QHash_ValueGet();

    if (!valA3)
        QHash_ValueSet();

    int32_t v_8_1 = g_bcabc0 * 0.150000006f;
    char* valA5 = *(a1 + (*(a1 + 0x20) << 2) + 0x5c);
    char* v_24_1 = valA5;
    float v_10_1 = g_bcabc4 * 0.649999976f;
    long double x87_r7_7 = Sys_ResolveSymbol_18(*(a1 + 0x8c));
    int32_t* srcS1 = Sys_OpenFileStream_18(*(a1 + 0x8c), v_8_1, v_10_1 - x87_r7_7 - 2f, valA5);
    srcS1[5] = *(a1 + 0x34) * 127f;
    int32_t objC5 = srcS1[9] | 0x40000;
    srcS1[6] = *(a1 + 0x38) * 127f;
    long double x87_r7_15 = *(a1 + 0x3c) * 127f;
    srcS1[9] = objC5;
    srcS1[7] = x87_r7_15;
    srcS1[3] = *(a1 + 0x58);
    srcS1[8] = 0xffffffff;
    Sys_CloseFileStream_18(srcS1);
    Sys_ReadFileBlock_18(srcS1);

    if (!valA3)
        Sys_DispatchOpcode_2();
}
