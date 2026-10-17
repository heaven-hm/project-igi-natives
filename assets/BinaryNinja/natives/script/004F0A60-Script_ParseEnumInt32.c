// IGI native provenance: Script_ParseEnumInt32 - 0x004F0A60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F0A60-Script_ParseEnumInt32.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumInt32.h"
int32_t* Script_ParseEnumInt32()

{
    for (int32_t* i = &g_a70ca8; i < &g_a7186c; i = &i[3])
    {
        int32_t* j_1 = *i;

        for (int32_t* j = *j_1; j; j = *j)
        {
            Script_ParseEnumReal32(j_1);
            j_1 = j;
        }
    }

    Script_SpawnNewTask_8(g_a70c70);
    Script_SpawnNewTask_8(g_a70c8c);
    Script_SpawnNewTask_8(g_a75898);
    Script_SpawnNewTask_8(g_a70c88);
    Script_SpawnNewTask_8(g_a70c84);
    Script_SpawnNewTask_8(g_a70ca4);
    Script_SpawnNewTask_8(g_a71880);
    Script_SpawnNewTask_8(g_a7187c);
    Script_SpawnNewTask_8(g_a758a0);
    Script_SpawnNewTask_8(g_a70c80);
    Script_SpawnNewTask_8(g_a70ca0);
    Script_SpawnNewTask_8(g_a71878);
    Script_SpawnNewTask_8(g_a71874);
    Script_SpawnNewTask_8(g_a75890);
    Script_SpawnNewTask_8(g_a71870);
    Script_SpawnNewTask_8(g_a70c68);
    Script_SpawnNewTask_8(g_a70c6c);
    Script_SpawnNewTask_8(g_a70c7c);
    Script_SpawnNewTask_8(g_a70c78);
    Script_SpawnNewTask_8(g_a70c9c);
    Script_SpawnNewTask_8(g_a71884);
    Script_SpawnNewTask_8(g_a71888);
    Script_SpawnNewTask_8(g_a7186c);
    Script_SpawnNewTask_8(g_a7188c);
    Script_SpawnNewTask_8(g_a75894);
    Script_SpawnNewTask_8(g_a70c90);
    QTask_InitContext(g_54dda4);
    QTask_InitContext(g_54dda5);
    QTask_CreateTask_2(g_54dda8);
    QTask_CreateTask_2(g_54ddac);
    QTask_CreateTask_2(g_54ddb0);
    int16_t entity_10 = g_54dd0e;
    g_54dda4 = 0xff;
    g_54dda5 = 0xff;
    g_54dda8 = 0xff;
    g_54ddac = 0xff;
    g_54ddb0 = 0xff;
    QTask_CloseEvent_2(entity_10);
    QTask_CloseEvent_2(g_54dd10);
    QTask_CloseEvent_2(g_54dd12);
    QTask_CloseEvent_2(g_54dd14);
    QTask_CloseEvent_2(g_54dd0c);
    int32_t* result;

    for (int32_t* i_1 = &g_a71890; i_1 < &g_a75890; i_1 = &i_1[1])
    {
        result = *i_1;

        if (result)
        {
            result = Qtask_UpdateList(result);
            *i_1 = 0;
        }
    }

    return result;
}
