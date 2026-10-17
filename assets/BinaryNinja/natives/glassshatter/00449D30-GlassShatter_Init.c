// Original IGI.EXE function: GlassShatter_Init (VA 0x00449D30; static CFG gate PASS, CFG score 1.000).
#include "GlassShatter_Init.h"
int32_t GlassShatter_Init()

{
    Sys_ResolveSymbol_13(0x57c230);
    int32_t item_10 = 0;

    for (float* i = &g_57c280; i < 0x57c730; )
    {
        float item_4_1 = Sys_AllocateMemory_14(0x57c230) * 40.0f - 20.0f;
        float item_8_1 = Sys_AllocateMemory_14(0x57c230) * 40.0f - 20.0f;
        float item_14_1 = item_10;
        int32_t entity_1;
        long double fp0_3;
        fp0_3 = Sys_AllocateMemory_14(0x57c230);
        int32_t item_20_1 = entity_1;
        int32_t item_24_1 = entity_1;
        Sys_ReadFileBlock_12(i, item_14_1 * item_4_1 * 0.00111111114f, item_14_1 * item_8_1 * 0.00111111114f,
            (fp0_3 * 40.0f - 20.0f) * item_14_1 * 0.00111111114f);
        i = &i[0xa];
        item_10 += 1;
    }

    int32_t item_1c_2 = 0;
    int16_t data_3 = TaskType_Register("GlassShatter", 0x2b048, QTask_OpenEvent_2(), 0);
    g_57c240 = data_3;
    QTask_TriggerEvent(data_3, 1, GlassShatter_LoadParameters);
    return QTask_TriggerEvent(g_57c240, 2, sub_44a1a0);
}
