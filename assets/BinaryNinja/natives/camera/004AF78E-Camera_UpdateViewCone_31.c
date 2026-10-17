// IGI native provenance: Camera_UpdateViewCone_31 - 0x004AF78E - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004AF78E-Camera_UpdateViewCone_31.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateViewCone_31.h"
HRESULT __stdcall AVIFileInfoA(struct IAVIFile pfile, struct AVIFILEINFOA* pfi, int32_t lSize)

{
    /* tailcall */
    return AVIFileInfoA(pfile, pfi, lSize);
}
