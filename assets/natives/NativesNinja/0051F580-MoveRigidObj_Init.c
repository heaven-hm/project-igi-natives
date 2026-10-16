#include "0051F580-MoveRigidObj_Init.h"
/* 0x0051f580 MoveRigidObj_Init full linked: callers=1 callees=35 */
void* sub_51f580()

{
    int32_t var_21c = 0;
    int16_t eax_1 = TaskType_Register("MoveRigidObj", 0x208, sub_4c48c0(), 0);
    g_a837cc = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_51f810);
    QTask_TriggerEvent(g_a837cc, 1, sub_51faa0);
    QTask_TriggerEvent(g_a837cc, 2, sub_51fa30);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_a837cc, eax_3, sub_51fa90);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_220_1 = eax_4;
    eax_4 = g_a837cc;
    QTask_RemoveEventCallback(eax_4, var_220_1, sub_51fd60);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_a837cc, eax_5, sub_51f980);
    int32_t eax_6 = sub_4f1220();
    QTask_TriggerEvent(g_a837cc, eax_6, sub_51f9e0);
    int32_t edi = 0;
    g_a837d0 = sub_4f1950(0x14);
    void var_b0;
    void* ebx = &var_b0;
    void var_118;
    void* ebp = &var_118;
    void var_208;

    for (void* i = nullptr; i < 0x20; )
    {
        int32_t var_21c_1 = edi;
        Game_DataSymbolLoad(i + 0xa83814, "Position %d");
        int32_t var_228_1 = edi;
        Game_DataSymbolLoad(i + 0xa837d4, "Alpha %d");
        int32_t var_234_1 = edi;
        Game_DataSymbolLoad(i + 0xa837ac, "Beta %d");
        int32_t var_240_1 = edi;
        Game_DataSymbolLoad(i + 0xa837f4, "Gamma %d");
        int32_t eax_10 = sub_4f1010();
        sub_4f1a80(g_a837d0, &var_208, ebp, eax_10, 7, 0);
        int32_t eax_11 = sub_4f0f20();
        sub_4f1a80(g_a837d0, &var_208, ebx - 8, eax_11, 7, 0);
        int32_t eax_13 = sub_4f0f20();
        sub_4f1a80(g_a837d0, &var_208, ebx, eax_13, 7, 0);
        int32_t eax_14 = sub_4f0f20();
        sub_4f1a80(g_a837d0, &var_208, ebx + 8, eax_14, 7, 0);
        i += 0x10;
        edi += 1;
        ebp += 0x18;
        ebx += 4;
    }

    int32_t eax_15 = sub_4f0fd0();
    void var_88;
    sub_4f1a80(g_a837d0, &var_208, &var_88, eax_15, 3, 0);
    int32_t eax_16 = sub_4f0fc0();
    void var_54;
    sub_4f1a80(g_a837d0, &var_208, &var_54, eax_16, 7, 0);
    int32_t eax_17 = sub_4f0f80();
    void var_68;
    sub_4f1a80(g_a837d0, &var_208, &var_68, eax_17, 3, 0);
    int32_t eax_18 = sub_4f1000();
    void var_58;
    sub_4f1a80(g_a837d0, &var_208, &var_58, eax_18, 3, 0);
    return TaskType_Set("TASKTYPE_MOVERIGIDOBJ", *g_a837cc);
}
