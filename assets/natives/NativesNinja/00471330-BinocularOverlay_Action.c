#include "00471330-BinocularOverlay_Action.h"
/* 0x00471330 BinocularOverlay_Action full linked: callers=0 callees=8 */
int32_t* sub_471330(int80_t a1 @ st0, void* a2)

{
    if (sub_4f16c0(a2 + 0x24))
    {
        sub_4f16e0(a2 + 0x24, a2);
        *(a2 + 0x74) = a1;
    }

    int32_t* eax_4 = *(a2 + 0x20);

    if (!*(a2 + 0x74))
    {
        if (eax_4)
        {
            eax_4 = *eax_4;

            if (eax_4)
            {
                QTask_FindType(eax_4);
                eax_4 = Qtask_UpdateList(*(a2 + 0x20));
                *(a2 + 0x20) = 0;
            }
        }
    }
    else if (!eax_4)
    {
        int32_t* eax_8 =
            QTask_LinkEventHandler_2(sub_472600(sub_485320(*(Level_LoadLevel_6() + 0x44))));
        *(a2 + 0x20) = eax_8;
        return eax_8;
    }

    return eax_4;
}
