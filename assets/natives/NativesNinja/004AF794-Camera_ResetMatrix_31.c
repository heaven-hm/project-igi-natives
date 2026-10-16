#include "004AF794-Camera_ResetMatrix_31.h"
/* 0x004af794 Camera_ResetMatrix_31 full linked: callers=1 callees=1 */
HRESULT __stdcall AVIFileOpenA(struct IAVIFile* ppfile, PSTR szFile, uint32_t uMode, GUID* lpHandler)

{
    /* tailcall */
    return AVIFileOpenA(ppfile, szFile, uMode, lpHandler);
}
