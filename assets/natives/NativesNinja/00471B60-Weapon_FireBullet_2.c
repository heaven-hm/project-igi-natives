#include "00471B60-Weapon_FireBullet_2.h"
/* 0x00471b60 Weapon_FireBullet_2 full linked: callers=1 callees=16 */
int32_t sub_471b60(void* a1)

{
    void* edi = a1;
    void* ebx = edi;
    *(edi + 0x134) = 0;
    *(edi + 0x130) = 0;
    int32_t eax = sub_460be0();
    int16_t __saved_esi = eax;
    eax = *(edi + 0x1c);
    int32_t result;
    int32_t ecx;
    result = TaskType_IsDerivedFrom(eax, __saved_esi);

    while (!result)
    {
        ebx = *(ebx + 0x14);

        if (!ebx)
            return result;

        int16_t eax_1 = sub_460be0();
        ecx = *(ebx + 0x1c);
        result = TaskType_IsDerivedFrom(ecx, eax_1);
    }

    int32_t* eax_2 = sub_460c60();
    int32_t* ecx_1 = edi + 0x2c54;
    int32_t i_2 = 0xa;
    int32_t i;

    do
    {
        *ecx_1 = 0;
        ecx_1 = &ecx_1[0xb];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    int32_t ecx_2 = *eax_2;
    float var_80;
    float var_7c;
    float var_74;
    float var_64;
    int16_t top;

    if (ecx_2 > 0)
    {
        int32_t* eax_3 = &eax_2[2];
        int32_t var_6c_1 = ecx_2;
        var_74 = eax_3;
        bool cond:0_1;

        do
        {
            void* ebp_1 = *eax_3;

            if (ebp_1 && ebp_1 != ebx && *(ebp_1 + 0xcf6) && !*(ebp_1 + 0xcf5))
            {
                double var_18[0x3];
                sub_465800(&var_18, *(ebp_1 + 0x4ec));
                double var_30;
                memcpy(&var_30, ebp_1 + 0x20, 0x18);
                long double x87_r7_2 = var_30 - g_bcab08;
                double var_28;
                long double x87_r6_2 = var_28 - g_bcab10;
                double var_20;
                long double x87_r5_2 = var_20 - g_bcab18;
                int32_t ecx_3 = *(ebp_1 + 0xa0);
                long double x87_r4_6 = g_bcaaf4 * x87_r5_2;
                long double x87_r3_6 = g_bcaaf0 * x87_r6_2;
                float var_4c =
                    g_bcaae8 * x87_r5_2 + g_bcaae4 * x87_r6_2 + g_bcaae0 * x87_r7_2;
                long double x87_r4_10 = g_bcab00 * x87_r5_2;
                long double x87_r3_10 = g_bcaafc * x87_r6_2;
                float var_48 = x87_r4_6 + x87_r3_6 + g_bcaaec * x87_r7_2;
                top = 0;
                float var_44_1 = x87_r4_10 + x87_r3_10 + g_bcaaf8 * x87_r7_2;

                if (!sub_4d03d0(&var_4c, ecx_3, 0))
                {
                    void* var_3c_1 = ebx;
                    void* var_38_1 = ebx;
                    void* var_34_1 = ebp_1;
                    int32_t edi_2 = *(a1 + 0x130) + 1;
                    var_80 = 0f;
                    *(a1 + 0x130) = edi_2;
                    char eax_8 = sub_489610();
                    void var_40;
                    sub_4ce410(Level_StartMission_4(), &g_bcab08, &var_18, eax_8, &var_40,
                        0xffffffff, 0xffffffff, &var_80);
                    sub_470ec0(&g_bcaae0, &var_64, &var_7c, &var_30);
                    long double x87_r7_4 = var_7c;
                    long double temp5_1 = 0f;
                    x87_r7_4 - temp5_1;
                    top = 0;

                    if (!(*(&((x87_r7_4 < temp5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_4, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r7_4 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        long double x87_r7_5 = var_80;
                        long double temp6_1 = 0f;
                        x87_r7_5 - temp6_1;
                        top = 0;
                        int32_t eax_12;

                        eax_12 = !(*(&((x87_r7_5 < temp6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_5, temp6_1) ? 1 : 0) << 0xa
                            | (x87_r7_5 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40) ? 0 : 1;

                        int32_t edx_3 = 0;
                        edx_3 = *(ebp_1 + 0xfc) != 1;
                        sub_471f60(a1, ebp_1, var_7c, ecx_3, &var_64, eax_12, edx_3,
                            *(ebp_1 + 0xcf5));
                    }
                }

                edi = a1;
            }

            eax_3 = var_74 + 4;
            cond:0_1 = var_6c_1 != 1;
            var_74 = eax_3;
            var_6c_1 -= 1;
        } while (cond:0_1);
    }

    int32_t* esi_3 = edi + 0x2c50;
    int32_t i_3 = 0xa;
    int32_t i_1;

    do
    {
        result = Timer_Now();

        if (!esi_3[1])
        {
            result -= esi_3[4];

            if (result > 0xbb8)
                esi_3[-3] = 0;
        }
        else if (!*esi_3)
        {
            *(edi + 0x134) += 1;
            float var_60_1;
            float var_5c_1;

            if (!esi_3[-2])
            {
                if (!esi_3[-1])
                {
                    var_64 = 64f;
                    var_60_1 = 0f;
                }
                else
                {
                    var_64 = 0f;
                    var_60_1 = 128f;
                }

                var_5c_1 = 0f;
            }
            else
            {
                var_64 = 0f;
                var_60_1 = 0f;
                var_5c_1 = 128f;
            }

            float eax_14 = result - esi_3[5];

            if (result - esi_3[5] >= 0)
            {
                var_80 = 3.50324616e-43f;

                if (eax_14 <= 0xfa)
                    var_80 = eax_14;
            }
            else
                var_80 = 0f;

🚫🚫            /* unimplemented  {fild st0, dword [esp+0x10]} */
            float eax_15 = esi_3[2];
            float edx_7 = esi_3[3];
            var_74 = eax_15;
🚫🚫            /* unimplemented  {fmul st0, dword [&g_534110]} */
            float var_70_1 = eax_15;
🚫🚫            /* unimplemented  {fld st0, st0} */
🚫🚫            /* unimplemented  {fmul st0, dword [&g_533468]} */
🚫🚫🚫            float var_68_2 = /* float var_68_2 = unimplemented  {fstp dword [esp+0x38], st0} */;
            /* unimplemented  {fstp dword [esp+0x38], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [&g_5333e0]} */
🚫🚫            /* unimplemented  {fsub st0, st1} */
🚫🚫            /* unimplemented  {fmul st0, dword [&g_533480]} */
🚫🚫            /* unimplemented  {fadd dword [&g_5333e0]} */
🚫🚫🚫            float var_6c_2 = /* float var_6c_2 = unimplemented  {fstp dword [esp+0x34], st0} */;
            /* unimplemented  {fstp dword [esp+0x34], st0} */
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
            int32_t ecx_12 = sub_470f70(&g_bcaae0, &var_7c, &var_74, edx_7);
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x28]} */
🚫🚫            /* unimplemented  {fmul st0, dword [esp+0x34]} */
            int32_t var_9c_3 = ecx_12;
🚫🚫🚫            float var_9c_4 = /* float var_9c_4 = unimplemented  {fstp dword [esp], st0} */;
            /* unimplemented  {fstp dword [esp], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫            /* unimplemented  {fmul st0, dword [esp+0x30]} */
            int32_t var_a0_4 = ecx_12;
🚫🚫🚫            float var_a0_5 = /* float var_a0_5 = unimplemented  {fstp dword [esp], st0} */;
            /* unimplemented  {fstp dword [esp], st0} */
            result = sub_4b5860(0x5340b0, 7.00649232e-45f, esi_3[6], esi_3[7], 0x3f800000, var_64,
                var_60_1, var_5c_1, 0x3f000000, var_68_2, var_a0_5, var_9c_4, 0, 0);
            top -= 1;
        }

        esi_3 = &esi_3[0xb];
        i_1 = i_3;
        i_3 -= 1;
    } while (i_1 != 1);
    return result;
}
