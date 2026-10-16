#include "004BAFD0-Sys_ReadFileBlock_26.h"
/* 0x004bafd0 Sys_ReadFileBlock_26 full linked: callers=2 callees=4 */
void** sub_4bafd0(void* a1, char* a2)

{
    int32_t eax;
    int32_t ecx;
    int32_t edx;
    int32_t* edi = sub_4bafa0(eax, edx, ecx, a1, a2);

    if (!edi)
        edi = sub_4bae00(a1, a2);

    void** result = Mem_Alloc(0x10, 4);
    result[1] = 0;
    *result = nullptr;
    sub_4af8f0(&edi[2], result);
    return result;
}
