// IGI native provenance: Camera_ResetMatrix_31 - 0x004AF794 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004AF794-Camera_ResetMatrix_31.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ResetMatrix_31.h"
HRESULT __stdcall AVIFileOpenA(struct IAVIFile* ppfile, PSTR szFile, uint32_t uMode, GUID* lpHandler)

{
    /* tailcall */
    return AVIFileOpenA(ppfile, szFile, uMode, lpHandler);
}
