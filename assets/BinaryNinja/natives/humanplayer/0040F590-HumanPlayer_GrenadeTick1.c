#include "HumanPlayer_GrenadeTick1.h"
struct status_msg* HumanPlayer_GrenadeTick1(void* a1, void* a2)

{
    void* dstD = *(a2 + 0x4ec);
    void* valA1;
    int32_t objC;
    valA1 = Table_GetAt(a2 + 0x4c4, 0);
    int32_t tmpD;
    void* valA2 = HumanPlayer_LoadParameters_13(valA1, tmpD, objC, valA1);
    struct status_msg* result = *(dstD + 0x20c);

    if (result == 4)
    {
        void* objC1 = *(a2 + 0x4ec);
        *(a2 + 0x4d8) = 1;
        result = SoundSys_SetMasterVolume_7(objC1, "grenade_tick_1");
        *(a2 + 0x4e4) = result;
    }

    result = *(a2 + 0x4d8);

    if (result)
        *(a2 + 0x4e0) += 1;

    if (*(a1 + 8) & 1)
    {
        long double x87_r7_1 = *(a2 + 0x1c8);
        long double f0_1 = 0f;
        x87_r7_1 - f0_1;
        result = (x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
            result = Bones_PlayAnimation(dstD + 0x68, 0, *(valA2 + 0x688), 0, 0f);
            *(a1 + 0x14) = HumanPlayer_UpdateStamina_8;
        }
    }

    return result;
}
