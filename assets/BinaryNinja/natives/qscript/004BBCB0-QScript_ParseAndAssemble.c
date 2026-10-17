// Original IGI.EXE function: QScript_ParseAndAssemble (VA 0x004BBCB0; static CFG gate PASS, CFG score 0.965).
#include "QScript_ParseAndAssemble.h"
int32_t QScript_ParseAndAssemble(void* context, void* param_2)

// Sig: int QScript_ParseAndAssemble(char* srcText, int options)
// Note: PARSE+CODEGEN driver: logs "Parsing script and generating assembly
// code.", runs parser state globals (0xA442D0..), writes output ("Failed to
// open file '%s' for writing."). Params: srcText = script source, options =
// parser option word. Part of the QscCompile pipeline feeding QScript_Assemble.
{
    QScript_Cleanup(context);
    strncpy(&g_a442d0, "                     ", 0x15);
    int32_t item_858;
    int32_t* i_3 = &item_858;
    int32_t** item_854 = &i_3;
    item_858 = 0;
    g_a442c8 = 0;
    g_a442e4 = 0;
    int32_t dest_val = 0;
    char j_1;

    for (void* i = &g_a43ee0; i < &g_a442b4; )
    {
        Sys_FreeMemory_29(dest_val, 1, &j_1, 0);
        char j = j_1;
        strncpy(i, "                   ", 0x13);
        *(i + 0x13) = 0;

        if (j)
        {
            char* temp_2 = &j_1;
            char* entity_1 = i + 0xb;

            do
            {
                *entity_1 = j;
                j = temp_2[1];
                entity_1 = &entity_1[1];
                temp_2 = &temp_2[1];
            } while (j);
        }

        i += 0x14;
        dest_val += 1;
    }

    g_a965a8 = 0;
    void item_850;
    void item_830;
    void item_800;
    Script_BufInit(&item_830, &item_850, &item_800, 0x800);
    Sys_ResolveSymbol_30(&item_850, *(param_2 + 0x80), *(param_2 + 0x84));
    int32_t* data_3 = QFile_ReadWrite(context, "w");

    if (!data_3)
    {
        void* item_878_5 = context;
        Sys_CheckHeap_26("Failed to open file '%s' for writing.");
    }
    else
    {
        Sys_AllocateMemory_27("Parsing script and generating assembly code.\n");

        while (true)
        {
            j_1 = 0;
            void item_828;

            if (!Sys_CloseFileStream_31(&item_830, &item_828))
                break;

            if (!Sys_UnexpectedEndOfFile(&item_830, &j_1))
            {
                g_a442c8 += 1;
                break;
            }

            Camera_SetFieldOfView_33(&i_3, j_1);
            Sys_InternalErrorUnknown(data_3, j_1);
        }

        Sys_FreeMemory_27(0, data_3);
        Sys_OpenFileStream_27(data_3);
        Sys_ReadFileBlock_4(data_3);
    }

    int32_t* i_2 = i_3;

    for (int32_t* i_1 = *i_2; i_1; i_1 = *i_1)
    {
        Camera_ApplyHandiCam_33(i_2);
        Sys_UnknownBlockType(i_2);
        i_2 = i_1;
    }

    Sys_PopStack_30(&item_850);
    return g_a442c8;
}
