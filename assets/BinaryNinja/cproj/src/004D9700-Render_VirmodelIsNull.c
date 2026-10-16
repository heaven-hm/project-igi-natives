#include "gi_platform.h"
#include "004D9700-Render_VirmodelIsNull.h"
int32_t Render_VirmodelIsNull(void* a1, int32_t* a2)

{
    if (a2)
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x74)) = a2;
        int32_t result;
        long double fp0;
        fp0 = Render_ComputeNormals(a2);
        (*(int32_t*)(uintptr_t)(a1 + 0xa0)) = fp0;
        return result;
    }

    Error_Show("VirModel is null");

    while (true)
        /* nop */
}
