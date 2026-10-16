#include "004FAEE0-Graph_Action.h"
/* 0x004faee0 Graph_Action full linked: callers=0 callees=5 */
int32_t* sub_4faee0(int32_t* a1)

{
    int32_t* edi = a1;
    void* esi = edi[1];
    a1 = *(esi + 0x58);
    void* eax_1 = *(esi + 0x6c);

    if (eax_1)
    {
        sub_4b0d10(eax_1);
        *(esi + 0x6c) = 0;
    }

    sub_4f9cd0(edi, &a1, 0);
    *(esi + 0x6c) = Mem_Alloc(sub_4f94d0(esi) * a1, 4);
    sub_4f96e0(esi, a1);
    int32_t* result = a1;
    *(esi + 0x58) = result;
    return result;
}
