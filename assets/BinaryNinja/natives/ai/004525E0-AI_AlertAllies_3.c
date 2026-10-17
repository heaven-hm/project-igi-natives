// Original IGI.EXE function: AI_AlertAllies_3 (VA 0x004525E0; static CFG gate PASS, CFG score 1.000).
#include "AI_AlertAllies_3.h"
void* AI_AlertAllies_3(int32_t a1)

{
    void* srcS = *(a1 + 0x14);
    int16_t valA = AI_UpdateOrders_16();
    char valA1;

    if (*(srcS + 0x1c) != valA)
    {
        int16_t valA2 = AI_SelectTarget_12();

        if (*(srcS + 0x1c) != valA2)
        {
            int16_t valA3 = AI_AlertAllies_7();

            if (*(srcS + 0x1c) != valA3)
            {
                int16_t valA4 = AI_FireWeapon_9();

                if (*(srcS + 0x1c) != valA4)
                    valA1 = a1;
                else
                    valA1 = *(srcS + 0xd00);
            }
            else
                valA1 = *(srcS + 0xd00);
        }
        else
            valA1 = *(srcS + 0xd00);
    }
    else
        valA1 = *(srcS + 0xd00);

    int32_t objC = 0;
    objC = !valA1;
    int32_t v_c = objC;
    return AI_WriteChannel(a1, 0, objC);
}
