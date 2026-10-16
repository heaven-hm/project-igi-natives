#include "CutScene_Cleanup.h"
int32_t* CutScene_Cleanup(void* a1)

{
    int32_t* valA = *(a1 + 0x260);

    if (valA)
    {
        QTask_FindType(valA);
        *(a1 + 0x260) = 0;
    }

    int32_t* valA1 = *(a1 + 0x25c);

    if (valA1)
    {
        QTask_FindType(valA1);
        *(a1 + 0x25c) = 0;
    }

    int32_t* valA2 = *(a1 + 0x264);

    if (valA2)
    {
        QTask_FindType(valA2);
        *(a1 + 0x264) = 0;
    }

    int32_t* result = *(a1 + 0x268);

    if (result)
    {
        result = QTask_FindType(result);
        *(a1 + 0x268) = 0;
    }

    return result;
}
