#include "gi_platform.h"
#include "00477A70-GunClip_Cleanup.h"
int32_t* GunClip_Cleanup(void* a1, int32_t* a2)

{
    void* valA1 = DynObj_Missing(*a2);

    if (valA1)
    {
        memcpy(a1 + 0xf0, &a2[8], 0x18);
        memcpy(a1 + 0x108, &a2[0x18], 0x28);
        DynObj_LookupHashItem_6(a2[1], a1, valA1);
        (*(int32_t*)(uintptr_t)(a1 + 0xec)) = 0;
        memcpy(a1 + 0x70, &a2[0xe], 0x28);
        (*(int32_t*)(uintptr_t)(a1 + 0x138)) = a2[0x23];
        int32_t flagP1 = a2[0x22];
        (*(int32_t*)(uintptr_t)(a1 + 0x130)) = flagP1;
        return Car_GunCreate(a1, a1, flagP1);
    }

    int32_t __saved_ebx_1 = *a2;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
