#include "004F6520-CutScene_Cleanup.h"
/* 0x004f6520 CutScene_Cleanup full linked: callers=0 callees=4 */
int32_t* sub_4f6520(void* a1)

{
    int32_t* eax = *(a1 + 0x260);

    if (eax)
    {
        QTask_FindType(eax);
        *(a1 + 0x260) = 0;
    }

    int32_t* eax_1 = *(a1 + 0x25c);

    if (eax_1)
    {
        QTask_FindType(eax_1);
        *(a1 + 0x25c) = 0;
    }

    int32_t* eax_2 = *(a1 + 0x264);

    if (eax_2)
    {
        QTask_FindType(eax_2);
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
