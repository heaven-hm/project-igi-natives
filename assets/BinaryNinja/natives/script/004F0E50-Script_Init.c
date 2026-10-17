// Original IGI.EXE function: Script_Init (VA 0x004F0E50; static CFG gate PASS, CFG score 1.000).
#include "Script_Init.h"
int32_t Script_Init(int32_t context, char param_2, int32_t param_3, char param_4)

// Sig: void Script_Init(char* file_name,int8_t p2,int p3,int8_t p4)
// Note: Initialises the script system for a file. Params: file_name = script
// path, p2 = byte flag (observed), p3 = int option, p4 = byte flag. Refined
// types from decompiled header (two int8_t slots detected).
{
    int32_t result = context;
    g_a70c98 = result;
    result = param_4;
    g_54dd16 = param_2;
    g_a70c74 = param_3;
    g_a758bc = result;
    g_a758a8 = 0;
    return result;
}
