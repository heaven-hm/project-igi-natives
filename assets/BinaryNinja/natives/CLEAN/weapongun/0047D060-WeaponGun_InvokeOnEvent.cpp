// IGI native provenance: WeaponGun_InvokeOnEvent - 0x0047D060 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047D060-WeaponGun_InvokeOnEvent.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponGun_InvokeOnEvent.h"

void* WeaponGun_InvokeOnEvent(void* arg1, int32_t arg2)

{
    void* result = arg1;
    void* context_val = *(result + 0xe130);

    if (context_val)
    {
        uint32_t eax_1 = QObj_OnEvent();
        int32_t ecx_1 = 0;
        ecx_1 = *(context_val + 0x1c);
        result = *(((eax_1 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (result)
            return result(context_val, arg2);
    }

    return result;
}
