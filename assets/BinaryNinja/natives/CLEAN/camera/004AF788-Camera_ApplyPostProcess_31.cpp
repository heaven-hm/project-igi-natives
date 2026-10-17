// IGI native provenance: Camera_ApplyPostProcess_31 - 0x004AF788 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004AF788-Camera_ApplyPostProcess_31.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyPostProcess_31.h"
HRESULT __stdcall AVIFileGetStream(struct IAVIFile pfile, struct IAVIStream* ppavi, uint32_t fccType, int32_t lParam)

{
    /* tailcall */
    return AVIFileGetStream(pfile, ppavi, fccType, lParam);
}
