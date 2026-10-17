// IGI native provenance: WeaponGun_InvokeGetList_478540 - 0x00478540 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00478540-WeaponGun_InvokeGetList_478540.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_InvokeGetList_478540.h"

struct status_msg* WeaponGun_InvokeGetList_478540(uint32_t arg1)

{
    DynObj_QtasklistIsFull(Qtask_GetList(), arg1);
    DynObj_LookupHashItem_6(Level_StartMission_4(), arg1, 0);
    *(arg1 + 0xf1) = 1;
    *(arg1 + 0x100) = 0;
    *(arg1 + 0x124) = 0;
    *(arg1 + 0x104) = 0;
    Weapon_UpdateZoom_5(arg1);
    void* eax_2 = *(arg1 + 0x14);
    *(arg1 + 0xfc) = 0;
    *(arg1 + 0x144) = 0xfffffffe;
    *(arg1 + 0x138) = 0xffffffff;
    *(arg1 + 0x194) = 0;
    *(arg1 + 0x190) = 0;
    *(arg1 + 0x128) = 0;
    *(arg1 + 0x12c) = 0;
    *(arg1 + 0x130) =
        QTask_LinkEventHandler_2(Weapon_EjectMagazine_6(Script_FormatString(), arg1, eax_2));
    struct status_msg* result = CarGun_Create(nullptr, arg1);
    *(arg1 + 0xe8) = result;
    return result;
}
