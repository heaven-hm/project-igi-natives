// IGI native provenance: Qvm_Execute - 0x004B85B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B85B0-Qvm_Execute.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qvm_Execute.h"
int32_t Qvm_Execute(void* context)

// Sig: int Qvm_Execute(void* qvm)
// Note: EXECUTES a loaded QVM script program (the interpreter entry - despite
// the old analyst label QvmRead). On runtime failure reports "Error in QVM
// program: %s" / "An error occured in script file: %s". Param: qvm = pointer
// from Qvm_Load. RETURNS script result value.
{
    g_a965a4 = 0;
    g_a965a8 = 0;
    int32_t* data_val = *(context + 0x8c);
    int32_t data_1;

    if (!data_val)
    {
        void item_850;
        void item_830;
        void item_800;
        Script_BufInit(&item_830, &item_850, &item_800, 0x800);
        Sys_ResolveSymbol_30(&item_850, *(context + 0x80), *(context + 0x84));

        while (!g_a965a0 || !g_a965a4)
        {
            void* item_854 = nullptr;
            void item_828;

            if (!Sys_CloseFileStream_31(&item_830, &item_828))
                break;

            if (Sys_UnexpectedEndOfFile(&item_830, &item_854))
            {
                Sys_UnknownBlockType_2(item_854);
                Sys_UnknownBlockType(item_854);

                if (!g_a965a8)
                    continue;
            }

            if (g_a96598)
            {
                void* item_860_6 = context;
                Sys_FreeMemory_22("An error occured in script file: %s");
            }

            g_a965a8 = 0;
            break;
        }

        data_1 = Sys_PopStack_30(&item_850);
    }
    else
    {
        data_1 = Sys_UndefinedError(data_val);

        if (data_1)
        {
            int32_t item_860_2 = *(context + 0x8c) + 0x268;
            void* item_864_1 = context;
            int32_t data_4 = Sys_FreeMemory_22("Error in QVM program: %s\r\n%s");
            g_a965a4 = 0;
            return data_4;
        }
    }

    g_a965a4 = 0;
    return data_1;
}
