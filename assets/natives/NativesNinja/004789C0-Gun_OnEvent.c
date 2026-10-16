#include "004789C0-Gun_OnEvent.h"
/* 0x004789c0 Gun_OnEvent full linked: callers=0 callees=9 */
int32_t* sub_4789c0(void* a1)

{
    int32_t eax = *(a1 + 0x124);
    *(a1 + 0xf4) = 0;
    *(a1 + 0xf8) = eax;
    Qhash_Init(1);
    *(a1 + 0x100) = sub_4b8770(a1 + 0x104);
    Qhash_Reset();
    int32_t* result = HumanPlayer_CheckCollision_10(*(a1 + 0x100));
    *(a1 + 0x128) = result;

    if (!result)
    {
        *(a1 + 0x12c) = result;
        return result;
    }

    *(a1 + 0x12c) = sub_47cd70(result[0x18f]);
    void* eax_4 = sub_4cec10(&result[0x187]);

    if (eax_4)
        sub_4c48d0(a1, eax_4);

    void* eax_5 = *(a1 + 0xe8);

    if (eax_5)
        QTask_CleanupTypes(eax_5);

    return sub_4c4950(*(a1 + 0xe8), a1, a1);
}
