#include "HumanPlayer_TakeDamage_7.h"
int32_t HumanPlayer_TakeDamage_7(void* a1, void* a2)

{
    int32_t srcS = *(a2 + 0x4ec);
    int32_t v_38 = 0;
    void* v_3c = a2 + 0x4c4;
    void* valA1 = Table_GetAt(v_3c, v_38);
    *(a2 + 0x4d0) = 0;
    void* v_24 = a2;
    void v_20;
    memcpy(&v_20, srcS + 0x208, 0x1c);
    char v_3 = g_56e214;
    uint32_t valA3 = AI_SelectTarget_17();
    int32_t valA4 = 0;
    valA4 = *(valA1 + 0x1c);
    (*(((valA3 * 0x180 + valA4) << 2) + &g_a96ae0))(valA1, &v_24);
    char result;

    if (!result)
        return result;

    *(a2 + 0x4d0) = 1;
    int32_t tmpD3 = *(a1 + 0x10);
    *(a1 + 0x10) = 1;
    void* objC2 = *(a1 + 4);
    *(a1 + 0xc) = tmpD3;
    v_3c = a1;
    int32_t objC3 = *(objC2 + 4);
    *(a1 + 0x14) = objC3;
    return objC3(v_3c, a2);
}
