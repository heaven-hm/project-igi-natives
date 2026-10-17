// Original IGI.EXE function: MipMapControl_Init (VA 0x0051ECB0; static CFG gate PASS, CFG score 1.000).
#include "MipMapControl_Init.h"
int32_t* MipMapControl_Init()

{
    int32_t item_34 = 0;
    int16_t data_1 = TaskType_Register("MipMapControl", 0x30, QTask_OpenEvent_2(), 0);
    g_54eee0 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_51ee80);
    int32_t data_2 = Script_ParseEnumReal32_8();
    int32_t item_38 = data_2;
    data_2 = g_54eee0;
    QTask_RemoveEventCallback(data_2, item_38, MipMapControl_LoadParameters);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_54eee0, data_3, sub_51eeb0);
    g_a83790 = Script_EvaluateCondition_7(4);
    int32_t data_5 = Script_ParseEnumInt32_4();
    void item_30;
    void item_4;
    Script_UndefinedParameterTy(g_a83790, &item_30, &item_4, data_5, 7, 0);
    g_a8378c = 2;
    g_a83788 = 0;
    TaskType_Set("GR_MIPMAP_DISABLE", 0);
    TaskType_Set("GR_MIPMAP_NEAREST", 1);
    TaskType_Set("GR_MIPMAP_NEAREST_DITHER", 2);
    int32_t data_6 = Script_ParseEnumString_3();
    void item_8;
    Script_UndefinedParameterTy(g_a83790, &item_30, &item_8, data_6, 7, &g_a83788);
    g_a8379c = 0x40f80000;
    g_a83798 = 0xc1000000;
    int32_t data_7 = Script_EvaluateCondition_2();
    void item_10;
    Script_UndefinedParameterTy(g_a83790, &item_30, &item_10, data_7, 7, &g_a83798);
    int32_t data_8 = Script_EvaluateCondition_2();
    void item_c;
    return Script_UndefinedParameterTy(g_a83790, &item_30, &item_c, data_8, 7, &g_a83798);
}
