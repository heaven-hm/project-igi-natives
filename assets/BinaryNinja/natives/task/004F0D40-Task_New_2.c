#include "Task_New_2.h"
int32_t __convention("regparm") Task_New_2(int32_t a1, int32_t a2, int32_t a3, void* a4, int32_t a5)

{
    int32_t v_4 = a3;

    for (int32_t* i = &g_a71890; i < &g_a75890; i = &i[1])
    {
        int32_t* valA = *i;

        if (valA)
        {
            Qtask_UpdateList(valA);
            *i = 0;
        }
    }

    Script_SetSymbolContext("Task_New", g_a758a4);
    int32_t* valA2 = Qvm_Load(a4);

    if (valA2)
    {
        Script_Init(a4, 1, 0, 0);
        Qvm_Execute(valA2);
        Qvm_Cleanup(valA2);
        *(&v_4 + 3) = 1;
        int32_t valA3 = Script_ParseEnumReal32_8();
        QTask_ProcessQueue_2(g_a758a4, valA3, (&v_4 + 3));
        *(g_a758a4 + 0x24) = 0;
        *(g_a758a4 + 0x28) = 0;
        *(g_a758a4 + 0x2c) = a5;
        int32_t result = 0x3e8 / a5;
        *(g_a758a4 + 0x30) = result;
        return result;
    }

    void* v_10_2 = a4;
    Error_Show("Level_Load(): Couldn't load script: %s");

    while (true)
        /* nop */
}
