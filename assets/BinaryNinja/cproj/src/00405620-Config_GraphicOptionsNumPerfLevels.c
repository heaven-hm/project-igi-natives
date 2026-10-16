#include "gi_platform.h"
#include "00405620-Config_GraphicOptionsNumPerfLevels.h"
int32_t Config_GraphicOptionsNumPerfLevels(int32_t a1)

// Sig: int Config_GraphicOptionsNumPerfLevels()
// Note: RETURNS the number of graphics detail levels the engine supports
// (constant). Use to build the detail-level slider/list.
{
    int32_t v_18 = 7;
    int32_t v_10 = 0;
    int32_t v_c = 0x401c0000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
