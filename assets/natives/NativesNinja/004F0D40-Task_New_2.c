#include "004F0D40-Task_New_2.h"
/* 0x004f0d40 Task_New_2 full linked: callers=1 callees=9 */
int32_t __convention("regparm") sub_4f0d40(int32_t a1, int32_t a2, int32_t a3, void* a4, int32_t a5)

{
    int32_t var_4 = a3;

    for (int32_t* i = &g_a71890; i < &g_a75890; i = &i[1])
    {
        int32_t* eax = *i;

        if (eax)
        {
            Qtask_UpdateList(eax);
            *i = 0;
        }
    }

    Script_SetSymbolContext("Task_New", g_a758a4);
    int32_t* eax_2 = Qvm_Load(a4);

    if (eax_2)
    {
        Script_Init(a4, 1, 0, 0);
        Qvm_Execute(eax_2);
        Qvm_Cleanup(eax_2);
        *(&var_4 + 3) = 1;
        int32_t eax_3 = sub_4f1a70();
        QTask_ProcessQueue_2(g_a758a4, eax_3, (&var_4 + 3));
        *(g_a758a4 + 0x24) = 0;
        *(g_a758a4 + 0x28) = 0;
        *(g_a758a4 + 0x2c) = a5;
        int32_t result = 0x3e8 / a5;
        *(g_a758a4 + 0x30) = result;
        return result;
    }

    void* var_10_2 = a4;
    Error_Show("Level_Load(): Couldn't load script: %s");

    while (true)
        /* nop */
}
