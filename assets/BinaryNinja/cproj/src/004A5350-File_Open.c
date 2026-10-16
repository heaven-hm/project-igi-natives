#include "gi_platform.h"
#include "004A5350-File_Open.h"
int32_t* File_Open(PSTR a1, char* a2)

// Sig: void* File_Open(char* path, char* mode)
// Note: Low-level CRT-style file open used across the engine. Params: path =
// file path, mode = fopen-style mode string ("r","w","rb"...). RETURNS FILE*
// handle or 0. Prefer QFile_ReadWrite/QResource APIs unless you need raw stdio.
{
    return Camera_ApplyBandFilter_4(a1, a2, 0x40);
}
