#include "Qvm_Execute.h"
int32_t Qvm_Execute(void* a1)

// Sig: int Qvm_Execute(void* qvm)
// Note: EXECUTES a loaded QVM script program (the interpreter entry - despite
// the old analyst label QvmRead). On runtime failure reports "Error in QVM
// program: %s" / "An error occured in script file: %s". Param: qvm = pointer
// from Qvm_Load. RETURNS script result value.
{
    g_a965a4 = 0;
    g_a965a8 = 0;
    int32_t* valA = *(a1 + 0x8c);
    int32_t valA1;

    if (!valA)
    {
        void v_850;
        void v_830;
        void v_800;
        Script_BufInit(&v_830, &v_850, &v_800, 0x800);
        Sys_ResolveSymbol_30(&v_850, *(a1 + 0x80), *(a1 + 0x84));

        while (!g_a965a0 || !g_a965a4)
        {
            void* v_854 = nullptr;
            void v_828;

            if (!Sys_CloseFileStream_31(&v_830, &v_828))
                break;

            if (Sys_UnexpectedEndOfFile(&v_830, &v_854))
            {
                Sys_UnknownBlockType_2(v_854);
                Sys_UnknownBlockType(v_854);

                if (!g_a965a8)
                    continue;
            }

            if (g_a96598)
            {
                void* v_860_6 = a1;
                Sys_FreeMemory_22("An error occured in script file: %s");
            }

            g_a965a8 = 0;
            break;
        }

        valA1 = Sys_PopStack_30(&v_850);
    }
    else
    {
        valA1 = Sys_UndefinedError(valA);

        if (valA1)
        {
            int32_t v_860_2 = *(a1 + 0x8c) + 0x268;
            void* v_864_1 = a1;
            int32_t valA4 = Sys_FreeMemory_22("Error in QVM program: %s\r\n%s");
            g_a965a4 = 0;
            return valA4;
        }
    }

    g_a965a4 = 0;
    return valA1;
}
