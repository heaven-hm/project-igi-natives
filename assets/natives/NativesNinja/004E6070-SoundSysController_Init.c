#include "004E6070-SoundSysController_Init.h"
/* 0x004e6070 SoundSysController_Init full linked: callers=1 callees=27 */
int32_t sub_4e6070()

{
    sub_4e7350(0);
    g_a5e60c = sub_4c1800(0x100);
    g_a5e610 = sub_4c1800(8);
    int32_t var_c = 0;
    g_548808 = TaskType_Register("SoundSysController", 0x20, QTask_OpenEvent_2(), 0);
    int32_t var_c_1 = 0;
    g_54880a = TaskType_Register("SoundSysDef", 0xa0, QTask_OpenEvent_2(), 0);
    int32_t var_c_2 = 0;
    int16_t eax_7 = TaskType_Register("SoundSysDefParent", 0xa0, QTask_OpenEvent_2(), 0);
    int16_t edx = g_548808;
    int16_t ecx_1 = g_54880a;
    g_54880e = eax_7;
    g_54880c = ecx_1;
    g_548810 = eax_7;
    QTask_RemoveEventCallback(edx, 0, sub_4d3710);
    QTask_TriggerEvent(g_548808, 1, sub_4e62b0);
    QTask_TriggerEvent(g_548808, 2, sub_4d3710);
    QTask_RemoveEventCallback(g_54880a, 0, sub_4e5ec0);
    QTask_TriggerEvent(g_54880a, 2, sub_4e5f50);
    int32_t eax_10 = sub_4e6630();
    QTask_RemoveEventCallback(g_54880a, eax_10, sub_4e5f70);
    QTask_RemoveEventCallback(g_54880e, 0, sub_4e6000);
    g_a5e5f8 = 1;
    g_limit_a = 0;
    int32_t eax_11 = sub_497510();
    g_a5e5f0 = eax_11;
    void* eax_15 = Mem_Alloc(eax_11 * 0x78, 4);
    int32_t eax_16 = g_a5e5f0;
    g_a5e600 = eax_15;
    int32_t i = 0;
    int32_t ecx_5 = eax_16 * 0x78;
    __builtin_memset(__builtin_memset(eax_15, 0, ecx_5 & 0xfffffffc), 0, ecx_5 & 3);

    if (g_a5e5f0 > 0)
    {
        void* edi_2 = nullptr;

        do
        {
            sub_4e6290(edi_2 + g_a5e600, &g_a5e5ec);
            i += 1;
            edi_2 += 0x78;
        } while (i < g_a5e5f0);
    }

    Game_DefineOptions("DefineGroup", Define_Group, 0, 0xffffffff);
    Game_DefineOptions("DefineSound", Define_Sound, 0, 0xffffffff);
    Game_DefineOptions("DefineGraph", Define_Graph, 0, 0xffffffff);
    Game_DefineOptions("DefineTriggerOnce", Define_TriggerOnce, 0, 0xffffffff);
    char result = sub_495cb0();
    g_a5e60a = !result;
    return result;
}
