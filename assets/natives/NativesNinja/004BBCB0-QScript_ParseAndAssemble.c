#include "004BBCB0-QScript_ParseAndAssemble.h"
/* 0x004bbcb0 QScript_ParseAndAssemble full linked: callers=2 callees=19 */
int32_t QScript_ParseAndAssemble(void* a1, void* a2)

// Sig: int QScript_ParseAndAssemble(char* srcText, int options)
// Note: PARSE+CODEGEN driver: logs "Parsing script and generating assembly
// code.", runs parser state globals (0xA442D0..), writes output ("Failed to
// open file '%s' for writing."). Params: srcText = script source, options =
// parser option word. Part of the QscCompile pipeline feeding QScript_Assemble.
{
    QScript_Cleanup(a1);
    __builtin_strncpy(&g_a442d0, "                     ", 0x15);
    int32_t var_858;
    int32_t* i_3 = &var_858;
    int32_t** var_854 = &i_3;
    var_858 = 0;
    g_a442c8 = 0;
    g_a442e4 = 0;
    int32_t edi = 0;
    char j_1;

    for (void* i = &g_a43ee0; i < &g_a442b4; )
    {
        sub_4bd3f0(edi, 1, &j_1, 0);
        char j = j_1;
        __builtin_strncpy(i, "                   ", 0x13);
        *(i + 0x13) = 0;

        if (j)
        {
            char* edx_2 = &j_1;
            char* ecx_1 = i + 0xb;

            do
            {
                *ecx_1 = j;
                j = edx_2[1];
                ecx_1 = &ecx_1[1];
                edx_2 = &edx_2[1];
            } while (j);
        }

        i += 0x14;
        edi += 1;
    }

    g_a965a8 = 0;
    void var_850;
    void var_830;
    void var_800;
    Script_BufInit(&var_830, &var_850, &var_800, 0x800);
    sub_4bf1c0(&var_850, *(a2 + 0x80), *(a2 + 0x84));
    int32_t* eax_3 = QFile_ReadWrite(a1, "w");

    if (!eax_3)
    {
        void* var_878_5 = a1;
        sub_4bbe90("Failed to open file '%s' for writing.");
    }
    else
    {
        sub_4bbef0("Parsing script and generating assembly code.\n");

        while (true)
        {
            j_1 = 0;
            void var_828;

            if (!sub_4bfc70(&var_830, &var_828))
                break;

            if (!sub_4bf1f0(&var_830, &j_1))
            {
                g_a442c8 += 1;
                break;
            }

            sub_4af8f0(&i_3, j_1);
            sub_4bbf80(eax_3, j_1);
        }

        sub_4bbf40(0, eax_3);
        sub_4bbf60(eax_3);
        sub_4b1690(eax_3);
    }

    int32_t* i_2 = i_3;

    for (int32_t* i_1 = *i_2; i_1; i_1 = *i_1)
    {
        sub_4af960(i_2);
        sub_4bf8f0(i_2);
        i_2 = i_1;
    }

    sub_4befc0(&var_850);
    return g_a442c8;
}
