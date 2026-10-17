// Original IGI.EXE function: Render_ComputeNormals_6 (VA 0x004D36E0; static CFG gate PASS, CFG score 1.000).
#include "Render_ComputeNormals_6.h"
int32_t Render_ComputeNormals_6(void* context)

{
    void* item_c = context;
    int32_t result = *(context + 0x10);

    if (result)
        result = result(*(context + 0x18));

    *(context + 0x18) = 0;
    *(context + 0x10) = 0;
    *(context + 0xc) = 0;
    *(context + 0x14) = 0;
    return result;
}
