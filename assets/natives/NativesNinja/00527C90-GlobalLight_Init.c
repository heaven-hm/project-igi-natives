#include "00527C90-GlobalLight_Init.h"
/* 0x00527c90 GlobalLight_Init full linked: callers=1 callees=58 */
int32_t* sub_527c90()

{
    int32_t var_1e4 = 0;
    g_a8408c = TaskType_Register("GlobalLight", 0x1b8, QTask_OpenEvent_2(), 0);
    int32_t var_1e4_1 = 0;
    g_a84374 = TaskType_Register("GlobalLightKeyframe", 0x1a4, QTask_OpenEvent_2(), 0);
    QTask_RemoveEventCallback(g_a8408c, 0, sub_5280e0);
    QTask_TriggerEvent(g_a8408c, 1, sub_4d3710);
    QTask_TriggerEvent(g_a8408c, 2, sub_528160);
    int32_t eax_4 = sub_4f1a60();
    int32_t var_1e8 = eax_4;
    eax_4 = g_a8408c;
    QTask_RemoveEventCallback(eax_4, var_1e8, sub_528170);
    int32_t eax_5 = sub_4f1a70();
    QTask_RemoveEventCallback(g_a8408c, eax_5, sub_528180);
    QTask_RemoveEventCallback(g_a84374, 0, sub_528260);
    QTask_TriggerEvent(g_a84374, 2, sub_528400);
    int32_t eax_7 = sub_4f1a60();
    QTask_RemoveEventCallback(g_a84374, eax_7, sub_5283f0);
    int32_t eax_8 = sub_4f1a70();
    QTask_RemoveEventCallback(g_a84374, eax_8, sub_5282c0);
    g_a84088 = sub_4f1950(6);
    int32_t eax_10 = sub_4f0f50();
    void var_1b8;
    void var_170;
    sub_4f1a80(g_a84088, &var_1b8, &var_170, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0f40();
    void var_20;
    sub_4f1a80(g_a84088, &var_1b8, &var_20, eax_11, 7, 0);
    int32_t eax_12 = sub_4f0f40();
    void var_14;
    sub_4f1a80(g_a84088, &var_1b8, &var_14, eax_12, 7, 0);
    int32_t eax_13 = sub_4f0f50();
    void var_8;
    sub_4f1a80(g_a84088, &var_1b8, &var_8, eax_13, 7, 0x534ca0);
    int32_t eax_14 = sub_4f0ef0();
    void var_3;
    sub_4f1a80(g_a84088, &var_1b8, &var_3, eax_14, 6, 0);
    int32_t eax_15 = sub_4f0ef0();
    void var_4;
    sub_4f1a80(g_a84088, &var_1b8, &var_4, eax_15, 6, 0);
    g_a83f44 = sub_4f1950(0x28);
    int32_t eax_17 = sub_4f0ef0();
    sub_4f1a80(g_a83f44, 0xa84130, 0xa842d0, eax_17, 7, 0);

    for (int32_t i = 0; i < 5; i += 1)
    {
        int32_t var_1d8;

        if (i)
        {
            int32_t i_1 = i;
            Game_DataSymbolLoad(&var_1d8, "object category %d");
        }
        else
        {
            var_1d8 = g_54f170[0];
            int32_t var_1d4_1 = g_54f170[4][0];
        }

        int32_t esi_2 = i << 5;
        int32_t* var_1e4_2 = &var_1d8;
        Game_DataSymbolLoad(esi_2 + 0xa83e00, "Ambient color %s");
        int32_t* var_1f0_6 = &var_1d8;
        Game_DataSymbolLoad(esi_2 + 0xa842d4, "Fog color %s");
        int32_t* var_1fc_1 = &var_1d8;
        Game_DataSymbolLoad(esi_2 + 0xa83fe8, "Fog density %s");
        int32_t* var_208_1 = &var_1d8;
        Game_DataSymbolLoad(esi_2 + 0xa83ea4, "Scale R %s");
        int32_t* var_214_1 = &var_1d8;
        Game_DataSymbolLoad(esi_2 + 0xa83f48, "Scale G %s");
        int32_t* var_220_1 = &var_1d8;
        Game_DataSymbolLoad(esi_2 + 0xa84090, "Scale B %s");
        int32_t* var_1e4_3 = &var_1d8;
        Game_DataSymbolLoad(esi_2 + 0xa83d60, "Link setting %s");
        int32_t esi_6 = i * 0x44;
        int32_t eax_21 = sub_4f0f40();
        sub_4f1a80(g_a83f44, 0xa84130, esi_6 + 0xa8417c, eax_21, 7, 0);
        int32_t eax_23 = sub_4f0f40();
        sub_4f1a80(g_a83f44, 0xa84130, esi_6 + 0xa84188, eax_23, 7, 0);
        int32_t eax_25 = sub_4f0f50();
        sub_4f1a80(g_a83f44, 0xa84130, esi_6 + 0xa84194, eax_25, 7, 0);
        int32_t eax_26 = sub_4f0fa0();
        sub_4f1a80(g_a83f44, 0xa84130, esi_6 + 0xa841bc, eax_26, 7, 0);
    }

    int32_t eax_28 = sub_4f0f40();
    sub_4f1a80(g_a83f44, 0xa84130, 0xa84150, eax_28, 7, 0);
    int32_t eax_29 = sub_4f0f40();
    sub_4f1a80(g_a83f44, 0xa84130, 0xa8415c, eax_29, 7, 0);
    int32_t eax_31 = sub_4f0f40();
    sub_4f1a80(g_a83f44, 0xa84130, 0xa84168, eax_31, 7, 0);
    int32_t eax_32 = sub_4f0f50();
    sub_4f1a80(g_a83f44, 0xa84130, 0xa84174, eax_32, 7, 0);
    return sub_4e8290(sub_4d3710);
}
