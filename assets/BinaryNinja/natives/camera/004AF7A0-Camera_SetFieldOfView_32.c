// IGI native provenance: Camera_SetFieldOfView_32 - 0x004AF7A0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004AF7A0-Camera_SetFieldOfView_32.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_SetFieldOfView_32.h"
uint32_t __stdcall ICDecompress(HIC hic, uint32_t dwFlags, BITMAPINFOHEADER* lpbiFormat, void* lpData, BITMAPINFOHEADER* lpbi, void* lpBits)

{
    /* tailcall */
    return ICDecompress(hic, dwFlags, lpbiFormat, lpData, lpbi, lpBits);
}
