#include "AI_FireWeapon_27.h"
int32_t* AI_FireWeapon_27(void* a1, void* a2)

{
    void* dstD = a1;
    AI_CheckSector_26(dstD);
    int32_t* result = nullptr;
    result = *(a2 + 0x1c);

    if (*((result << 2) + &g_a994e0))
    {
        uint32_t valA1 = AI_AlertAllies_27();
        int32_t tmpD1 = 0;
        tmpD1 = *(a2 + 0x1c);
        result = *(((valA1 * 0x180 + tmpD1) << 2) + &g_a96ae0);

        if (result)
        {
            uint32_t valA3 = AI_AlertAllies_27();
            int32_t objC4 = 0;
            objC4 = *(a2 + 0x1c);
            result = (*(((valA3 * 0x180 + objC4) << 2) + &g_a96ae0))(a2, &a1);
            result = a1;

            if (result)
            {
                result = QTask_LinkEventHandler_2(a2);
                *(dstD + 0x90) = result;
            }
        }
    }

    return result;
}
