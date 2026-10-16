#include "00449D30-GlassShatter_Init.h"
/* 0x00449d30 GlassShatter_Init full linked: callers=1 callees=9 */
int32_t sub_449d30()

{
    sub_4b4720(0x57c230);
    int32_t var_10 = 0;

    for (float* i = &g_57c280; i < 0x57c730; )
    {
        float var_4_1 = sub_4b4770(0x57c230) * 40f - 20f;
        float var_8_1 = sub_4b4770(0x57c230) * 40f - 20f;
        float var_14_1 = var_10;
        int32_t ecx_1;
        long double st0_3;
        st0_3 = sub_4b4770(0x57c230);
        int32_t var_20_1 = ecx_1;
        int32_t var_24_1 = ecx_1;
        sub_4b38e0(i, var_14_1 * var_4_1 * 0.00111111114f, var_14_1 * var_8_1 * 0.00111111114f,
            (st0_3 * 40f - 20f) * var_14_1 * 0.00111111114f);
        i = &i[0xa];
        var_10 += 1;
    }

    int32_t var_1c_2 = 0;
    int16_t eax_3 = TaskType_Register("GlassShatter", 0x2b048, QTask_OpenEvent_2(), 0);
    g_57c240 = eax_3;
    QTask_TriggerEvent(eax_3, 1, sub_449e50);
    return QTask_TriggerEvent(g_57c240, 2, sub_44a1a0);
}
