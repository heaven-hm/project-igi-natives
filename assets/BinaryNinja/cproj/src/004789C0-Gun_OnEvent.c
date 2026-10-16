#include "gi_platform.h"
#include "004789C0-Gun_OnEvent.h"
int32_t* Gun_OnEvent(void* a1)

{
    int32_t valA = (*(int32_t*)(uintptr_t)(a1 + 0x124));
    (*(int32_t*)(uintptr_t)(a1 + 0xf4)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0xf8)) = valA;
    Qhash_Init(1);
    (*(int32_t*)(uintptr_t)(a1 + 0x100)) = Sys_CheckHeap_22(a1 + 0x104);
    Qhash_Reset();
    int32_t* result = HumanPlayer_CheckCollision_10((*(int32_t*)(uintptr_t)(a1 + 0x100)));
    (*(int32_t*)(uintptr_t)(a1 + 0x128)) = result;

    if (!result)
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x12c)) = result;
        return result;
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x12c)) = Weapon_CheckAmmo_7(result[0x18f]);
    void* valA4 = DynObj_Missing(&result[0x187]);

    if (valA4)
        DynObj_CreateMagicObject_5(a1, valA4);

    void* valA5 = (*(int32_t*)(uintptr_t)(a1 + 0xe8));

    if (valA5)
        QTask_CleanupTypes(valA5);

    return Car_GunCreate((*(int32_t*)(uintptr_t)(a1 + 0xe8)), a1, a1);
}
