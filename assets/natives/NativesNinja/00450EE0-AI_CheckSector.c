#include "00450EE0-AI_CheckSector.h"
/* 0x00450ee0 AI_CheckSector full linked: callers=2 callees=1 */
int32_t* sub_450ee0(void* a1)

{
    int32_t* result = *(a1 + 0x8fc);
    int32_t* result_1 = *result;

    if (result_1)
    {
        while (!(result[4] & 1))
        {
            sub_450ff0(a1, result);
            result = result_1;
            result_1 = *result_1;

            if (!result_1)
                break;
        }
    }

    return result;
}
