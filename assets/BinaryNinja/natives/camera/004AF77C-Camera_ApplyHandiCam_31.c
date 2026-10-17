// IGI native provenance: Camera_ApplyHandiCam_31 - 0x004AF77C - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004AF77C-Camera_ApplyHandiCam_31.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyHandiCam_31.h"
HRESULT __stdcall AVIStreamReadFormat(struct IAVIStream pavi, int32_t lPos, void* lpFormat, int32_t* lpcbFormat)

{
    /* tailcall */
    return AVIStreamReadFormat(pavi, lPos, lpFormat, lpcbFormat);
}
