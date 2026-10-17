// Original IGI.EXE function: Sys_SyntaxErrorInLineD (VA 0x004BF580; static CFG gate PASS, CFG score 1.000).
#include "Sys_SyntaxErrorInLineD.h"
int32_t Sys_SyntaxErrorInLineD(int32_t* a1, void** a2)

{
    switch (Sys_While(a1) - 1)
    {
        case 0:
        {
            return Sys_UnexpectedEndOfFile(a1, a2);
            break;
        }
        case 2:
        {
            return Sys_UnexpectedEndOfFile_2(a1, a2);
            break;
        }
        case 3:
        {
            int32_t v_c_3 = Sys_AllocateMemory_31(a1);
            Sys_FreeMemory_22("'else' without matching 'if' in line %d");
            return 0;
            break;
        }
        case 5:
        {
            return Sys_OpenFileStream_31(a1, a2);
            break;
        }
    }

    int32_t v_c_4 = Sys_AllocateMemory_31(a1);
    Sys_FreeMemory_22("Syntax error in line %d");
    return 0;
}
