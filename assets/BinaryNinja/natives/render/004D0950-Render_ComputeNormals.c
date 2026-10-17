// Original IGI.EXE function: Render_ComputeNormals (VA 0x004D0950; static CFG gate PASS, CFG score 1.000).
#include "Render_ComputeNormals.h"
long double Render_ComputeNormals(int32_t* context)

{
    if (context)
    {
        void* data_val = *context;

        if (data_val)
            return *(*(*(data_val + 0xc) + 0xc) + 0x78);
    }

    return 1.0f;
}
