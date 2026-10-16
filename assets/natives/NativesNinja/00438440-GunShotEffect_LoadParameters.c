#include "00438440-GunShotEffect_LoadParameters.h"
/* 0x00438440 GunShotEffect_LoadParameters full linked: callers=0 callees=24 */
int32_t GunShotEffect_LoadParameters(int32_t* a1 @ 0x8)

{
    int32_t* esi = *a1;
    char* ebx = a1[1];
    int32_t result;
    int32_t ebp;

    if (!*esi)
        ebp = 0;
    else
    {
        int16_t eax = sub_4d9610();
        int32_t ecx;
        ecx = *(*esi + 0x1c);
        result = TaskType_IsDerivedFrom(ecx, eax);
        ebp = result;
    }

    result = ebx[1];

    if (result && !ebp)
    {
        uint32_t eax_3 = sub_4b47c0(Level_SetMission_5(), 3);
        result = sub_4810a0(*a1 + 8, 1, ebp, ebp, 0x45000000, ebp, ebp, eax_3 + 2, ebp, ebp,
            &ebx[0x32], &g_567c74, 0xffffffff, 2, 0x46a00000, &a1[2], 0x3f060a92, 0x43aa0000,
            0x442a0000, ebp);
    }

    if (*esi)
    {
        result = a1[5];
        int32_t edi_1;

        if (result)
            edi_1 = *(ebx + 0x58);

        if (result && edi_1)
        {
        label_4384f6:
            uint32_t eax_6 = sub_47e6f0();
            int32_t edx_4 = 0;
            edx_4 = *(*esi + 0x1c);
            result = eax_6 * 0x180 + edx_4;

            if (*((result << 2) + &g_a96ae0))
            {
                int32_t eax_9 = *(ebx + 0x54);
                int32_t var_38_1 = edi_1 + 0x18;
                int32_t edi_3 = *esi;
                int32_t* var_40 = esi;
                int32_t var_3c_1 = 0;
                int32_t var_34_1 = eax_9;
                uint32_t eax_11 = sub_47e6f0();
                int32_t edx_5 = 0;
                edx_5 = *(edi_3 + 0x1c);
                result = (*(((eax_11 * 0x180 + edx_5) << 2) + &g_a96ae0))(edi_3, &var_40);
            }
        }
        else
        {
            edi_1 = *(ebx + 0x5c);

            if (edi_1)
                goto label_4384f6;
        }
    }

    if (*ebx && !ebp)
    {
        result = sub_4b4740(Level_SetMission_5());

        if (result & 1)
        {
            uint32_t edx_7 = g_57be7c + 0x18;
            int32_t var_4c = ebp;
            int32_t var_48 = ebp;
            int32_t var_44_1 = ebp;
            int32_t var_58 = 0x42fe0000;
            int32_t var_54_1 = 0x42fe0000;
            int32_t var_50_1 = 0x42fe0000;
            float var_6c = 163.839996f;
            int32_t var_68_1 = 0x4323d70a;
            void* eax_14 = Level_StartMission_4();
            struct status_msg* eax_16 = sub_4fdf00(sub_4f0ee0(), eax_14, edx_7, &var_4c, &var_58,
                &var_6c, 0x48c80000, 0x1080000, ebp, 0x3db60b61, ebp, 2, ebp);
            double var_30 = esi[0xe];
            double var_28_1 = esi[0xf];
            double var_20_1 = esi[0x10];
            sub_4b3100(&var_30);
            long double x87_r7_5 = var_6c * 3.0;
            var_30 = x87_r7_5 * var_30;
            double var_28_2 = x87_r7_5 * var_28_1;
            double var_20_2 = x87_r7_5 * var_20_1;
            var_30 = var_30 + *(esi + 8);
            double var_28_3 = var_28_2 + *(esi + 0x10);
            long double x87_r7_12 = var_20_2 + *(esi + 0x18);
            int32_t var_64 = ebp;
            int32_t var_60_1 = ebp;
            int32_t var_5c_1 = ebp;
            double var_20_3 = x87_r7_12;
            long double x87_r6_6 = var_6c * 0.25;
            void var_18;
            memcpy(&var_18, &var_30, 0x18);
            double var_8_1 = x87_r6_6 + x87_r7_12;
            float var_5c_2 = (sub_4b4770(Level_SetMission_5()) * 0.75 + 0.14999999999999999)
                * 4096000f * 9.25925906e-06f;
            float var_70_1 = sub_4b4770(Level_SetMission_5()) * 0.25 + 0.75;
            long double x87_r7_23 = sub_4b4770(Level_SetMission_5()) - 0.5f;
            sub_4fe120(eax_16, &var_30, &var_64, var_70_1,
                (x87_r7_23 + x87_r7_23) * 0.052359879f + 0.0127990814f, ebp, 0x3f800000, 0xf, 0x1e);
            float var_5c_3 = var_5c_2 * 1.25f;
            long double x87_r7_30 = sub_4b4770(Level_SetMission_5()) - 0.5f;
            return sub_4fe120(eax_16, &var_18, &var_64, var_70_1,
                (x87_r7_30 + x87_r7_30) * 0.052359879f + 0.0127990814f, ebp, 0x3f800000, 0xf, 0x1e);
        }
    }

    return result;
}
