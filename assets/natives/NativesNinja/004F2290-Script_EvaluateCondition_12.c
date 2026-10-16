#include "004F2290-Script_EvaluateCondition_12.h"
/* 0x004f2290 Script_EvaluateCondition_12 full linked: callers=10 callees=1 */
void sub_4f2290(void* a1)

{
    void* ebx = a1;
    int32_t* i = *(ebx + 8);

    if (!*i || !i)
        return;

    do
    {
        int32_t eax_1 = 0;
        int32_t ecx_1 = 0;
        eax_1 = g_a76c03;
        a1 = nullptr;
        ecx_1 = i[7];
        void* eax = *(((eax_1 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (eax)
            eax(i, &a1);

        if (!eax || !a1)
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
            i = *(ebx + 8);

            if (!*i)
                break;
        }
    } while (i);
}
