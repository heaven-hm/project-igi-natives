// Original IGI.EXE function: Render_ComputeNormals (VA 0x004D0950; static CFG gate PASS, CFG score 1.000).
#include "Render_ComputeNormals.h"
long double Render_ComputeNormals(int32_t* a1)

{
    if (a1)
    {
        void* valA = *a1;

        if (valA)
            return *(*(*(valA + 0xc) + 0xc) + 0x78);
    }

    return 1f;
}
