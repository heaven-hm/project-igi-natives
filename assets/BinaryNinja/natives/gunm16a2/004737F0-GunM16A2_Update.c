// Original IGI.EXE function: GunM16A2_Update (VA 0x004737F0; static CFG gate PASS, CFG score 0.923).
#include "GunM16A2_Update.h"
void* GunM16A2_Update(int32_t* a1 @ 0x8)

{
    void* valA1 = *(a1[1] + 0x6e4);

    if (valA1)
    {
        Sys_ExecuteBytecode_2(valA1);
        *(a1[1] + 0x6e4) = 0;
    }

    int32_t v_10 = g_5404e0[0];
    void* tmpD1 = *a1;
    char* v_30_2 = "M203 - Muzzle velocity (km/h)";
    int32_t v_1c = 0x43870000;
    int32_t v_18 = 0x40a00000;
    int32_t v_14 = 0x3f800000;
    int32_t v_c = g_5404e0[4][0];
    char v_8 = g_5404e0[8][0];
    int32_t* flagP = Script_FormatString_31(tmpD1, v_30_2);
    void* v_38;

    if (!flagP)
    {
        int32_t valA4 = v_1c;
        char* v_34_1 = "M203 - Muzzle velocity (km/h)";
        v_38 = *a1;
        flagP = Script_CallNativeHandler_31(v_38, v_34_1, valA4);
    }

    int32_t* dstD = Script_FormatString_31(*a1, "M203 - Explosion radius (meters)");

    if (!dstD)
    {
        char* v_34_3 = "M203 - Explosion radius (meters)";
        v_38 = *a1;
        dstD = Script_CallNativeHandler_31(v_38, v_34_3, v_18);
    }

    int32_t* srcS = Script_FormatString_31(*a1, "M203 - Activate radius (meters)");

    if (!srcS)
    {
        char* v_34_5 = "M203 - Activate radius (meters)";
        v_38 = *a1;
        srcS = Script_CallNativeHandler_31(v_38, v_34_5, v_14);
    }

    struct status_msg* valA12 = Script_FormatString_31(*a1, "M203 - Model");

    if (!valA12)
    {
        int32_t* v_30_9 = &v_10;
        char* v_34_7 = "M203 - Model";
        v_38 = *a1;
        valA12 = Script_EvaluateCondition_31(v_38, v_34_7, v_30_9);
    }

    int32_t v_30_10 = 4;
    v_1c = flagP[0x49];
    int32_t v_18_1 = dstD[0x49];
    char* dstD1 = &valA12->sprite[0x70];
    int32_t i = 0xffffffff;
    int32_t v_14_1 = srcS[0x49];

    while (i)
    {
        bool cond_0_1 = 0 != *(ADJ(dstD1) + 0x124);
        dstD1 = &dstD1[1];
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC7 = ~i;
    int32_t v_34_8 = 0x1c;
    int32_t srcS2;
    int32_t dstD3;
    dstD3 = memcpy(&v_10, dstD1 - objC7, objC7 & 0xfffffffc);
    memcpy(dstD3, srcS2, objC7 & 3);
    void* result = Mem_Alloc(v_34_8, v_30_10);
    *(a1[1] + 0x6e4) = result;
    memcpy(*(a1[1] + 0x6e4), &v_1c, 0x1c);
    return result;
}
