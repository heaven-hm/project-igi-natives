#include "004F9B80-Script_SpawnNewTask_24.h"
/* 0x004f9b80 Script_SpawnNewTask_24 full linked: callers=2 callees=8 */
int32_t* sub_4f9b80(void* a1, int32_t a2, int32_t a3, int32_t a4)

{
    Qhash_Init(1);
    int32_t* result = Mem_Alloc(0x18, 4);
    Qhash_Reset();
    result[2] = a2;
    result[3] = a3;
    result[4] = a4;
    result[5] = a1;
    result[1] = 0;
    *result = 0;
    sub_4af8f0(a1 + 0x70, result);
    sub_4f9c10(sub_4f9720(a1, result[2]), result);
    sub_4f9c10(sub_4f9720(a1, result[3]), result);
    *(a1 + 0x60) += 1;
    return result;
}
