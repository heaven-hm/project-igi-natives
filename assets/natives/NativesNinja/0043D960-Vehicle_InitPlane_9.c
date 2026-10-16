#include "0043D960-Vehicle_InitPlane_9.h"
/* 0x0043d960 Vehicle_InitPlane_9 full linked: callers=5 callees=9 */
int32_t Vehicle_InitPlane_9(float a1)

{
    float ebx = a1;
    int32_t result = *(ebx + 0x180);
    char var_55 = 1;

    if (result != 0xffffffff)
    {
        float var_54_1 = sub_5020c0(result);
        a1 = *(ebx + 0x184);
        long double x87_r7_2 = a1;
        long double temp1_1 = var_54_1;
        x87_r7_2 - temp1_1;

        if (!(*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            *(ebx + 0x184) = var_54_1;
            a1 = var_54_1 - 0.100000001f;
        }

        long double x87_r7_5 = a1;
        long double temp2_1 = 0f;
        x87_r7_5 - temp2_1;
        int16_t eax_1 = (x87_r7_5 < temp2_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_5, temp2_1) ? 1 : 0) << 0xa | (x87_r7_5 == temp2_1 ? 1 : 0) << 0xe;

        if (*(&eax_1 + 1) & 1)
        {
            a1 = 0f;
            *(ebx + 0x184) = 0;
        }

        eax_1 = *(ebx + 0x18c);
        char* var_78;
        float var_50;
        double var_40;
        double var_28;
        double var_20;
        double var_18;
        double* ebp_1;

        if (!eax_1)
        {
            float* __saved_edi_3 = &var_50;
            int32_t var_6c_2 = 0;
            int32_t var_70_2 = 0;
            ebp_1 = ebx + 0xf0;
            int32_t edx_4 = *(ebx + 0x180);
            var_78 = &var_55;
            var_50 = 0f;
            int32_t var_4c_1 = 0;
            int32_t var_48_1 = 0;
            result = sub_4fec10(edx_4, &var_28, ebp_1, var_78, a1, var_70_2, __saved_edi_3);
            result = var_55;

            if (result)
            {
                result = *(ebx + 0x18d);

                if (!result)
                {
                    float var_10;
                    var_50 = var_28 * *(ebx + 0x120) + var_10 * *(ebx + 0x128)
                        + *(&var_20 + 4) * *(ebx + 0x124);
                    float var_c;
                    float var_4c_2 = *(&var_28 + 4) * *(ebx + 0x120) + var_c * *(ebx + 0x128)
                        + var_18 * *(ebx + 0x124);
                    float var_8;
                    float var_48_2 = var_20 * *(ebx + 0x120) + var_8 * *(ebx + 0x128)
                        + *(&var_18 + 4) * *(ebx + 0x124);
                    float var_44_1 = var_28 * *(ebx + 0x12c) + var_10 * *(ebx + 0x134)
                        + *(&var_20 + 4) * *(ebx + 0x130);
                    var_40 = *(&var_28 + 4) * *(ebx + 0x12c) + var_c * *(ebx + 0x134)
                        + var_18 * *(ebx + 0x130);
                    *(&var_40 + 4) = var_20 * *(ebx + 0x12c) + var_8 * *(ebx + 0x134)
                        + *(&var_18 + 4) * *(ebx + 0x130);
                    float var_38_1 = var_10 * *(ebx + 0x140) + *(&var_20 + 4) * *(ebx + 0x13c)
                        + var_28 * *(ebx + 0x138);
                    float var_34_1 = var_c * *(ebx + 0x140) + var_18 * *(ebx + 0x13c)
                        + *(&var_28 + 4) * *(ebx + 0x138);
                    result = *(ebx + 0x144);
                    int32_t var_4;
                    int32_t var_2c_1 = result + var_4 + 1;
                    float var_30_1 = var_8 * *(ebx + 0x140) + *(&var_18 + 4) * *(ebx + 0x13c)
                        + var_20 * *(ebx + 0x138);
                    memcpy(ebx + 0x70, &var_50, 0x28);
                }

                goto label_43dc50;
            }
        }
        else
        {
            void* eax_2 = sub_502130(*(ebx + 0x180));
            sub_502200(&var_50, *(ebx + 0x180), 0);
            int32_t edx_2 = *(ebx + 0x180);
            var_78 = eax_2 - 1;
            result = sub_502200(&var_28, edx_2, var_78);
            long double x87_r7_7 = *(ebx + 0x184) / var_54_1;
            ebp_1 = ebx + 0xf0;
            *ebp_1 = (var_28 - var_50) * x87_r7_7 + var_50;
            int32_t var_48;
            *(ebx + 0xf8) = (var_20 - var_48) * x87_r7_7 + var_48;
            *(ebx + 0x100) = (var_18 - var_40) * x87_r7_7 + var_40;
        label_43dc50:
            result = var_55;

            if (result)
            {
                long double x87_r7_47 = *(ebx + 0x9c);
                long double x87_r6_48 = *(ebx + 0xa0);
                x87_r6_48 - x87_r7_47;
                long double x87_r7_48;

                if (!(*(&((x87_r6_48 < x87_r7_47 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_48, x87_r7_47) ? 1 : 0) << 0xa
                        | (x87_r6_48 == x87_r7_47 ? 1 : 0) << 0xe) + 1) & 1))
                    x87_r7_48 = *(ebx + 0xa0);
                else
                    x87_r7_48 = *(ebx + 0x9c);

                long double x87_r6_49 = *(ebx + 0x98);
                x87_r6_49 - x87_r7_48;
                long double x87_r7_50;

                if (*(&((x87_r6_49 < x87_r7_48 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_49, x87_r7_48) ? 1 : 0) << 0xa
                    | (x87_r6_49 == x87_r7_48 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double x87_r7_51 = *(ebx + 0x9c);
                    long double x87_r6_50 = *(ebx + 0xa0);
                    x87_r6_50 - x87_r7_51;

                    if (!(*(&((x87_r6_50 < x87_r7_51 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_50, x87_r7_51) ? 1 : 0) << 0xa
                            | (x87_r6_50 == x87_r7_51 ? 1 : 0) << 0xe) + 1) & 1))
                        x87_r7_50 = *(ebx + 0xa0);
                    else
                        x87_r7_50 = *(ebx + 0x9c);
                }
                else
                    x87_r7_50 = *(ebx + 0x98);

                float __saved_edi_5 = sub_4d0950(*(ebx + 0x6c)) * x87_r7_50;
                return sub_4c6940(Level_StartMission_4(), ebx, ebp_1, __saved_edi_5);
            }
        }
    }

    return result;
}
