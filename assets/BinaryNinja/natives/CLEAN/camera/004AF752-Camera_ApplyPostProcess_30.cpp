// IGI native provenance: Camera_ApplyPostProcess_30 - 0x004AF752 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004AF752-Camera_ApplyPostProcess_30.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyPostProcess_30.h"
HRESULT __stdcall DirectDrawCreateEx(GUID* lpGuid, void** lplpDD, GUID* iid, struct IUnknown pUnkOuter)

{
    /* tailcall */
    return DirectDrawCreateEx(lpGuid, lplpDD, iid, pUnkOuter);
}
