#include "Script_EvaluateCondition_12.h"
void Script_EvaluateCondition_12(void* a1)

{
    void* ctxB = a1;
    int32_t* i = *(ctxB + 8);

    if (!*i || !i)
        return;

    do
    {
        int32_t valA1 = 0;
        int32_t objC1 = 0;
        valA1 = g_a76c03;
        a1 = nullptr;
        objC1 = i[7];
        void* valA = *(((valA1 * 0x180 + objC1) << 2) + &g_a96ae0);

        if (valA)
            valA(i, &a1);

        if (!valA || !a1)
        {
            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        }
        else
        {
            QTask_FindType(i);
            i = *(ctxB + 8);

            if (!*i)
                break;
        }
    } while (i);
}
