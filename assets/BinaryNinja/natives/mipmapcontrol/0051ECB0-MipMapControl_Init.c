#include "MipMapControl_Init.h"
int32_t* MipMapControl_Init()

{
    int32_t v_34 = 0;
    int16_t valA1 = TaskType_Register("MipMapControl", 0x30, QTask_OpenEvent_2(), 0);
    g_54eee0 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_51ee80);
    int32_t valA2 = Script_ParseEnumReal32_8();
    int32_t v_38 = valA2;
    valA2 = g_54eee0;
    QTask_RemoveEventCallback(valA2, v_38, MipMapControl_LoadParameters);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_54eee0, valA3, sub_51eeb0);
    g_a83790 = Script_EvaluateCondition_7(4);
    int32_t valA5 = Script_ParseEnumInt32_4();
    void v_30;
    void v_4;
    Script_UndefinedParameterTy(g_a83790, &v_30, &v_4, valA5, 7, 0);
    g_a8378c = 2;
    g_a83788 = 0;
    TaskType_Set("GR_MIPMAP_DISABLE", 0);
    TaskType_Set("GR_MIPMAP_NEAREST", 1);
    TaskType_Set("GR_MIPMAP_NEAREST_DITHER", 2);
    int32_t valA6 = Script_ParseEnumString_3();
    void v_8;
    Script_UndefinedParameterTy(g_a83790, &v_30, &v_8, valA6, 7, &g_a83788);
    g_a8379c = 0x40f80000;
    g_a83798 = 0xc1000000;
    int32_t valA7 = Script_EvaluateCondition_2();
    void v_10;
    Script_UndefinedParameterTy(g_a83790, &v_30, &v_10, valA7, 7, &g_a83798);
    int32_t valA8 = Script_EvaluateCondition_2();
    void v_c;
    return Script_UndefinedParameterTy(g_a83790, &v_30, &v_c, valA8, 7, &g_a83798);
}
