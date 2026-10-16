#include "GunCABarrel_Cleanup.h"
void* GunCABarrel_Cleanup(void* a1)

{
    void* srcS = *(*(a1 + 0x14) + 0x20);
    void* result = SoundSys_InitSoundSys_12();

    if (!*(result + 0x5c))
        return result;

    char valA1 = Weapon_UpdateBarrel_5();
    void* tmpD1 = *(srcS + 0x14);
    int32_t valA3 = 0;
    valA3 = *(tmpD1 + 0x1c);
    void* v_50;

    if (*(((valA1 * 0x180 + valA3) << 2) + &g_a96ae0))
    {
        uint32_t valA6 = Weapon_UpdateBarrel_5();
        int32_t tmpD2 = 0;
        tmpD2 = *(tmpD1 + 0x1c);
        int32_t valA7 = *(((valA6 * 0x180 + tmpD2) << 2) + &g_a96ae0);
        void v_40;
        v_50 = &v_40;
        valA7(tmpD1, v_50);
        memcpy(a1 + 0x20, &v_40, 0x18);
        void v_28;
        memcpy(a1 + 0x70, &v_28, 0x28);
    }

    uint32_t valA9 = DynObj_LookupHashItem_5();
    int32_t __saved_edi_1 = 0;
    v_50 = a1;
    return (*((valA9 << 2) + &g_a982e0))(v_50, __saved_edi_1);
}
