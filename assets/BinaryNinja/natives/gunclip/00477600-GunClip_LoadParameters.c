// Original IGI.EXE function: GunClip_LoadParameters (VA 0x00477600; static CFG gate PASS, CFG score 0.875).
#include "GunClip_LoadParameters.h"
int32_t GunClip_LoadParameters(void* a1, int32_t* a2)

{
    DynObj_QtasklistIsFull(Qtask_GetList(), a1);
    void* valA2 = DynObj_Missing(*a2);

    if (valA2)
    {
        memcpy(a1 + 0xf0, &a2[8], 0x18);
        memcpy(a1 + 0x108, &a2[0x18], 0x28);
        DynObj_LookupHashItem_6(a2[1], a1, valA2);
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
