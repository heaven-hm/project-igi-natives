#include "QTask_InitContext_2.h"
void* QTask_InitContext_2(void* a1, int32_t a2, int32_t a3)

{
    void* result = a1;
    int32_t* i = *(result + 8);

    if (*i && i)
    {
        do
        {
            result = QTask_ProcessQueue_2(i, a2, a3);
            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);
    }

    return result;
}
