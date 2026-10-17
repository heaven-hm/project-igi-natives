// Original IGI.EXE function: QScript_ParseAndAssemble (VA 0x004BBCB0; static CFG gate PASS, CFG score 0.965).
#include "QScript_ParseAndAssemble.h"
int32_t QScript_ParseAndAssemble(void* a1, void* a2)

// Sig: int QScript_ParseAndAssemble(char* srcText, int options)
// Note: PARSE+CODEGEN driver: logs "Parsing script and generating assembly
// code.", runs parser state globals (0xA442D0..), writes output ("Failed to
// open file '%s' for writing."). Params: srcText = script source, options =
// parser option word. Part of the QscCompile pipeline feeding QScript_Assemble.
{
    QScript_Cleanup(a1);
    __builtin_strncpy(&g_a442d0, "                     ", 0x15);
    int32_t v_858;
    int32_t* i_3 = &v_858;
    int32_t** v_854 = &i_3;
    v_858 = 0;
    g_a442c8 = 0;
    g_a442e4 = 0;
    int32_t dstD = 0;
    char j_1;

    for (void* i = &g_a43ee0; i < &g_a442b4; )
    {
        Sys_FreeMemory_29(dstD, 1, &j_1, 0);
        char j = j_1;
        __builtin_strncpy(i, "                   ", 0x13);
        *(i + 0x13) = 0;

        if (j)
        {
            char* tmpD2 = &j_1;
            char* objC1 = i + 0xb;

            do
            {
                *objC1 = j;
                j = tmpD2[1];
                objC1 = &objC1[1];
                tmpD2 = &tmpD2[1];
            } while (j);
        }

        i += 0x14;
        dstD += 1;
    }

    g_a965a8 = 0;
    void v_850;
    void v_830;
    void v_800;
    Script_BufInit(&v_830, &v_850, &v_800, 0x800);
    Sys_ResolveSymbol_30(&v_850, *(a2 + 0x80), *(a2 + 0x84));
    int32_t* valA3 = QFile_ReadWrite(a1, "w");

    if (!valA3)
    {
        void* v_878_5 = a1;
        Sys_CheckHeap_26("Failed to open file '%s' for writing.");
    }
    else
    {
        Sys_AllocateMemory_27("Parsing script and generating assembly code.\n");

        while (true)
        {
            j_1 = 0;
            void v_828;

            if (!Sys_CloseFileStream_31(&v_830, &v_828))
                break;

            if (!Sys_UnexpectedEndOfFile(&v_830, &j_1))
            {
                g_a442c8 += 1;
                break;
            }

            Camera_SetFieldOfView_33(&i_3, j_1);
            Sys_InternalErrorUnknown(valA3, j_1);
        }

        Sys_FreeMemory_27(0, valA3);
        Sys_OpenFileStream_27(valA3);
        Sys_ReadFileBlock_4(valA3);
    }

    int32_t* i_2 = i_3;

    for (int32_t* i_1 = *i_2; i_1; i_1 = *i_1)
    {
        Camera_ApplyHandiCam_33(i_2);
        Sys_UnknownBlockType(i_2);
        i_2 = i_1;
    }

    Sys_PopStack_30(&v_850);
    return g_a442c8;
}
