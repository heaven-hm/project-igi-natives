// Original IGI.EXE function: SoundSysController_Init (VA 0x004E6070; static CFG gate PASS, CFG score 0.975).
#include "SoundSysController_Init.h"
int32_t SoundSysController_Init()

{
    SoundSys_Update3DPosition_9(0);
    g_a5e60c = Mem_Alloc8(0x100);
    g_a5e610 = Mem_Alloc8(8);
    int32_t item_c = 0;
    g_548808 = TaskType_Register("SoundSysController", 0x20, QTask_OpenEvent_2(), 0);
    int32_t item_c_1 = 0;
    g_54880a = TaskType_Register("SoundSysDef", 0xa0, QTask_OpenEvent_2(), 0);
    int32_t item_c_2 = 0;
    int16_t data_7 = TaskType_Register("SoundSysDefParent", 0xa0, QTask_OpenEvent_2(), 0);
    int16_t temp_val = g_548808;
    int16_t entity_1 = g_54880a;
    g_54880e = data_7;
    g_54880c = entity_1;
    g_548810 = data_7;
    QTask_RemoveEventCallback(temp_val, 0, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_548808, 1, sub_4e62b0);
    QTask_TriggerEvent(g_548808, 2, AIGraph_LoadParameters);
    QTask_RemoveEventCallback(g_54880a, 0, sub_4e5ec0);
    QTask_TriggerEvent(g_54880a, 2, sub_4e5f50);
    int32_t data_10 = SoundSys_StopSoundSample_5();
    QTask_RemoveEventCallback(g_54880a, data_10, sub_4e5f70);
    QTask_RemoveEventCallback(g_54880e, 0, sub_4e6000);
    g_a5e5f8 = 1;
    g_limit_a = 0;
    int32_t data_11 = Display_OpenDevice_13();
    g_a5e5f0 = data_11;
    void* data_15 = Mem_Alloc(data_11 * 0x78, 4);
    int32_t data_16 = g_a5e5f0;
    g_a5e600 = data_15;
    int32_t i = 0;
    int32_t entity_5 = data_16 * 0x78;
    memset(memset(data_15, 0, entity_5 & 0xfffffffc), 0, entity_5 & 3);

    if (g_a5e5f0 > 0)
    {
        void* dest_2 = nullptr;

        do
        {
            SoundSys_LoadSoundDef_4(dest_2 + g_a5e600, &g_a5e5ec);
            i += 1;
            dest_2 += 0x78;
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
