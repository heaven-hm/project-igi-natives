#include "QTask_CleanupTypes.h"
int32_t* QTask_CleanupTypes(void* a1)

{
    int32_t* result = *(a1 + 8);

    if (*result && result)
    {
        int32_t* i;

        do
        {
            int32_t* objC1 = *result;

            if (!objC1)
                i = nullptr;
            else
            {
                int32_t srcS1 = *objC1;
                int32_t srcS2 = -(srcS1);
                i = (srcS2 - srcS2) & objC1;
            }

            QTask_FindType(result);
            result = i;
        } while (i);
    }

    return result;
}
