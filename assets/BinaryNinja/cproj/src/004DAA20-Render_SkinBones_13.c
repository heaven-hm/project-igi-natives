#include "gi_platform.h"
#include "004DAA20-Render_SkinBones_13.h"
void* Render_SkinBones_13(int32_t* a1)

{
    void* result = (g_b041d0 << 2) + &g_b01a00;
    memcpy(result, &g_b04200, g_b03df0 << 2);
    int32_t objC1 = g_b03df0;
    g_b041d0 += objC1;
    *a1 = objC1;
    return result;
}
