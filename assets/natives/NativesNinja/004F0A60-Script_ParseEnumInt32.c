#include "004F0A60-Script_ParseEnumInt32.h"
/* 0x004f0a60 Script_ParseEnumInt32 full linked: callers=1 callees=38 */
int32_t* sub_4f0a60()

{
    for (int32_t* i = &g_a70ca8; i < &g_a7186c; i = &i[3])
    {
        int32_t* j_1 = *i;

        for (int32_t* j = *j_1; j; j = *j)
        {
            sub_4f0c90(j_1);
            j_1 = j;
        }
    }

    sub_4f1a40(g_a70c70);
    sub_4f1a40(g_a70c8c);
    sub_4f1a40(g_a75898);
    sub_4f1a40(g_a70c88);
    sub_4f1a40(g_a70c84);
    sub_4f1a40(g_a70ca4);
    sub_4f1a40(g_a71880);
    sub_4f1a40(g_a7187c);
    sub_4f1a40(g_a758a0);
    sub_4f1a40(g_a70c80);
    sub_4f1a40(g_a70ca0);
    sub_4f1a40(g_a71878);
    sub_4f1a40(g_a71874);
    sub_4f1a40(g_a75890);
    sub_4f1a40(g_a71870);
    sub_4f1a40(g_a70c68);
    sub_4f1a40(g_a70c6c);
    sub_4f1a40(g_a70c7c);
    sub_4f1a40(g_a70c78);
    sub_4f1a40(g_a70c9c);
    sub_4f1a40(g_a71884);
    sub_4f1a40(g_a71888);
    sub_4f1a40(g_a7186c);
    sub_4f1a40(g_a7188c);
    sub_4f1a40(g_a75894);
    sub_4f1a40(g_a70c90);
    QTask_InitContext(g_54dda4);
    QTask_InitContext(g_54dda5);
    QTask_CreateTask_2(g_54dda8);
    QTask_CreateTask_2(g_54ddac);
    QTask_CreateTask_2(g_54ddb0);
    int16_t ecx_10 = g_54dd0e;
    g_54dda4 = 0xff;
    g_54dda5 = 0xff;
    g_54dda8 = 0xff;
    g_54ddac = 0xff;
    g_54ddb0 = 0xff;
    QTask_CloseEvent_2(ecx_10);
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
