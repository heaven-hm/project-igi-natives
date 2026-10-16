#include "00424220-Menu_LeaveMenus_13.h"
/* 0x00424220 Menu_LeaveMenus_13 full linked: callers=1 callees=2 */
void* Menu_LeaveMenus_13(void* a1, void* a2)

{
    int32_t eax = Menu_UpdateLanguage_3();
    void* esi = a2;

    while (*(esi + 0x1c) != eax)
    {
        esi = *(esi + 0x14);

        if (!esi)
        {
            *(a1 + 0x44) = 0;
            return eax;
        }

        eax = Menu_UpdateLanguage_3();
    }

    *(a1 + 0x44) = esi;
    return a1;
}
