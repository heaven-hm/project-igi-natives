#include "004AF77C-Camera_ApplyHandiCam_31.h"
/* 0x004af77c Camera_ApplyHandiCam_31 full linked: callers=2 callees=1 */
HRESULT __stdcall AVIStreamReadFormat(struct IAVIStream pavi, int32_t lPos, void* lpFormat, int32_t* lpcbFormat)

{
    /* tailcall */
    return AVIStreamReadFormat(pavi, lPos, lpFormat, lpcbFormat);
}
