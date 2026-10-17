// IGI native provenance: Gun_OnEvent - 0x004789C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004789C0-Gun_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Gun_OnEvent.h"
int32_t* Gun_OnEvent(void* context)

{
    int32_t data_val = *(context + 0x124);
    *(context + 0xf4) = 0;
    *(context + 0xf8) = data_val;
    Qhash_Init(1);
    *(context + 0x100) = Sys_CheckHeap_22(context + 0x104);
    Qhash_Reset();
    int32_t* result = HumanPlayer_CheckCollision_10(*(context + 0x100));
    *(context + 0x128) = result;

    if (!result)
    {
        *(context + 0x12c) = result;
        return result;
    }

    *(context + 0x12c) = Weapon_CheckAmmo_7(result[0x18f]);
    void* data_4 = DynObj_Missing(&result[0x187]);

    if (data_4)
        DynObj_CreateMagicObject_5(context, data_4);

    void* data_5 = *(context + 0xe8);

    if (data_5)
        QTask_CleanupTypes(data_5);

    return Car_GunCreate(*(context + 0xe8), context, context);
}
