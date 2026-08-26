# File_Open

Address: 0x004A5350
Signature: void* File_Open(char* path, char* mode)
Data types: scalar/opaque ABI only

## Recovered behavior

Low-level CRT-style file open used across the engine. Params: path = file path, mode = fopen-style mode string ("r","w","rb"...). RETURNS FILE* handle or 0. Prefer QFile_ReadWrite/QResource APIs unless you need raw stdio.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
