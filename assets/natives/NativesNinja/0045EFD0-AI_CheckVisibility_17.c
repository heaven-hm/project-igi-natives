#include "0045EFD0-AI_CheckVisibility_17.h"
/* 0x0045efd0 AI_CheckVisibility_17 full linked: callers=1 callees=6 */
int32_t* sub_45efd0(void* a1)

{
    int32_t* eax = *(a1 + 0x768);

    if (eax)
        Qtask_UpdateList(eax);

    int32_t* eax_1 = *(a1 + 0x7b0);

    if (eax_1)
        Qtask_UpdateList(eax_1);

    int32_t* eax_2 = *(a1 + 0x7b4);

    if (eax_2)
        Qtask_UpdateList(eax_2);

    int32_t* eax_3 = *(a1 + 0x838);

    if (eax_3)
        Qtask_UpdateList(eax_3);

    int32_t* result = *(a1 + 0x83c);

    if (result)
        result = Qtask_UpdateList(result);

    int32_t* esi_1 = *(a1 + 0x840);

    if (!esi_1)
        return result;

    return Qtask_UpdateList(esi_1);
}
