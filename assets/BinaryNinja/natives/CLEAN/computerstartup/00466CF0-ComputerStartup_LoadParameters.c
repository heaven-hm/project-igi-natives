// IGI native provenance: ComputerStartup_LoadParameters - 0x00466CF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00466CF0-ComputerStartup_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerStartup_LoadParameters.h"
void ComputerStartup_LoadParameters(int32_t context)

{
    if (!(*(context + 0x70) & 1))
        return;

    void* data_2 = Sys_AllocateMemory_19(sub_466c60, 0x10, *(context + 0x58));
    *(data_2 + 4) = g_5bdc50;
    *(data_2 + 0xc) = context;
    char data_3 = QHash_ValueGet();

    if (!data_3)
        QHash_ValueSet();

    int32_t item_8_1 = g_bcabc0 * 0.150000006f;
    char* data_5 = *(context + (*(context + 0x20) << 2) + 0x5c);
    char* item_24_1 = data_5;
    float item_10_1 = g_bcabc4 * 0.649999976f;
    long double fpu_val_7_7 = Sys_ResolveSymbol_18(*(context + 0x8c));
    int32_t* source_1 = Sys_OpenFileStream_18(*(context + 0x8c), item_8_1, item_10_1 - fpu_val_7_7 - 2.0f, data_5);
    source_1[5] = *(context + 0x34) * 127.0f;
    int32_t entity_5 = source_1[9] | 0x40000;
    source_1[6] = *(context + 0x38) * 127.0f;
    long double fpu_val_7_15 = *(context + 0x3c) * 127.0f;
    source_1[9] = entity_5;
    source_1[7] = fpu_val_7_15;
    source_1[3] = *(context + 0x58);
    source_1[8] = 0xffffffff;
    Sys_CloseFileStream_18(source_1);
    Sys_ReadFileBlock_18(source_1);

    if (!data_3)
        Sys_DispatchOpcode_2();
}
