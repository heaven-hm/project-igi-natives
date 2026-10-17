// Original IGI.EXE function: Render_VirmodelIsNull (VA 0x004D9700; static CFG gate PASS, CFG score 1.000).
#include "Render_VirmodelIsNull.h"
int32_t Render_VirmodelIsNull(void* a1, int32_t* a2)

{
    if (a2)
    {
        *(a1 + 0x74) = a2;
        int32_t result;
        long double fp0;
        fp0 = Render_ComputeNormals(a2);
        *(a1 + 0xa0) = fp0;
        return result;
    }

    Error_Show("VirModel is null");

    while (true)
        /* nop */
}
