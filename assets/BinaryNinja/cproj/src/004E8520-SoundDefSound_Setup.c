#include "gi_platform.h"
#include "004E8520-SoundDefSound_Setup.h"
int32_t* SoundDefSound_Setup(void* a1, int32_t* a2)

{
    if ((*(int32_t*)(uintptr_t)(a1 + 0xdd)) && a2[1])
        return a2;

    if ((*(int32_t*)(uintptr_t)(a1 + 0x2c)) & 2)
    {
        double* valA3 = SoundSysMicrophone_Action(*a2);
        double v_8_1 = (*(int32_t*)(uintptr_t)(a1 + 0xd8)) * 4096.0f;
        int32_t* valA1;
        long double fp0_1;
        fp0_1 = Sys_PushStack_11(valA3, a1 + 0x88);
        long double x87_r6_2 = v_8_1 * v_8_1;
        x87_r6_2 - fp0_1;
        valA1 = (x87_r6_2 < fp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, fp0_1) ? 1 : 0) << 0xa
            | (x87_r6_2 == fp0_1 ? 1 : 0) << 0xe;

        if (*(&valA1 + 1) & 1)
            return valA1;
    }

    int32_t valA4 = (*(int32_t*)(uintptr_t)(a1 + 0x12c));

    if (valA4 != (*(int32_t*)(uintptr_t)(a1 + 0x24)))
    {
        int32_t tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 0x128));
        (*(int32_t*)(uintptr_t)(a1 + 0x24)) = valA4;
        (*(int32_t*)(uintptr_t)(a1 + 0x20)) = tmpD1;
        (*(int32_t*)(uintptr_t)(a1 + 0x28)) = 0;
        (*(int32_t*)(uintptr_t)(a1 + 0x120)) = 0;
    }

    valA4 = (*(int32_t*)(uintptr_t)(a1 + 0xdc));
    char f0_1 = valA4;
    valA4 = -(valA4);
    (*(int32_t*)(uintptr_t)(a1 + 0x2c)) = ((valA4 - valA4) & 0x10) | ((*(int32_t*)(uintptr_t)(a1 + 0x2c)) & 0xffffffef);
    return SoundSys_Update3DPosition_8(a1 + 0x20);
}
