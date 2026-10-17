// Original IGI.EXE function: Sys_SyntaxErrorInLineD (VA 0x004BF580; static CFG gate PASS, CFG score 1.000).
#include "Sys_SyntaxErrorInLineD.h"
int32_t Sys_SyntaxErrorInLineD(int32_t* context, void** param_2)

{
    switch (Sys_While(context) - 1)
    {
        case 0:
        {
            return Sys_UnexpectedEndOfFile(context, param_2);
            break;
        }
        case 2:
        {
            return Sys_UnexpectedEndOfFile_2(context, param_2);
            break;
        }
        case 3:
        {
            int32_t item_c_3 = Sys_AllocateMemory_31(context);
            Sys_FreeMemory_22("'else' without matching 'if' in line %d");
            return 0;
            break;
        }
        case 5:
        {
            return Sys_OpenFileStream_31(context, param_2);
            break;
        }
    }

    int32_t item_c_4 = Sys_AllocateMemory_31(context);
    Sys_FreeMemory_22("Syntax error in line %d");
    return 0;
}
