#include "00451380-AI_UpdatePatrol_3.h"
/* 0x00451380 AI_UpdatePatrol_3 full linked: callers=23 callees=3 */
int32_t sub_451380(void* a1, void* a2)

{
    memcpy(a1, sub_4c3440(**(*(a2 + 0x3aa8) + 0xc)), 0x18);
    char result = sub_463180(**(*(a2 + 0x3aa8) + 0xc));
    long double x87_r7 = *(a1 + 0x10);

    if (!result)
    {
        *(a1 + 0x10) = x87_r7 + 2048.0;
        return result;
    }

    *(a1 + 0x10) = x87_r7 + 1024.0;
    return result;
}
