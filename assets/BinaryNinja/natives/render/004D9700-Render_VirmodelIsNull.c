// Original IGI.EXE function: Render_VirmodelIsNull (VA 0x004D9700; static CFG gate PASS, CFG score 1.000).
#include "Render_VirmodelIsNull.h"
int32_t Render_VirmodelIsNull(void* context, int32_t* param_2)

{
    if (param_2)
    {
        *(context + 0x74) = param_2;
        int32_t result;
        long double fp0;
        fp0 = Render_ComputeNormals(param_2);
        *(context + 0xa0) = fp0;
        return result;
    }

    Error_Show("VirModel is null");

    while (true)
        /* nop */
}
