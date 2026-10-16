#include "004062E0-Config_SaveGraphicOptions_2.h"
/* 0x004062e0 Config_SaveGraphicOptions_2 full linked: callers=3 callees=1 */
int32_t Config_SaveGraphicOptions_2()

{
    return *(Config_GetActivePlayerProfileRecord() + 4);
}
