#include "00401780-QTask_CleanupTypes.h"
/* 0x00401780 QTask_CleanupTypes full linked: callers=8 callees=1 */
int32_t* QTask_CleanupTypes(void* a1)

{
    int32_t* result = *(a1 + 8);

    if (*result && result)
    {
        int32_t* i;

        do
        {
            int32_t* ecx_1 = *result;

            if (!ecx_1)
                i = nullptr;
            else
            {
                int32_t esi_1 = *ecx_1;
                int32_t esi_2 = -(esi_1);
                i = (esi_2 - esi_2) & ecx_1;
            }

            QTask_FindType(result);
            result = i;
        } while (i);
    }

    return result;
}
