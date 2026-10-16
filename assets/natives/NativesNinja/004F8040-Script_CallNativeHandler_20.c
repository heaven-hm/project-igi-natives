#include "004F8040-Script_CallNativeHandler_20.h"
/* 0x004f8040 Script_CallNativeHandler_20 full linked: callers=1 callees=4 */
int32_t sub_4f8040(void* a1)

{
    int32_t edi = QHash_ValueGet();

    if (!edi)
        QHash_ValueSet();

    *(a1 + 0x2b48) = Mem_Alloc(0x320, 4);

    if (!edi)
        sub_4b0d50();

    int32_t i = 0;
    void* ecx = a1 + 0x2b4c;

    do
    {
        ecx += 4;
        int32_t edx_2 = *(a1 + 0x2b48) + i;
        i += 0x28;
        *(ecx - 4) = edx_2;
    } while (i < 0x320);

    int32_t result = g_a76c9c + 0x320;
    g_a76c9c = result;
    return result;
}
