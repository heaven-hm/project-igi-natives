// Original IGI.EXE function: Display_OpenDevice_19 (VA 0x0049B430; static CFG gate PASS, CFG score 1.000).
#include "Display_OpenDevice_19.h"
void* Display_OpenDevice_19(void* context, int32_t param_2, int32_t param_3)

{
    void* entity_val = context * 0x1f5;

    if (*((entity_val << 3) + &g_721560) + param_3 > 0xffff)
        Display_MeshFormatNotSupport(context);

    *((entity_val << 3) + &g_7205c0 + (*((entity_val << 3) + &g_721564) << 2)) = param_2;
    void* result = *((entity_val << 3) + &g_721564) + 1;
    int32_t temp_3 = *((entity_val << 3) + &g_721560) + param_3;
    *((entity_val << 3) + &g_721564) = result;
    *((entity_val << 3) + &g_721560) = temp_3;

    if (result != 0x3e8)
        return result;

    return Display_MeshFormatNotSupport(context);
}
