#include "Camera_ApplyHandiCam_31.h"
HRESULT __stdcall AVIStreamReadFormat(struct IAVIStream pavi, int32_t lPos, void* lpFormat, int32_t* lpcbFormat)

{
    /* tailcall */
    return AVIStreamReadFormat(pavi, lPos, lpFormat, lpcbFormat);
}
