// Original IGI.EXE function: Camera_ApplyLineFilter_32 (VA 0x004AF7A6; static CFG gate FAIL, CFG score 0.667).
#include "Camera_ApplyLineFilter_32.h"
HRESULT __stdcall AVIStreamRead(struct IAVIStream pavi, int32_t lStart, int32_t lSamples, void* lpBuffer, int32_t cbBuffer, int32_t* plBytes, int32_t* plSamples)

{
    /* tailcall */
    return AVIStreamRead(pavi, lStart, lSamples, lpBuffer, cbBuffer, plBytes, plSamples);
}
