#include "Camera_SetFieldOfView_32.h"
uint32_t __stdcall ICDecompress(HIC hic, uint32_t dwFlags, BITMAPINFOHEADER* lpbiFormat, void* lpData, BITMAPINFOHEADER* lpbi, void* lpBits)

{
    /* tailcall */
    return ICDecompress(hic, dwFlags, lpbiFormat, lpData, lpbi, lpBits);
}
