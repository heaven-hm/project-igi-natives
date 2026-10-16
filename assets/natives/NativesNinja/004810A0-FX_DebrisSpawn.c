#include "004810A0-FX_DebrisSpawn.h"
/* 0x004810a0 FX_DebrisSpawn full linked: callers=2 callees=15 */
struct status_msg* sub_4810a0(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, int32_t a7, uint32_t a8, uint32_t a9, int32_t* a10, int32_t a11, int32_t a12, int32_t* a13, int32_t a14, int32_t a15, int32_t* a16, uint32_t a17, uint32_t a18, uint32_t a19, uint32_t a20)

{
    int32_t kind;
    kind = g_5c1154;
    struct status_msg* result = QTask_HandleInput(sub_4f0ee0(), kind, 0);
    memcpy(&result->head[8], a1, 0x18);
    result->head[0xf] = a3;
    result->head[0xe] = a2;
    result->head[0x10] = a3;
    result->head[0x14] = a4;
    result->head[0x16] = a6;
    result->head[0x15] = a5;
    result->head[0x11] = *a16;
    result->head[0x12] = a16[1];
    result->head[0x13] = a16[2];
    long double x87_r7 = result->head[0x11];
    long double temp0 = 0f;
    x87_r7 - temp0;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_48113e:
        long double x87_r7_3 = result->head[0x13];
        long double x87_r6_1 = result->head[0x12];
        long double x87_r5_1 = result->head[0x11];
        long double x87_r7_5 =
            1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_3 * x87_r7_3);
        result->head[0x11] = result->head[0x11] * x87_r7_5;
        result->head[0x12] = result->head[0x12] * x87_r7_5;
        result->head[0x13] = result->head[0x13] * x87_r7_5;
    }
    else
    {
        long double x87_r7_1 = result->head[0x12];
        long double temp1_1 = 0f;
        x87_r7_1 - temp1_1;

        if (!(*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_48113e;

        long double x87_r7_2 = result->head[0x13];
        long double temp2_1 = 0f;
        x87_r7_2 - temp2_1;

        if (!(*(&((x87_r7_2 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_48113e;
    }

    result->head[0x17] = a17;
    result->head[0x18] = a18;
    result->head[0x19] = a19;
    result->head[0x1a] = a8;
    result->head[0x1b] = a9;
    int32_t* var_1c;

    if (a10 && *a10)
    {
        uint32_t eax_8 = sub_47e6f0();
        int32_t ecx_5 = 0;
        ecx_5 = *(*a10 + 0x1c);

        if (*(((eax_8 * 0x180 + ecx_5) << 2) + &g_a96ae0))
        {
            int32_t edx_8 = g_5c1164 + 0x18;
            var_1c = a10;
            int32_t esi_4 = *a10;
            int32_t var_14_1 = edx_8;
            int32_t var_18_1 = 0;
            int32_t var_10_1 = a7;
            uint32_t eax_13 = sub_47e6f0();
            int32_t edx_9 = 0;
            edx_9 = *(esi_4 + 0x1c);
            (*(((eax_13 * 0x180 + edx_9) << 2) + &g_a96ae0))(esi_4, &var_1c);
        }
    }

    int32_t edi_1 = a12;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi_1;
        edi_1 += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx_9 = ~i;
    int32_t esi_6;
    int32_t edi_4;
    edi_4 = memcpy(&result->head[0x1c], edi_1 - ecx_9, ecx_9 & 0xfffffffc);
    memcpy(edi_4, esi_6, ecx_9 & 3);
    float var_28 = sub_4b4770(Level_SetMission_5()) * 0.628318548f;
    float var_24 = sub_4b4770(Level_SetMission_5()) * 0.628318548f;
    float var_20 = sub_4b4770(Level_SetMission_5()) * 0.628318548f;
    float* var_40_2 = &var_28;
    result->head[0x20] = sub_503c00(0x2d, a11, 0, 0x3f7ae148, 0x3f19999a, 0x4232674f,
        result->head[0x15] * 0.000219726557f, &var_28, 0);

    if (a13 == 0xffffffff)
    {
        result->head[0x21] = a20;
        return result;
    }

    var_1c = a13;
    int32_t var_14_2 = a14;
    int32_t var_18_2 = 1;
    int32_t var_c = a1;
    int32_t var_10_2 = a15;
    int32_t var_4 = 0;
    struct status_msg* result_1 = result;
    sub_450ce0(&var_1c);
    result->head[0x21] = a20;
    return result;
}
