#include "004F92E0-Script_SpawnNewTask_23.h"
/* 0x004f92e0 Script_SpawnNewTask_23 full linked: callers=2 callees=3 */
double* sub_4f92e0(double* a1, void* a2)

{
    if (!*(a2 + 0x64))
    {
        memcpy(a1, a2 + 0x20, 0x18);
        return a2;
    }

    void* edx = *(a2 + 0x14);
    memcpy(a1, a2 + 0x20, 0x18);
    double var_20 = *(edx + 0x78) * a1[2] + *(edx + 0x74) * a1[1] + *(edx + 0x70) * *a1;
    double var_18 = *(edx + 0x84) * a1[2] + *(edx + 0x80) * a1[1] + *(edx + 0x7c) * *a1;
    double var_10 = *(edx + 0x90) * a1[2] + *(edx + 0x8c) * a1[1] + *(edx + 0x88) * *a1;
    memcpy(a1, &var_20, 0x18);
    *a1 = *(edx + 0x20) + *a1;
    a1[1] = *(edx + 0x28) + a1[1];
    a1[2] = *(edx + 0x30) + a1[2];
    return a1;
}
