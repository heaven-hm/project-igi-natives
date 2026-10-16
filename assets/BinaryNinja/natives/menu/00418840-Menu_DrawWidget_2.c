#include "Menu_DrawWidget_2.h"
int32_t Menu_DrawWidget_2(void* a1, void* a2)

{
    int32_t valA = Menu_PlayMusic_13();
    int16_t v_c = valA;
    valA = *(a2 + 0x1c);
    char valA1 = TaskType_IsDerivedFrom(valA, v_c);

    if (valA1)
    {
        valA1 = *(a2 + 0x4c);

        if (valA1)
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
            valA1 = Menu_DrawWidget_2(a1, i);
            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);
    }

    return valA1;
}
