#include "GlassShatter_Init.h"
int32_t GlassShatter_Init()

{
    Sys_ResolveSymbol_13(0x57c230);
    int32_t v_10 = 0;

    for (float* i = &g_57c280; i < 0x57c730; )
    {
        float v_4_1 = Sys_AllocateMemory_14(0x57c230) * 40f - 20f;
        float v_8_1 = Sys_AllocateMemory_14(0x57c230) * 40f - 20f;
        float v_14_1 = v_10;
        int32_t objC1;
        long double fp0_3;
        fp0_3 = Sys_AllocateMemory_14(0x57c230);
        int32_t v_20_1 = objC1;
        int32_t v_24_1 = objC1;
        Sys_ReadFileBlock_12(i, v_14_1 * v_4_1 * 0.00111111114f, v_14_1 * v_8_1 * 0.00111111114f,
            (fp0_3 * 40f - 20f) * v_14_1 * 0.00111111114f);
        i = &i[0xa];
        v_10 += 1;
    }

    int32_t v_1c_2 = 0;
    int16_t valA3 = TaskType_Register("GlassShatter", 0x2b048, QTask_OpenEvent_2(), 0);
    g_57c240 = valA3;
    QTask_TriggerEvent(valA3, 1, GlassShatter_LoadParameters);
    return QTask_TriggerEvent(g_57c240, 2, sub_44a1a0);
}
