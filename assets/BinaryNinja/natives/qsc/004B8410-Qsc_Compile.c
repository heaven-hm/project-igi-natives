// Original IGI.EXE function: Qsc_Compile (VA 0x004B8410; static CFG gate PASS, CFG score 0.889).
#include "Qsc_Compile.h"
int32_t Qsc_Compile(void* context)

// Sig: int Qsc_Compile(char* qscPath)
// Note: Compiles a .qsc SCRIPT SOURCE into a .qvm binary: resolves the path
// (fcn_004B5B60), pulls the source through ResourceLoad (0x4B5F00), allocates a
// 0x94-byte compiler context via Mem_Alloc, emits ".qvm" output. Param: qscPath
// = script source path. RETURNS result object/flag.
{
    int32_t result;
    void* entity_val;
    int32_t temp_val;
    result = Sys_AllocateMemory_16(context);

    if (!result)
        return result;

    void* item_11c_1 = context;
    int32_t item_104;
    int32_t* data_1 = Resource_Load(&item_104, temp_val, entity_val, &item_104);
    int32_t* data_2 = Mem_Alloc(0x94, 4);
    memset(data_2, 0, 0x94);
    data_2[0x20] = data_1;
    data_2[0x21] = item_104;
    void* dest_2 = context;
    int32_t i = 0xffffffff;
    data_2[0x22] = 0;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_2;
        dest_2 += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_2 = ~i;
    int32_t source_3;
    int32_t dest_5;
    dest_5 = memcpy(data_2, dest_2 - entity_2, entity_2 & 0xfffffffc);
    memcpy(dest_5, source_3, entity_2 & 3);
    void* dest_6 = context;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool flag_1_1 = 0 != *dest_6;
        dest_6 += 1;
        i_1 -= 1;

        if (!flag_1_1)
            break;
    }

    int32_t entity_6 = ~i_1;
    void item_80;
    int32_t source_5;
    int32_t dest_8;
    dest_8 = memcpy(&item_80, dest_6 - entity_6, entity_6 & 0xfffffffc);
    memcpy(dest_8, source_5, entity_6 & 3);
    char* data_4 = Sys_OpenFileStream_7(nullptr, 0, &item_80);
    void* dest_9 = context;
    *data_4 = g_547290[0];
    data_4[4] = g_547290[4][0];
    int32_t i_2 = 0xffffffff;

    while (i_2)
    {
        bool flag_2_1 = 0 != *dest_9;
        dest_9 += 1;
        i_2 -= 1;

        if (!flag_2_1)
            break;
    }

    int32_t entity_12 = ~i_2;
    void item_100;
    int32_t source_7;
    int32_t dest_11;
    dest_11 = memcpy(&item_100, dest_9 - entity_12, entity_12 & 0xfffffffc);
    memcpy(dest_11, source_7, entity_12 & 3);
    char* data_6 = Sys_OpenFileStream_7(nullptr, 0, &item_100);
    *data_6 = g_547288[0];
    data_6[4] = g_547288[4][0];
    QScript_Cleanup(&item_80);
    QScript_Cleanup(&item_100);

    if (QScript_ParseAndAssemble(&item_100, data_2))
    {
        Qvm_Cleanup(data_2);
        void* saved_edi_3 = context;
        return Sys_FreeMemory_22("An error occured when compiling file: %s");
    }

    if (QScript_Assemble(&item_80, &item_100))
    {
        void* saved_esi_3 = context;
        return Sys_FreeMemory_22("An error occured when compiling file: %s");
    }

    QScript_Cleanup(&item_100);
    return Qvm_Cleanup(data_2);
}
