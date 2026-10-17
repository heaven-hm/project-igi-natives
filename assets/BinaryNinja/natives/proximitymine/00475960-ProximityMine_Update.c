// Original IGI.EXE function: ProximityMine_Update (VA 0x00475960; static CFG gate PASS, CFG score 1.000).
#include "ProximityMine_Update.h"
int32_t* ProximityMine_Update(int32_t* context )

{
    void* data_1 = *(context[1] + 0x6e4);

    if (data_1)
    {
        Sys_ExecuteBytecode_2(data_1);
        *(context[1] + 0x6e4) = 0;
    }

    int32_t* flagP = Script_FormatString_31(*context, "Proximitymine - Time before arming (seconds)");

    if (!flagP)
        flagP = Script_CallNativeHandler_31(*context, "Proximitymine - Time before arming (seconds)", 0x40000000);

    int32_t* context_val = Script_FormatString_31(*context, "Proximitymine - Countdown time (seconds)");

    if (!context_val)
        context_val = Script_CallNativeHandler_31(*context, "Proximitymine - Countdown time (seconds)", 0x3f000000);

    int32_t* dest_val = Script_FormatString_31(*context, "Proximitymine - Activate radius (meters)");

    if (!dest_val)
        dest_val = Script_CallNativeHandler_31(*context, "Proximitymine - Activate radius (meters)", 0x3fc00000);

    int32_t* data_10 = Script_FormatString_31(*context, "Proximitymine - Explosion radius (meters)");

    if (!data_10)
        data_10 = Script_CallNativeHandler_31(*context, "Proximitymine - Explosion radius (meters)", 0x40400000);

    int32_t entity_4 = flagP[0x49];
    int32_t temp_3 = context_val[0x49];
    int32_t entity_5 = dest_val[0x49];
    int32_t temp_4 = data_10[0x49];
    *(context[1] + 0x6e4) = Mem_Alloc(0x10, 4);
    int32_t* result = *(context[1] + 0x6e4);
    *result = entity_4;
    result[1] = temp_3;
    result[2] = entity_5;
    result[3] = temp_4;
    return result;
}
