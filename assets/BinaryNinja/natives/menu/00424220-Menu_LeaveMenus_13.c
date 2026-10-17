// Original IGI.EXE function: Menu_LeaveMenus_13 (VA 0x00424220; static CFG gate PASS, CFG score 1.000).
#include "Menu_LeaveMenus_13.h"
void* Menu_LeaveMenus_13(void* a1, void* a2)

{
    int32_t valA = Menu_UpdateLanguage_3();
    void* srcS = a2;

    while (*(srcS + 0x1c) != valA)
    {
        srcS = *(srcS + 0x14);

        if (!srcS)
        {
            *(a1 + 0x44) = 0;
            return valA;
        }

        valA = Menu_UpdateLanguage_3();
    }

    *(a1 + 0x44) = srcS;
    return a1;
}
