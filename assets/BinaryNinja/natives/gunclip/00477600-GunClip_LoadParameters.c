// Original IGI.EXE function: GunClip_LoadParameters (VA 0x00477600; static CFG gate PASS, CFG score 0.875).
#include "GunClip_LoadParameters.h"
int32_t GunClip_LoadParameters(void* context, int32_t* param_2)

{
    DynObj_QtasklistIsFull(Qtask_GetList(), context);
    void* data_2 = DynObj_Missing(*param_2);

    if (data_2)
    {
        memcpy(context + 0xf0, &param_2[8], 0x18);
        memcpy(context + 0x108, &param_2[0x18], 0x28);
        DynObj_LookupHashItem_6(param_2[1], context, data_2);
        memcpy(context + 0x70, &param_2[0xe], 0x28);
        int32_t result = param_2[0x23];
        *(context + 0x138) = result;
        *(context + 0x130) = param_2[0x22];
        *(context + 0x13c) = 0xffffffff;
        return result;
    }

    int32_t saved_esi_1 = *param_2;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
