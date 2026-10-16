#include "004737F0-GunM16A2_Update.h"
/* 0x004737f0 GunM16A2_Update full linked: callers=0 callees=13 */
void* sub_4737f0(int32_t* a1 @ 0x8)

{
    void* eax_1 = *(a1[1] + 0x6e4);

    if (eax_1)
    {
        sub_4b0d10(eax_1);
        *(a1[1] + 0x6e4) = 0;
    }

    int32_t var_10 = g_5404e0[0];
    void* edx_1 = *a1;
    char* var_30_2 = "M203 - Muzzle velocity (km/h)";
    int32_t var_1c = 0x43870000;
    int32_t var_18 = 0x40a00000;
    int32_t var_14 = 0x3f800000;
    int32_t var_c = g_5404e0[4][0];
    char var_8 = g_5404e0[8][0];
    int32_t* ebp = sub_4fe730(edx_1, var_30_2);
    void* var_38;

    if (!ebp)
    {
        int32_t eax_4 = var_1c;
        char* var_34_1 = "M203 - Muzzle velocity (km/h)";
        var_38 = *a1;
        ebp = sub_4fe650(var_38, var_34_1, eax_4);
    }

    int32_t* edi = sub_4fe730(*a1, "M203 - Explosion radius (meters)");

    if (!edi)
    {
        char* var_34_3 = "M203 - Explosion radius (meters)";
        var_38 = *a1;
        edi = sub_4fe650(var_38, var_34_3, var_18);
    }

    int32_t* esi = sub_4fe730(*a1, "M203 - Activate radius (meters)");

    if (!esi)
    {
        char* var_34_5 = "M203 - Activate radius (meters)";
        var_38 = *a1;
        esi = sub_4fe650(var_38, var_34_5, var_14);
    }

    struct status_msg* eax_12 = sub_4fe730(*a1, "M203 - Model");

    if (!eax_12)
    {
        int32_t* var_30_9 = &var_10;
        char* var_34_7 = "M203 - Model";
        var_38 = *a1;
        eax_12 = sub_4fe6b0(var_38, var_34_7, var_30_9);
    }

    int32_t var_30_10 = 4;
    var_1c = ebp[0x49];
    int32_t var_18_1 = edi[0x49];
    char* edi_1 = &eax_12->sprite[0x70];
    int32_t i = 0xffffffff;
    int32_t var_14_1 = esi[0x49];

    while (i)
    {
        bool cond:0_1 = 0 != *(ADJ(edi_1) + 0x124);
        edi_1 = &edi_1[1];
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx_7 = ~i;
    int32_t var_34_8 = 0x1c;
    int32_t esi_2;
    int32_t edi_3;
    edi_3 = memcpy(&var_10, edi_1 - ecx_7, ecx_7 & 0xfffffffc);
    memcpy(edi_3, esi_2, ecx_7 & 3);
    void* result = Mem_Alloc(var_34_8, var_30_10);
    *(a1[1] + 0x6e4) = result;
    memcpy(*(a1[1] + 0x6e4), &var_1c, 0x1c);
    return result;
}
