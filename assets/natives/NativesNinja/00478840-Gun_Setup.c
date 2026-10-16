#include "00478840-Gun_Setup.h"
/* 0x00478840 Gun_Setup full linked: callers=0 callees=9 */
int32_t sub_478840(void* a1)

{
    sub_4c17c0(Qtask_GetList(), a1);
    sub_4788d0(a1);
    int32_t* eax_2 = **(a1 + 0x130);

    if (eax_2)
        sub_47b170(eax_2, 1);

    Qtask_UpdateList(*(a1 + 0x130));
    int32_t* eax_3 = *(a1 + 0x194);

    if (eax_3)
    {
        int32_t* edi_1 = *eax_3;
        Qtask_UpdateList(eax_3);

        if (edi_1)
            QTask_FindType(edi_1);
    }

    int32_t* eax_4 = *(a1 + 0x190);

    if (eax_4)
        Qtask_UpdateList(eax_4);

    return QTask_FindType(*(a1 + 0xe8));
}
