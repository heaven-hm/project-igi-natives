#include "gi_platform.h"
#include "004869B0-StatusScreen_LoadParameters.h"
struct status_msg* StatusScreen_OnLoad(void* a1)

{
    float v_10 = g_c28b44;
    long double x87_r7_1 = g_c28b48;
    g_5c8a48 = a1;
    int32_t v_18 = 0;
    float v_c = x87_r7_1;
    int32_t v_14 = 0;
    Display_SyncVSync_13(a1 + 0x20, 1);
    int32_t valA1;
    void* objC1;
    int32_t tmpD;
    valA1 = Display_CheckCapabilities_13(a1 + 0x20, &v_18);
    char* v_44 = "STATUSSCREEN:status.res";
    (*(int32_t*)(uintptr_t)(a1 + 0x70)) = Resource_Load(valA1, tmpD, objC1, nullptr);
    Sys_IlfFileCorruptS(a1 + 0x74, "STATUSSCREEN:cross.spr");
    Sys_IlfFileCorruptS(a1 + 0xec, "STATUSSCREEN:clip20.spr");
    Sys_IlfFileCorruptS(a1 + 0x104, "STATUSSCREEN:barrel6.spr");
    Sys_IlfFileCorruptS(a1 + 0x11c, "STATUSSCREEN:shell7.spr");
    Sys_IlfFileCorruptS(a1 + 0x134, "STATUSSCREEN:spl_grenade.spr");
    Sys_IlfFileCorruptS(a1 + 0x14c, "STATUSSCREEN:M16_alternative.spr");
    Sys_IlfFileCorruptS(a1 + 0xd4, "STATUSSCREEN:rocket.spr");
    Sys_IlfFileCorruptS(a1 + 0x8c, "STATUSSCREEN:powerbarbackground.spr");
    Sys_IlfFileCorruptS(a1 + 0xa4, "STATUSSCREEN:powerbar.spr");
    Sys_IlfFileCorruptS(a1 + 0x1c4, "STATUSSCREEN:ak47.spr");
    Sys_IlfFileCorruptS(a1 + 0x1dc, "STATUSSCREEN:binoculars.spr");
    Sys_IlfFileCorruptS(a1 + 0x1f4, "STATUSSCREEN:colt.spr");
    Sys_IlfFileCorruptS(a1 + 0x20c, "STATUSSCREEN:deserteagle.spr");
    Sys_IlfFileCorruptS(a1 + 0x224, "STATUSSCREEN:druganov.spr");
    Sys_IlfFileCorruptS(a1 + 0x23c, "STATUSSCREEN:flashgrenade.spr");
    Sys_IlfFileCorruptS(a1 + 0x254, "STATUSSCREEN:glock.spr");
    Sys_IlfFileCorruptS(a1 + 0x26c, "STATUSSCREEN:health.spr");
    Sys_IlfFileCorruptS(a1 + 0x284, "STATUSSCREEN:jackhammer.spr");
    Sys_IlfFileCorruptS(a1 + 0x29c, "STATUSSCREEN:knife.spr");
    Sys_IlfFileCorruptS(a1 + 0x2b4, "STATUSSCREEN:LAW80.spr");
    Sys_IlfFileCorruptS(a1 + 0x2cc, "STATUSSCREEN:M16.spr");
    Sys_IlfFileCorruptS(a1 + 0x2e4, "STATUSSCREEN:Mp5.spr");
    Sys_IlfFileCorruptS(a1 + 0x2fc, "STATUSSCREEN:proximity.spr");
    Sys_IlfFileCorruptS(a1 + 0x314, "STATUSSCREEN:SAW.spr");
    Sys_IlfFileCorruptS(a1 + 0x32c, "STATUSSCREEN:spaz.spr");
    Sys_IlfFileCorruptS(a1 + 0x344, "STATUSSCREEN:splintgrenade.spr");
    Sys_IlfFileCorruptS(a1 + 0x35c, "STATUSSCREEN:stationary.spr");
    Sys_IlfFileCorruptS(a1 + 0x374, "STATUSSCREEN:uzi.spr");
    char (** i)[0x16] = &g_540b60;
    int32_t* ctxB = a1 + 0x38c;

    do
    {
        Sys_IlfFileCorruptS(ctxB, *i);
        i = &i[1];
        ctxB = &ctxB[6];
    } while (i < &g_540b70);

    char (** i_1)[0x22] = &g_540b70;
    int32_t* ctxB1 = a1 + 0x3ec;

    do
    {
        Sys_IlfFileCorruptS(ctxB1, *i_1);
        i_1 = &i_1[1];
        ctxB1 = &ctxB1[6];
    } while (i_1 < "STATUSSCREEN:a_c4.spr");

    (*(int32_t*)(uintptr_t)(a1 + 0x4e0)) = Sys_OpenFileStream_18(g_5bddc0, 0x43a00000, 0x43700000, "Test");
    int32_t** valA15 = Sys_OpenFileStream_18(g_5bddc0, 0, 0, &g_567c74);
    (*(int32_t*)(uintptr_t)(a1 + 0x4dc)) = valA15;
    valA15[9] |= 0x80;
    struct status_msg* result = FX_SmokeEmit_7(a1);
    (*(int32_t*)(uintptr_t)(a1 + 0x4e4)) = result;
    (*(int32_t*)(uintptr_t)(a1 + 0x4e8)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x4ec)) = 0;
    return result;
}
