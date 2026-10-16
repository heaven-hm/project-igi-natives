#include "004A5350-File_Open.h"
/* 0x004a5350 File_Open full linked: callers=6 callees=1 */
int32_t* File_Open(PSTR a1, char* a2)

// Sig: void* File_Open(char* path, char* mode)
// Note: Low-level CRT-style file open used across the engine. Params: path =
// file path, mode = fopen-style mode string ("r","w","rb"...). RETURNS FILE*
// handle or 0. Prefer QFile_ReadWrite/QResource APIs unless you need raw stdio.
{
    return sub_4a5330(a1, a2, 0x40);
}
