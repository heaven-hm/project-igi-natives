#include "SoundSysController_Init.h"
int32_t SoundSysController_Init()

{
    SoundSys_Update3DPosition_9(0);
    g_a5e60c = Mem_Alloc8(0x100);
    g_a5e610 = Mem_Alloc8(8);
    int32_t v_c = 0;
    g_548808 = TaskType_Register("SoundSysController", 0x20, QTask_OpenEvent_2(), 0);
    int32_t v_c_1 = 0;
    g_54880a = TaskType_Register("SoundSysDef", 0xa0, QTask_OpenEvent_2(), 0);
    int32_t v_c_2 = 0;
    int16_t valA7 = TaskType_Register("SoundSysDefParent", 0xa0, QTask_OpenEvent_2(), 0);
    int16_t tmpD = g_548808;
    int16_t objC1 = g_54880a;
    g_54880e = valA7;
    g_54880c = objC1;
    g_548810 = valA7;
    QTask_RemoveEventCallback(tmpD, 0, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_548808, 1, sub_4e62b0);
    QTask_TriggerEvent(g_548808, 2, AIGraph_LoadParameters);
    QTask_RemoveEventCallback(g_54880a, 0, sub_4e5ec0);
    QTask_TriggerEvent(g_54880a, 2, sub_4e5f50);
    int32_t valA10 = SoundSys_StopSoundSample_5();
    QTask_RemoveEventCallback(g_54880a, valA10, sub_4e5f70);
    QTask_RemoveEventCallback(g_54880e, 0, sub_4e6000);
    g_a5e5f8 = 1;
    g_limit_a = 0;
    int32_t valA11 = Display_OpenDevice_13();
    g_a5e5f0 = valA11;
    void* valA15 = Mem_Alloc(valA11 * 0x78, 4);
    int32_t valA16 = g_a5e5f0;
    g_a5e600 = valA15;
    int32_t i = 0;
    int32_t objC5 = valA16 * 0x78;
    __builtin_memset(__builtin_memset(valA15, 0, objC5 & 0xfffffffc), 0, objC5 & 3);

    if (g_a5e5f0 > 0)
    {
        void* dstD2 = nullptr;

        do
        {
            SoundSys_LoadSoundDef_4(dstD2 + g_a5e600, &g_a5e5ec);
            i += 1;
            dstD2 += 0x78;
        } while (i < g_a5e5f0);
    }

    Game_DefineOptions("DefineGroup", Define_Group, 0, 0xffffffff);
    Game_DefineOptions("DefineSound", Define_Sound, 0, 0xffffffff);
    Game_DefineOptions("DefineGraph", Define_Graph, 0, 0xffffffff);
    Game_DefineOptions("DefineTriggerOnce", Define_TriggerOnce, 0, 0xffffffff);
    char result = Display_CheckCapabilities_9();
    g_a5e60a = !result;
    return result;
}
