#include "Camera_ResetMatrix_31.h"
HRESULT __stdcall AVIFileOpenA(struct IAVIFile* ppfile, PSTR szFile, uint32_t uMode, GUID* lpHandler)

{
    /* tailcall */
    return AVIFileOpenA(ppfile, szFile, uMode, lpHandler);
}
