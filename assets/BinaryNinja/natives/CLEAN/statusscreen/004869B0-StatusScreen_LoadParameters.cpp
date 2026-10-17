// IGI native provenance: StatusScreen_LoadParameters - 0x004869B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004869B0-StatusScreen_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "StatusScreen_LoadParameters.h"
struct status_msg* StatusScreen_OnLoad(void* context)

{
    float item_10 = g_c28b44;
    long double fpu_val_7_1 = g_c28b48;
    g_5c8a48 = context;
    int32_t item_18 = 0;
    float item_c = fpu_val_7_1;
    int32_t item_14 = 0;
    Display_SyncVSync_13(context + 0x20, 1);
    int32_t data_1;
    void* entity_1;
    int32_t temp_val;
    data_1 = Display_CheckCapabilities_13(context + 0x20, &item_18);
    char* item_44 = "STATUSSCREEN:status.res";
    *(context + 0x70) = Resource_Load(data_1, temp_val, entity_1, nullptr);
    Sys_IlfFileCorruptS(context + 0x74, "STATUSSCREEN:cross.spr");
    Sys_IlfFileCorruptS(context + 0xec, "STATUSSCREEN:clip20.spr");
    Sys_IlfFileCorruptS(context + 0x104, "STATUSSCREEN:barrel6.spr");
    Sys_IlfFileCorruptS(context + 0x11c, "STATUSSCREEN:shell7.spr");
    Sys_IlfFileCorruptS(context + 0x134, "STATUSSCREEN:spl_grenade.spr");
    Sys_IlfFileCorruptS(context + 0x14c, "STATUSSCREEN:M16_alternative.spr");
    Sys_IlfFileCorruptS(context + 0xd4, "STATUSSCREEN:rocket.spr");
    Sys_IlfFileCorruptS(context + 0x8c, "STATUSSCREEN:powerbarbackground.spr");
    Sys_IlfFileCorruptS(context + 0xa4, "STATUSSCREEN:powerbar.spr");
    Sys_IlfFileCorruptS(context + 0x1c4, "STATUSSCREEN:ak47.spr");
    Sys_IlfFileCorruptS(context + 0x1dc, "STATUSSCREEN:binoculars.spr");
    Sys_IlfFileCorruptS(context + 0x1f4, "STATUSSCREEN:colt.spr");
    Sys_IlfFileCorruptS(context + 0x20c, "STATUSSCREEN:deserteagle.spr");
    Sys_IlfFileCorruptS(context + 0x224, "STATUSSCREEN:druganov.spr");
    Sys_IlfFileCorruptS(context + 0x23c, "STATUSSCREEN:flashgrenade.spr");
    Sys_IlfFileCorruptS(context + 0x254, "STATUSSCREEN:glock.spr");
    Sys_IlfFileCorruptS(context + 0x26c, "STATUSSCREEN:health.spr");
    Sys_IlfFileCorruptS(context + 0x284, "STATUSSCREEN:jackhammer.spr");
    Sys_IlfFileCorruptS(context + 0x29c, "STATUSSCREEN:knife.spr");
    Sys_IlfFileCorruptS(context + 0x2b4, "STATUSSCREEN:LAW80.spr");
    Sys_IlfFileCorruptS(context + 0x2cc, "STATUSSCREEN:M16.spr");
    Sys_IlfFileCorruptS(context + 0x2e4, "STATUSSCREEN:Mp5.spr");
    Sys_IlfFileCorruptS(context + 0x2fc, "STATUSSCREEN:proximity.spr");
    Sys_IlfFileCorruptS(context + 0x314, "STATUSSCREEN:SAW.spr");
    Sys_IlfFileCorruptS(context + 0x32c, "STATUSSCREEN:spaz.spr");
    Sys_IlfFileCorruptS(context + 0x344, "STATUSSCREEN:splintgrenade.spr");
    Sys_IlfFileCorruptS(context + 0x35c, "STATUSSCREEN:stationary.spr");
    Sys_IlfFileCorruptS(context + 0x374, "STATUSSCREEN:uzi.spr");
    char (** i)[0x16] = &g_540b60;
    int32_t* context_val = context + 0x38c;

    do
    {
        Sys_IlfFileCorruptS(context_val, *i);
        i = &i[1];
        context_val = &context_val[6];
    } while (i < &g_540b70);

    char (** i_1)[0x22] = &g_540b70;
    int32_t* context_1 = context + 0x3ec;

    do
    {
        Sys_IlfFileCorruptS(context_1, *i_1);
        i_1 = &i_1[1];
        context_1 = &context_1[6];
    } while (i_1 < "STATUSSCREEN:a_c4.spr");

    *(context + 0x4e0) = Sys_OpenFileStream_18(g_5bddc0, 0x43a00000, 0x43700000, "Test");
    int32_t** data_15 = Sys_OpenFileStream_18(g_5bddc0, 0, 0, &g_567c74);
    *(context + 0x4dc) = data_15;
    data_15[9] |= 0x80;
    struct status_msg* result = FX_SmokeEmit_7(context);
    *(context + 0x4e4) = result;
    *(context + 0x4e8) = 0;
    *(context + 0x4ec) = 0;
    return result;
}
