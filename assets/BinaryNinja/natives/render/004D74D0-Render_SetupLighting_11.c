#include "Render_SetupLighting_11.h"
long double Render_SetupLighting_11(int32_t a1, int32_t a2)

{
    return **(*(a1 * 0x28 + &g_a538f4) + (a2 << 2)) * 0.000208333338f;
}
