// Original IGI.EXE function: Script_SpawnNewTask_23 (VA 0x004F92E0; static CFG gate FAIL, CFG score 0.667).
#include "Script_SpawnNewTask_23.h"
double* Script_SpawnNewTask_23(double* a1, void* a2)

{
    if (!*(a2 + 0x64))
    {
        memcpy(a1, a2 + 0x20, 0x18);
        return a2;
    }

    void* tmpD = *(a2 + 0x14);
    memcpy(a1, a2 + 0x20, 0x18);
    double v_20 = *(tmpD + 0x78) * a1[2] + *(tmpD + 0x74) * a1[1] + *(tmpD + 0x70) * *a1;
    double v_18 = *(tmpD + 0x84) * a1[2] + *(tmpD + 0x80) * a1[1] + *(tmpD + 0x7c) * *a1;
    double v_10 = *(tmpD + 0x90) * a1[2] + *(tmpD + 0x8c) * a1[1] + *(tmpD + 0x88) * *a1;
    memcpy(a1, &v_20, 0x18);
    *a1 = *(tmpD + 0x20) + *a1;
    a1[1] = *(tmpD + 0x28) + a1[1];
    a1[2] = *(tmpD + 0x30) + a1[2];
    return a1;
}
