#include "gi_platform.h"
#include "00471B60-Weapon_FireBullet_2.h"
int32_t Weapon_FireBullet_2(void* a1)

{
    void* dstD = a1;
    void* ctxB = dstD;
    (*(int32_t*)(uintptr_t)(dstD + 0x134)) = 0;
    (*(int32_t*)(uintptr_t)(dstD + 0x130)) = 0;
    int32_t valA = AI_UpdateOrders_17();
    int16_t saved_src = valA;
    valA = (*(int32_t*)(uintptr_t)(dstD + 0x1c));
    int32_t result;
    int32_t objC;
    result = TaskType_IsDerivedFrom(valA, saved_src);

    while (!result)
    {
        ctxB = (*(int32_t*)(uintptr_t)(ctxB + 0x14));

        if (!ctxB)
            return result;

        int16_t valA1 = AI_UpdateOrders_17();
        objC = (*(int32_t*)(uintptr_t)(ctxB + 0x1c));
        result = TaskType_IsDerivedFrom(objC, valA1);
    }

    int32_t* valA2 = AI_CombatTarget_18();
    int32_t* objC1 = dstD + 0x2c54;
    int32_t i_2 = 0xa;
    int32_t i;

    do
    {
        *objC1 = 0;
        objC1 = &objC1[0xb];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    int32_t objC2 = *valA2;
    float v_80;
    float v_7c;
    float v_74;
    float v_64;
    int16_t idx;

    if (objC2 > 0)
    {
        int32_t* valA3 = &valA2[2];
        int32_t v_6c_1 = objC2;
        v_74 = valA3;
        bool cond_0_1;

        do
        {
            void* flagP1 = *valA3;

            if (flagP1 && flagP1 != ctxB && *(flagP1 + 0xcf6) && !*(flagP1 + 0xcf5))
            {
                double v_18[0x3];
                AI_FireWeapon_23(&v_18, *(flagP1 + 0x4ec));
                double v_30;
                memcpy(&v_30, flagP1 + 0x20, 0x18);
                long double x87_r7_2 = v_30 - g_bcab08;
                double v_28;
                long double x87_r6_2 = v_28 - g_bcab10;
                double v_20;
                long double x87_r5_2 = v_20 - g_bcab18;
                int32_t objC3 = *(flagP1 + 0xa0);
                long double x87_r4_6 = g_bcaaf4 * x87_r5_2;
                long double x87_r3_6 = g_bcaaf0 * x87_r6_2;
                float v_4c =
                    g_bcaae8 * x87_r5_2 + g_bcaae4 * x87_r6_2 + g_bcaae0 * x87_r7_2;
                long double x87_r4_10 = g_bcab00 * x87_r5_2;
                long double x87_r3_10 = g_bcaafc * x87_r6_2;
                float v_48 = x87_r4_6 + x87_r3_6 + g_bcaaec * x87_r7_2;
                idx = 0;
                float v_44_1 = x87_r4_10 + x87_r3_10 + g_bcaaf8 * x87_r7_2;

                if (!Render_DrawBoneMesh(&v_4c, objC3, 0))
                {
                    void* v_3c_1 = ctxB;
                    void* v_38_1 = ctxB;
                    void* v_34_1 = flagP1;
                    int32_t dstD2 = (*(int32_t*)(uintptr_t)(a1 + 0x130)) + 1;
                    v_80 = 0.0f;
                    (*(int32_t*)(uintptr_t)(a1 + 0x130)) = dstD2;
                    char valA8 = FX_TrailUpdate_12();
                    char v_40;
                    DynObj_RegisterSymbol_12(Level_StartMission_4(), &g_bcab08, &v_18, valA8, &v_40,
                        0xffffffff, 0xffffffff, &v_80);
                    Weapon_UpdateMuzzleFlash(&g_bcaae0, &v_64, &v_7c, &v_30);
                    long double x87_r7_4 = v_7c;
                    long double f5_1 = 0.0f;
                    x87_r7_4 - f5_1;
                    idx = 0;

                    if (!(*(&((x87_r7_4 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_4, f5_1) ? 1 : 0) << 0xa
                        | (x87_r7_4 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        long double x87_r7_5 = v_80;
                        long double f6_1 = 0.0f;
                        x87_r7_5 - f6_1;
                        idx = 0;
                        int32_t valA12;

                        valA12 = !(*(&((x87_r7_5 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_5, f6_1) ? 1 : 0) << 0xa
                            | (x87_r7_5 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40) ? 0 : 1;

                        int32_t tmpD3 = 0;
                        tmpD3 = *(flagP1 + 0xfc) != 1;
                        Weapon_ReloadClip_2(a1, flagP1, v_7c, objC3, &v_64, valA12, tmpD3,
                            *(flagP1 + 0xcf5));
                    }
                }

                dstD = a1;
            }

            valA3 = v_74 + 4;
            cond_0_1 = v_6c_1 != 1;
            v_74 = valA3;
            v_6c_1 -= 1;
        } while (cond_0_1);
    }

    int32_t* srcS3 = dstD + 0x2c50;
    int32_t i_3 = 0xa;
    int32_t i_1;

    do
    {
        result = Timer_Now();

        if (!srcS3[1])
        {
            result -= srcS3[4];

            if (result > 0xbb8)
                srcS3[-3] = 0;
        }
        else if (!*srcS3)
        {
            (*(int32_t*)(uintptr_t)(dstD + 0x134)) += 1;
            float v_60_1;
            float v_5c_1;

            if (!srcS3[-2])
            {
                if (!srcS3[-1])
                {
                    v_64 = 64.0f;
                    v_60_1 = 0.0f;
                }
                else
                {
                    v_64 = 0.0f;
                    v_60_1 = 128.0f;
                }

                v_5c_1 = 0.0f;
            }
            else
            {
                v_64 = 0.0f;
                v_60_1 = 0.0f;
                v_5c_1 = 128.0f;
            }

            float valA14 = result - srcS3[5];

            if (result - srcS3[5] >= 0)
            {
                v_80 = 3.50324616e-43.0f;

                if (valA14 <= 0xfa)
                    v_80 = valA14;
            }
            else
                v_80 = 0.0f;

🚫🚫            /* unimplemented  {fild fp0, dword [esp+0x10]} */
            float valA15 = srcS3[2];
            float tmpD7 = srcS3[3];
            v_74 = valA15;
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_534110]} */
            float v_70_1 = valA15;
🚫🚫            /* unimplemented  {fld fp0, fp0} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_533468]} */
🚫🚫🚫            float v_68_2 = /* float v_68_2 = unimplemented  {fstp dword [esp+0x38], fp0} */;
            /* unimplemented  {fstp dword [esp+0x38], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [&g_5333e0]} */
🚫🚫            /* unimplemented  {fsub fp0, fp1} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_533480]} */
🚫🚫            /* unimplemented  {fadd dword [&g_5333e0]} */
🚫🚫🚫            float v_6c_2 = /* float v_6c_2 = unimplemented  {fstp dword [esp+0x34], fp0} */;
            /* unimplemented  {fstp dword [esp+0x34], fp0} */
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
            int32_t objC12 = Weapon_UpdateBarrel(&g_bcaae0, &v_7c, &v_74, tmpD7);
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x28]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [esp+0x34]} */
            int32_t v_9c_3 = objC12;
🚫🚫🚫            float v_9c_4 = /* float v_9c_4 = unimplemented  {fstp dword [esp], fp0} */;
            /* unimplemented  {fstp dword [esp], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [esp+0x30]} */
            int32_t v_a0_4 = objC12;
🚫🚫🚫            float v_a0_5 = /* float v_a0_5 = unimplemented  {fstp dword [esp], fp0} */;
            /* unimplemented  {fstp dword [esp], fp0} */
            result = Sys_DispatchOpcode_15(0x5340b0, 7.00649232e-45.0f, srcS3[6], srcS3[7], 0x3f800000, v_64,
                v_60_1, v_5c_1, 0x3f000000, v_68_2, v_a0_5, v_9c_4, 0, 0);
            idx -= 1;
        }

        srcS3 = &srcS3[0xb];
        i_1 = i_3;
        i_3 -= 1;
    } while (i_1 != 1);
    return result;
}
