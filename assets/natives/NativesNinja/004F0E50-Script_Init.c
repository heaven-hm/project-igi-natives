#include "004F0E50-Script_Init.h"
/* 0x004f0e50 Script_Init full linked: callers=4 callees=0 */
int32_t Script_Init(int32_t a1, char a2, int32_t a3, char a4)

// Sig: void Script_Init(char* file_name,int8_t p2,int p3,int8_t p4)
// Note: Initialises the script system for a file. Params: file_name = script
// path, p2 = byte flag (observed), p3 = int option, p4 = byte flag. Refined
// types from decompiled header (two int8_t slots detected).
{
    int32_t result = a1;
    g_a70c98 = result;
    result = a4;
    g_54dd16 = a2;
    g_a70c74 = a3;
    g_a758bc = result;
    g_a758a8 = 0;
    return result;
}
