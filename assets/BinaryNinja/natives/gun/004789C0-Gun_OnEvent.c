// Original IGI.EXE function: Gun_OnEvent (VA 0x004789C0; static CFG gate PASS, CFG score 1.000).
#include "Gun_OnEvent.h"
int32_t* Gun_OnEvent(void* a1)

{
    int32_t valA = *(a1 + 0x124);
    *(a1 + 0xf4) = 0;
    *(a1 + 0xf8) = valA;
    Qhash_Init(1);
    *(a1 + 0x100) = Sys_CheckHeap_22(a1 + 0x104);
    Qhash_Reset();
    int32_t* result = HumanPlayer_CheckCollision_10(*(a1 + 0x100));
    *(a1 + 0x128) = result;

    if (!result)
    {
        *(a1 + 0x12c) = result;
        return result;
    }

    *(a1 + 0x12c) = Weapon_CheckAmmo_7(result[0x18f]);
    void* valA4 = DynObj_Missing(&result[0x187]);

    if (valA4)
        DynObj_CreateMagicObject_5(a1, valA4);

    void* valA5 = *(a1 + 0xe8);

    if (valA5)
        QTask_CleanupTypes(valA5);

    return Car_GunCreate(*(a1 + 0xe8), a1, a1);
}
