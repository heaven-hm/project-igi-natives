#include "Camera_ApplyPostProcess_31.h"
HRESULT __stdcall AVIFileGetStream(struct IAVIFile pfile, struct IAVIStream* ppavi, uint32_t fccType, int32_t lParam)

{
    /* tailcall */
    return AVIFileGetStream(pfile, ppavi, fccType, lParam);
}
