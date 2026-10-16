#include "gi_platform.h"
#include "00466CF0-ComputerStartup_LoadParameters.h"
void ComputerStartup_LoadParameters(int32_t a1)

{
    if (!((*(int32_t*)(uintptr_t)(a1 + 0x70)) & 1))
        return;

    void* valA2 = Sys_AllocateMemory_19(sub_466c60, 0x10, (*(int32_t*)(uintptr_t)(a1 + 0x58)));
    *(valA2 + 4) = g_5bdc50;
    *(valA2 + 0xc) = a1;
    char valA3 = QHash_ValueGet();

    if (!valA3)
        QHash_ValueSet();

    int32_t v_8_1 = g_bcabc0 * 0.150000006.0f;
    char* valA5 = (*(int32_t*)(uintptr_t)(a1 + (*(a1 + 0x20) << 2) + 0x5c));
    char* v_24_1 = valA5;
    float v_10_1 = g_bcabc4 * 0.649999976.0f;
    long double x87_r7_7 = Sys_ResolveSymbol_18((*(int32_t*)(uintptr_t)(a1 + 0x8c)));
    int32_t* srcS1 = Sys_OpenFileStream_18((*(int32_t*)(uintptr_t)(a1 + 0x8c)), v_8_1, v_10_1 - x87_r7_7 - 2.0f, valA5);
    srcS1[5] = (*(int32_t*)(uintptr_t)(a1 + 0x34)) * 127.0f;
    int32_t objC5 = srcS1[9] | 0x40000;
    srcS1[6] = (*(int32_t*)(uintptr_t)(a1 + 0x38)) * 127.0f;
    long double x87_r7_15 = (*(int32_t*)(uintptr_t)(a1 + 0x3c)) * 127.0f;
    srcS1[9] = objC5;
    srcS1[7] = x87_r7_15;
    srcS1[3] = (*(int32_t*)(uintptr_t)(a1 + 0x58));
    srcS1[8] = 0xffffffff;
    Sys_CloseFileStream_18(srcS1);
    Sys_ReadFileBlock_18(srcS1);

    if (!valA3)
        Sys_DispatchOpcode_2();
}
