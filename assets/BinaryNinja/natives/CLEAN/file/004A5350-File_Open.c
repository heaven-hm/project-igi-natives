// IGI native provenance: File_Open - 0x004A5350 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A5350-File_Open.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "File_Open.h"
int32_t* File_Open(PSTR context, char* param_2)

// Sig: void* File_Open(char* path, char* mode)
// Note: Low-level CRT-style file open used across the engine. Params: path =
// file path, mode = fopen-style mode string ("r","w","rb"...). RETURNS FILE*
// handle or 0. Prefer QFile_ReadWrite/QResource APIs unless you need raw stdio.
{
    return Camera_ApplyBandFilter_4(context, param_2, 0x40);
}
