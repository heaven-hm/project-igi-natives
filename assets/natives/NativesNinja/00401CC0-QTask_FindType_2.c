#include "00401CC0-QTask_FindType_2.h"
/* 0x00401cc0 QTask_FindType_2 full linked: callers=6 callees=1 */
void* QTask_FindType_2(void* a1, int16_t a2)

{
    void* i;

    for (i = *(a1 + 0x14); i; i = *(i + 0x14))
    {
        int32_t ecx;
        ecx = *(i + 0x1c);
        char eax;
        eax = TaskType_IsDerivedFrom(ecx, a2);

        if (eax)
            break;
    }

    return i;
}
