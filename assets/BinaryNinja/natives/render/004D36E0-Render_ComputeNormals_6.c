#include "Render_ComputeNormals_6.h"
int32_t Render_ComputeNormals_6(void* a1)

{
    void* v_c = a1;
    int32_t result = *(a1 + 0x10);

    if (result)
        result = result(*(a1 + 0x18));

    *(a1 + 0x18) = 0;
    *(a1 + 0x10) = 0;
    *(a1 + 0xc) = 0;
    *(a1 + 0x14) = 0;
    return result;
}
