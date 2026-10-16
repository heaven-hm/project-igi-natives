#include "004109A0-Human_RunUpdate.h"
/* 0x004109a0 Human_RunUpdate full linked: callers=1 callees=51 */
void* Human_RunUpdate(int32_t a1)

// Sig: void Human_RunUpdate(HumanPlayer* human)
// Note: Main HUMAN PLAYER RUN/MOVEMENT UPDATE - large handler; reads human
// struct field +0x2EC (lea edi,[esi+0x2ec], matching the documented param-ptr
// slot) and drives movement state. Hooked by IGI-MP as HumanPlayer_RunUpdate.
{
    int32_t __saved_ebp;
    int32_t* ebp = &__saved_ebp;
    HumanPlayer_ApplyPhysics(a1);
    int32_t var_80 = a1;
    sub_460cf0(var_80);
    sub_460ee0(a1);

    if (!sub_46c060())
    {
        HumanPlayer_UpdateHealth_9(a1);
        var_80 = 0;
        HumanPlayer_UpdateHealth_8(ebp, a1, a1 + 0x2ec, a1, var_80);
    }

    var_80 = a1 + 0x2ec;
    sub_4ec1e0(var_80, a1);
    sub_4ec1e0(a1 + 0xcf8, a1);
    long double x87_r7 = *(a1 + 0x200);
    long double temp0 = 0f;
    x87_r7 - temp0;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double x87_r7_1 = *(a1 + 0x160);
        long double temp2_1 = 0f;
        x87_r7_1 - temp2_1;

        if (*(&((x87_r7_1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            *(a1 + 0xd45) ^= 1;
    }

    long double x87_r7_2 = *(a1 + 0x234);
    long double temp1 = 0f;
    x87_r7_2 - temp1;
    int32_t ecx = *(a1 + 0x2fc);
    int16_t eax_3 = (x87_r7_2 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp1 ? 1 : 0) << 0xe;
    int32_t eax_4;

    if (ecx == 0x30)
    {
        if (!(*(&eax_3 + 1) & 0x40))
        {
            long double x87_r7_4 = *(a1 + 0x194);
            long double temp3_1 = 0f;
            x87_r7_4 - temp3_1;

            if (*(&((x87_r7_4 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            {
                __builtin_memset(a1 + 0x664, 0, 0x18);
                *(a1 + 0x2f8) = *(a1 + 0x2fc);
                *(a1 + 0x2fc) = 0;
                eax_4 = **(a1 + 0x2f0);
            label_410ad7:
                var_80 = a1 + 0x2ec;
                *(a1 + 0x300) = eax_4;
                eax_4(var_80, a1);
            }
        }
    }
    else if (!(*(&eax_3 + 1) & 0x40))
    {
        long double x87_r7_3 = *(a1 + 0x194);
        long double temp4_1 = 0f;
        x87_r7_3 - temp4_1;

        if (*(&((x87_r7_3 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp4_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            *(a1 + 0x2f8) = ecx;
            *(a1 + 0x2fc) = 0x30;
            eax_4 = *(*(a1 + 0x2f0) + 0xc0);
            goto label_410ad7;
        }
    }

    if (*(a1 + 0xd78) || *(a1 + 0xd79))
        Ladder_Mount(a1);

    if (*(a1 + 0xd90) || *(a1 + 0xd91))
        HumanPlayer_PlaySound_9(a1);

    if (*(a1 + 0xd93) || *(a1 + 0xd94))
        HumanPlayer_TakeDamage_9(a1);

    if (*(a1 + 0xda0) || *(a1 + 0xda1))
        HumanPlayer_WireSlide1_2(a1);

    *(a1 + 0x2f4) &= 0xfffeffff;
    sub_4610c0(a1);
    float ecx_2 = *(a1 + 0x4ec);
    var_80 = a1;
    sub_464800(ecx_2, var_80);
    *(a1 + 0xd8) = 1;
    sub_4d2fb0(a1 + 0x514, a1 + 0x520, a1 + 0x68);

    if (!*(a1 + 0x52c))
    {
        *(a1 + 0x520) = g_56e1e8 * *(a1 + 0x520);
        *(a1 + 0x524) = g_56e1e8 * *(a1 + 0x524);
        *(a1 + 0x528) = g_56e1e8 * *(a1 + 0x528);
    }

    long double x87_r6_10 = *(a1 + 0x80) * *(a1 + 0x528) + *(a1 + 0x7c) * *(a1 + 0x524)
        + *(a1 + 0x78) * *(a1 + 0x520);
    long double x87_r6_14 = *(a1 + 0x8c) * *(a1 + 0x528) + *(a1 + 0x88) * *(a1 + 0x524)
        + *(a1 + 0x84) * *(a1 + 0x520);
    float var_60 = x87_r6_14;
    long double x87_r6_17 = *(a1 + 0x98) * *(a1 + 0x528) + *(a1 + 0x94) * *(a1 + 0x524);
    long double x87_r5_11 = *(a1 + 0x90) * *(a1 + 0x520);
    *(a1 + 0x520) = x87_r6_10;
    *(a1 + 0x524) = var_60;
    *(a1 + 0x528) = x87_r6_17 + x87_r5_11;
    sub_4613d0(a1);

    if (*(a1 + 0x2fc) != 0x30)
    {
        if (*(a1 + 0x76c))
            sub_462cf0(a1);
        else
            sub_4614b0(a1);
    }

    var_80 = *(a1 + 0x4ec);
    sub_464bd0(var_80, a1);
    sub_462e50(ebp, a1, a1 + 0x520, a1);
    sub_463080(a1);
    HumanPlayer_UpdateStamina_9(a1);
    sub_463920(a1);
    HumanPlayer_Earcandy(a1);
    HumanPlayer_HandleInput_9(a1);
    HumanPlayer_ApplyPhysics_9(a1);
    HumanPlayer_PlayFootstep_9(a1);
    long double x87_r6_19 = *(a1 + 0x66c);
    long double temp5 = 0f;
    x87_r6_19 - temp5;
    long double x87_r6_20 = *(a1 + 0x66c);

    if (*(&((x87_r6_19 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_19, temp5) ? 1 : 0) << 0xa
            | (x87_r6_19 == temp5 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        x87_r6_20 = -(x87_r6_20);

    var_80 = x87_r6_20 * 0.000244140625f * 30f;
    sub_460c80(a1, "Speed Z (m/s): %.2f\n");
    int32_t var_90_2 = sub_463680(a1);
    sub_460c80(a1, "Ground task: %x\n");
    int32_t var_9c_1 = *(a1 + 0x76c);
    sub_460c80(a1, "Attach task: %x\n");
    var_80 = *(a1 + 0x728);
    sub_460c80(a1, "Delta move pos X: %.2f\n");
    var_80 = *(a1 + 0x72c);
    sub_460c80(a1, "Delta move pos Y: %.2f\n");
    var_80 = *(a1 + 0x730);
    sub_460c80(a1, "Delta move pos Z: %.2f\n");
    var_80 = *(a1 + 0x75c);
    sub_460c80(a1, "Delta move Alpha: %.2f\n");
    var_80 = *(a1 + 0x760);
    sub_460c80(a1, "Delta move Beta: %.2f\n");
    var_80 = *(a1 + 0x764);
    sub_460c80(a1, "Delta move Gamma: %.2f\n");
    var_80 = *(a1 + 0x710) * 0.000244140625;
    sub_460c80(a1, "Distance to ground from feet: %.2fm\n");
    var_80 = *(a1 + 0x718) * 57.2957764f;
    sub_460c80(a1, "Ground angle: %.3f\n");
    var_80 = *(a1 + 0x520);
    sub_460c80(a1, "Delta translation X: %.2f\n");
    var_80 = *(a1 + 0x524);
    sub_460c80(a1, "Delta translation Y: %.2f\n");
    var_80 = *(a1 + 0x528);
    int32_t var_88_14 = a1;
    sub_460c80(var_88_14, "Delta translation Z: %.2f\n");

    if (*(a1 + 0x2f4) & 4)
    {
        char* var_7c_12 = "Ground!\n";
        var_80 = a1;
        sub_460c80(var_80, var_7c_12);
    }

    void* result = DEBUG_KEYSENABLEINVALID(0x57);

    if (result)
        g_56df94 ^= 1;

    if (g_56df94)
    {
        var_80 = *(a1 + 0x30) * 0.000244140625;
        var_88_14 = *(a1 + 0x28) * 0.000244140625;
        var_90_2 = *(a1 + 0x20) * 0.000244140625;
        sub_4e7bd0("Player position: %.2f, %.2f, %.2f\n");
        result = Level_LoadLevel_6();

        if (*(result + 0x5c))
        {
            void* eax_21 = *(Level_LoadLevel_6() + 0x5c);
            int32_t edx_5 = *(eax_21 + 0x44);
            int32_t var_58 = *(eax_21 + 0x38);
            int32_t var_54_1 = edx_5;
            int32_t var_50_1 = *(eax_21 + 0x50);
            int32_t var_4c_1 = *(eax_21 + 0x3c);
            int32_t var_48_1 = *(eax_21 + 0x48);
            int32_t var_44_1 = *(eax_21 + 0x54);
            int32_t var_40_1 = *(eax_21 + 0x40);
            int32_t var_3c_1 = *(eax_21 + 0x4c);
            int32_t var_38_1 = *(eax_21 + 0x58);
            int32_t var_34_1 = *(eax_21 + 0x5c);
            void var_30;
            memcpy(&var_30, &var_58, 0x28);
            float var_6c;
            float* var_7c_14 = &var_6c;
            float var_68;
            var_80 = &var_68;
            float var_18[0x4];
            sub_4b2d00(&var_18, var_80, var_7c_14);
            long double x87_r6_42 = var_6c;
            long double temp6_1 = 0f;
            x87_r6_42 - temp6_1;

            if (*(&((x87_r6_42 < temp6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_42, temp6_1) ? 1 : 0) << 0xa
                | (x87_r6_42 == temp6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
            {
                long double temp7_1;

                do
                {
                    x87_r6_42 = x87_r6_42 + 6.28318548f;
                    temp7_1 = 0f;
                    x87_r6_42 - temp7_1;
                } while (*(&((x87_r6_42 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_42, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r6_42 == temp7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1);
                var_6c = x87_r6_42;
            }

            var_80 = x87_r6_42 * 57.2957764f;
            var_88_14 = var_68 * 57.2957764f;
            return sub_4e7bd0("Player angle: %.2f, %.2f\n");
        }
    }

    return result;
}
