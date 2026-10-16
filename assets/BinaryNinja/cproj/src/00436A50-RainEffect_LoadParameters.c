#include "gi_platform.h"
#include "00436A50-RainEffect_LoadParameters.h"
int32_t RainEffect_LoadParameters(void* a1)

{
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x30));
    long double f0 = (*(int32_t*)(uintptr_t)(a1 + 0x34));
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
        goto label_436a85;

    int32_t objC;

    if (!(*(int32_t*)(uintptr_t)(a1 + 0x20)))
    {
    label_436a92: ;
        int32_t v_8_2 = objC;
        int32_t v_c_2 = objC;
        (*(int32_t*)(uintptr_t)(a1 + 0x20)) = Display_CreateSurface_16(Level_StartMission_4(), g_57bd80 + 0x18, (*(int32_t*)(uintptr_t)(a1 + 0x24)),
            (*(int32_t*)(uintptr_t)(a1 + 0x28)) * 4096.0f, (*(int32_t*)(uintptr_t)(a1 + 0x2c)) * 4096.0f);
    }
    else
    {
        void* valA2 = Level_StartMission_4();
        objC = Display_OpenDevice_17((*(int32_t*)(uintptr_t)(a1 + 0x20)), valA2);
        (*(int32_t*)(uintptr_t)(a1 + 0x20)) = 0;
    label_436a85: ;
        if (!(*(int32_t*)(uintptr_t)(a1 + 0x20)))
            goto label_436a92;
    }
    Display_CheckCapabilities_17((*(int32_t*)(uintptr_t)(a1 + 0x20)), (*(int32_t*)(uintptr_t)(a1 + 0x30)));
    (*(int32_t*)(uintptr_t)(a1 + 0x34)) = (*(int32_t*)(uintptr_t)(a1 + 0x30));
    Script_Isexists(a1 + 0x38, a1);
    return 0;
}
