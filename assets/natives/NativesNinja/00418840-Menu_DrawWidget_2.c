#include "00418840-Menu_DrawWidget_2.h"
/* 0x00418840 Menu_DrawWidget_2 full linked: callers=2 callees=3 */
int32_t Menu_DrawWidget_2(void* a1, void* a2)

{
    int32_t eax = Menu_PlayMusic_13();
    int16_t var_c = eax;
    eax = *(a2 + 0x1c);
    char eax_1 = TaskType_IsDerivedFrom(eax, var_c);

    if (eax_1)
    {
        eax_1 = *(a2 + 0x4c);

        if (eax_1)
        {
            *(a1 + (*(a1 + 0xbc) << 2) + 0x3c) = a2;
            *(a1 + 0xbc) += 1;
            return a1;
        }
    }

    int32_t* i = *(a2 + 8);

    if (*i && i)
    {
        do
        {
            eax_1 = Menu_DrawWidget_2(a1, i);
            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);
    }

    return eax_1;
}
