#include "00477A70-GunClip_Cleanup.h"
/* 0x00477a70 GunClip_Cleanup full linked: callers=0 callees=7 */
int32_t* sub_477a70(void* a1, int32_t* a2)

{
    void* eax_1 = sub_4cec10(*a2);

    if (eax_1)
    {
        memcpy(a1 + 0xf0, &a2[8], 0x18);
        memcpy(a1 + 0x108, &a2[0x18], 0x28);
        sub_4c5710(a2[1], a1, eax_1);
        *(a1 + 0xec) = 0;
        memcpy(a1 + 0x70, &a2[0xe], 0x28);
        *(a1 + 0x138) = a2[0x23];
        int32_t ebp_1 = a2[0x22];
        *(a1 + 0x130) = ebp_1;
        return sub_4c4950(a1, a1, ebp_1);
    }

    int32_t __saved_ebx_1 = *a2;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
