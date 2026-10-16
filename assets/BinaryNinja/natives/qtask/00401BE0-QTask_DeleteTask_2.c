#include "QTask_DeleteTask_2.h"
int32_t* QTask_DeleteTask_2(void* a1, int16_t a2)

{
    int32_t* result = *(a1 + 8);

    for (int32_t* i = *result; i; i = *i)
    {
        if (result[7] == a2)
            return result;

        result = i;
    }

    return nullptr;
}
