#include "004B85B0-Qvm_Execute.h"
/* 0x004b85b0 Qvm_Execute full linked: callers=19 callees=10 */
int32_t Qvm_Execute(void* a1)

// Sig: int Qvm_Execute(void* qvm)
// Note: EXECUTES a loaded QVM script program (the interpreter entry - despite
// the old analyst label QvmRead). On runtime failure reports "Error in QVM
// program: %s" / "An error occured in script file: %s". Param: qvm = pointer
// from Qvm_Load. RETURNS script result value.
{
    g_a965a4 = 0;
    g_a965a8 = 0;
    int32_t* eax = *(a1 + 0x8c);
    int32_t eax_1;

    if (!eax)
    {
        void var_850;
        void var_830;
        void var_800;
        Script_BufInit(&var_830, &var_850, &var_800, 0x800);
        sub_4bf1c0(&var_850, *(a1 + 0x80), *(a1 + 0x84));

        while (!g_a965a0 || !g_a965a4)
        {
            void* var_854 = nullptr;
            void var_828;

            if (!sub_4bfc70(&var_830, &var_828))
                break;

            if (sub_4bf1f0(&var_830, &var_854))
            {
                sub_4bfa80(var_854);
                sub_4bf8f0(var_854);

                if (!g_a965a8)
                    continue;
            }

            if (g_a96598)
            {
                void* var_860_6 = a1;
                sub_4b7e10("An error occured in script file: %s");
            }

            g_a965a8 = 0;
            break;
        }

        eax_1 = sub_4befc0(&var_850);
    }
    else
    {
        eax_1 = sub_4bd080(eax);

        if (eax_1)
        {
            int32_t var_860_2 = *(a1 + 0x8c) + 0x268;
            void* var_864_1 = a1;
            int32_t eax_4 = sub_4b7e10("Error in QVM program: %s\r\n%s");
            g_a965a4 = 0;
            return eax_4;
        }
    }

    g_a965a4 = 0;
    return eax_1;
}
