// IGI native provenance: Camera_ApplyWideScreen_30 - 0x004AF74C - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004AF74C-Camera_ApplyWideScreen_30.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyWideScreen_30.h"
HRESULT __stdcall DirectDrawEnumerateExA(LPDDENUMCALLBACKEXA lpCallback, void* lpContext, uint32_t dwFlags)

{
    /* tailcall */
    return DirectDrawEnumerateExA(lpCallback, lpContext, dwFlags);
}
