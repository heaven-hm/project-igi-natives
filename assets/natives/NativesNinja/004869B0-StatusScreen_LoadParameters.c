#include "004869B0-StatusScreen_LoadParameters.h"
/* 0x004869b0 StatusScreen_LoadParameters full linked: callers=0 callees=40 */
struct status_msg* sub_4869b0(void* a1)

{
    float var_10 = g_c28b44;
    long double x87_r7_1 = g_c28b48;
    g_5c8a48 = a1;
    int32_t var_18 = 0;
    float var_c = x87_r7_1;
    int32_t var_14 = 0;
    sub_497570(a1 + 0x20, 1);
    int32_t eax_1;
    void* ecx_1;
    int32_t edx;
    eax_1 = sub_497680(a1 + 0x20, &var_18);
    char* var_44 = "STATUSSCREEN:status.res";
    *(a1 + 0x70) = Resource_Load(eax_1, edx, ecx_1, nullptr);
    sub_4b6720(a1 + 0x74, "STATUSSCREEN:cross.spr");
    sub_4b6720(a1 + 0xec, "STATUSSCREEN:clip20.spr");
    sub_4b6720(a1 + 0x104, "STATUSSCREEN:barrel6.spr");
    sub_4b6720(a1 + 0x11c, "STATUSSCREEN:shell7.spr");
    sub_4b6720(a1 + 0x134, "STATUSSCREEN:spl_grenade.spr");
    sub_4b6720(a1 + 0x14c, "STATUSSCREEN:M16_alternative.spr");
    sub_4b6720(a1 + 0xd4, "STATUSSCREEN:rocket.spr");
    sub_4b6720(a1 + 0x8c, "STATUSSCREEN:powerbarbackground.spr");
    sub_4b6720(a1 + 0xa4, "STATUSSCREEN:powerbar.spr");
    sub_4b6720(a1 + 0x1c4, "STATUSSCREEN:ak47.spr");
    sub_4b6720(a1 + 0x1dc, "STATUSSCREEN:binoculars.spr");
    sub_4b6720(a1 + 0x1f4, "STATUSSCREEN:colt.spr");
    sub_4b6720(a1 + 0x20c, "STATUSSCREEN:deserteagle.spr");
    sub_4b6720(a1 + 0x224, "STATUSSCREEN:druganov.spr");
    sub_4b6720(a1 + 0x23c, "STATUSSCREEN:flashgrenade.spr");
    sub_4b6720(a1 + 0x254, "STATUSSCREEN:glock.spr");
    sub_4b6720(a1 + 0x26c, "STATUSSCREEN:health.spr");
    sub_4b6720(a1 + 0x284, "STATUSSCREEN:jackhammer.spr");
    sub_4b6720(a1 + 0x29c, "STATUSSCREEN:knife.spr");
    sub_4b6720(a1 + 0x2b4, "STATUSSCREEN:LAW80.spr");
    sub_4b6720(a1 + 0x2cc, "STATUSSCREEN:M16.spr");
    sub_4b6720(a1 + 0x2e4, "STATUSSCREEN:Mp5.spr");
    sub_4b6720(a1 + 0x2fc, "STATUSSCREEN:proximity.spr");
    sub_4b6720(a1 + 0x314, "STATUSSCREEN:SAW.spr");
    sub_4b6720(a1 + 0x32c, "STATUSSCREEN:spaz.spr");
    sub_4b6720(a1 + 0x344, "STATUSSCREEN:splintgrenade.spr");
    sub_4b6720(a1 + 0x35c, "STATUSSCREEN:stationary.spr");
    sub_4b6720(a1 + 0x374, "STATUSSCREEN:uzi.spr");
    char (** i)[0x16] = &g_540b60;
    int32_t* ebx = a1 + 0x38c;

    do
    {
        sub_4b6720(ebx, *i);
        i = &i[1];
        ebx = &ebx[6];
    } while (i < &g_540b70);

    char (** i_1)[0x22] = &g_540b70;
    int32_t* ebx_1 = a1 + 0x3ec;

    do
    {
        sub_4b6720(ebx_1, *i_1);
        i_1 = &i_1[1];
        ebx_1 = &ebx_1[6];
    } while (i_1 < "STATUSSCREEN:a_c4.spr");

    *(a1 + 0x4e0) = sub_4b6ec0(g_5bddc0, 0x43a00000, 0x43700000, "Test");
    int32_t** eax_15 = sub_4b6ec0(g_5bddc0, 0, 0, &g_567c74);
    *(a1 + 0x4dc) = eax_15;
    eax_15[9] |= 0x80;
    struct status_msg* result = sub_486620(a1);
    *(a1 + 0x4e4) = result;
    *(a1 + 0x4e8) = 0;
    *(a1 + 0x4ec) = 0;
    return result;
}
