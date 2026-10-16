#include "004640B0-AI_AlertAllies_21.h"
/* 0x004640b0 AI_AlertAllies_21 full linked: callers=0 callees=6 */
int32_t sub_4640b0(float a1)

{
    int32_t* edi = a1;
    int32_t* esi = *edi;
    uint32_t eax_1 = sub_47e6f0();
    int32_t edx = 0;
    edx = *(*esi + 0x1c);
    int32_t result = eax_1 * 0x180 + edx;

    if (*((result << 2) + &g_a96ae0))
    {
        long double x87_r7_2 = *(edi + 8) - *(edi + 0x20);
        long double x87_r6_2 = *(edi + 0x10) - *(edi + 0x28);
        long double x87_r5_2 = *(edi + 0x18) - *(edi + 0x30);
        long double x87_r4_1 = esi[0xe];
        long double temp1_1 = 0f;
        x87_r4_1 - temp1_1;
        result = (x87_r4_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r4_1 == temp1_1 ? 1 : 0) << 0xe | 0x2800;

        if (!(*(&result + 1) & 0x40))
        {
        label_464126:
            long double x87_r4_4 = esi[0x10];
            long double x87_r3_1 = esi[0xf];
            long double x87_r2_1 = esi[0xe];
            long double x87_r4_6 =
                1.0 / sqrtl(x87_r2_1 * x87_r2_1 + x87_r3_1 * x87_r3_1 + x87_r4_4 * x87_r4_4);
            esi[0xe] = esi[0xe] * x87_r4_6;
            esi[0xf] = esi[0xf] * x87_r4_6;
            esi[0x10] = esi[0x10] * x87_r4_6;
        }
        else
        {
            long double x87_r4_2 = esi[0xf];
            long double temp2_1 = 0f;
            x87_r4_2 - temp2_1;
            result = (x87_r4_2 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_2, temp2_1) ? 1 : 0) << 0xa
                | (x87_r4_2 == temp2_1 ? 1 : 0) << 0xe | 0x2800;

            if (!(*(&result + 1) & 0x40))
                goto label_464126;

            long double x87_r4_3 = esi[0x10];
            long double temp4_1 = 0f;
            x87_r4_3 - temp4_1;
            result = (x87_r4_3 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_3, temp4_1) ? 1 : 0) << 0xa
                | (x87_r4_3 == temp4_1 ? 1 : 0) << 0xe | 0x2800;

            if (!(*(&result + 1) & 0x40))
                goto label_464126;
        }

        long double x87_r7_4 = x87_r5_2 * esi[0x10] + x87_r6_2 * esi[0xf] + x87_r7_2 * esi[0xe];
        long double temp3_1 = 0f;
        x87_r7_4 - temp3_1;
        result = (x87_r7_4 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp3_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            a1 = sub_4b4770(Level_SetMission_5()) * 204.800003f + 102.400002f;
            uint32_t eax_6 = sub_4b47c0(Level_SetMission_5(), 2);
            float eax_10;

            if (!eax_6)
                eax_10 = g_5bdb14 + 0x18;
            else if (eax_6 != 1)
                eax_10 = a1;
            else
                eax_10 = g_5bdb04 + 0x18;

            int32_t* var_10 = esi;
            void* esi_1 = *esi;
            float var_8_1 = eax_10;
            int32_t var_c_1 = 0;
            float var_4_1 = a1;
            uint32_t eax_12 = sub_47e6f0();
            int32_t ecx_3 = 0;
            ecx_3 = *(esi_1 + 0x1c);
            return (*(((eax_12 * 0x180 + ecx_3) << 2) + &g_a96ae0))(esi_1, &var_10);
        }
    }

    return result;
}
