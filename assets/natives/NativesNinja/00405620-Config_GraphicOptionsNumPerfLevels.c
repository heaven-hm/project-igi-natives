#include "00405620-Config_GraphicOptionsNumPerfLevels.h"
/* 0x00405620 Config_GraphicOptionsNumPerfLevels full linked: callers=0 callees=1 */
int32_t Config_GraphicOptionsNumPerfLevels(int32_t a1)

// Sig: int Config_GraphicOptionsNumPerfLevels()
// Note: RETURNS the number of graphics detail levels the engine supports
// (constant). Use to build the detail-level slider/list.
{
    int32_t var_18 = 7;
    int32_t var_10 = 0;
    int32_t var_c = 0x401c0000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
