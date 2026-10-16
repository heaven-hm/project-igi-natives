#include "00477600-GunClip_LoadParameters.h"
/* 0x00477600 GunClip_LoadParameters full linked: callers=0 callees=8 */
int32_t sub_477600(void* a1, int32_t* a2)

{
    sub_4c1790(Qtask_GetList(), a1);
    void* eax_2 = sub_4cec10(*a2);

    if (eax_2)
    {
        memcpy(a1 + 0xf0, &a2[8], 0x18);
        memcpy(a1 + 0x108, &a2[0x18], 0x28);
        sub_4c5710(a2[1], a1, eax_2);
        memcpy(a1 + 0x70, &a2[0xe], 0x28);
        int32_t result = a2[0x23];
        *(a1 + 0x138) = result;
        *(a1 + 0x130) = a2[0x22];
        *(a1 + 0x13c) = 0xffffffff;
        return result;
    }

    int32_t __saved_esi_1 = *a2;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
