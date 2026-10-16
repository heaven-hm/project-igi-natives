#include "gi_platform.h"
#include "004AF7A6-Camera_ApplyLineFilter_32.h"
HRESULT __stdcall AVIStreamRead(struct IAVIStream pavi, int32_t lStart, int32_t lSamples, void* lpBuffer, int32_t cbBuffer, int32_t* plBytes, int32_t* plSamples)

{
    /* tailcall */
    return AVIStreamRead(pavi, lStart, lSamples, lpBuffer, cbBuffer, plBytes, plSamples);
}
