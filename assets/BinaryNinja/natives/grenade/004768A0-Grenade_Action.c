// Original IGI.EXE function: Grenade_Action (VA 0x004768A0; static CFG gate PASS, CFG score 1.000).
#include "Grenade_Action.h"
int32_t* Grenade_Action(int32_t* context )

{
    void* data_1 = *(context[1] + 0x6e0);

    if (data_1)
    {
        Sys_ExecuteBytecode_2(data_1);
        *(context[1] + 0x6e0) = 0;
    }

    int32_t* data_2 = Script_FormatString_31(*context, "Grenade - Explosion falloff (meters)");
    int32_t* context_val = data_2;

    if (!context_val)
        context_val = Script_CallNativeHandler_31(*context, "Grenade - Explosion falloff (meters)", data_2);

    int32_t* dest_val = Script_FormatString_31(*context, "Grenade - Explosion radius (meters)");

    if (!dest_val)
        dest_val = Script_CallNativeHandler_31(*context, "Grenade - Explosion radius (meters)", 0x40a00000);

    int32_t* data_8 = Script_FormatString_31(*context, "Grenade - Explosion damage factor");

    if (!data_8)
        data_8 = Script_CallNativeHandler_31(*context, "Grenade - Explosion damage factor", 0x3f800000);

    int32_t temp_2 = context_val[0x49];
    int32_t entity_4 = dest_val[0x49];
    int32_t temp_3 = data_8[0x49];
    *(context[1] + 0x6e0) = Mem_Alloc(0xc, 4);
    int32_t* result = *(context[1] + 0x6e0);
    *result = temp_3;
    result[1] = entity_4;
    result[2] = temp_2;
    return result;
}
