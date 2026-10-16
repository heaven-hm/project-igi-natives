#include "gi_platform.h"
#include "004062E0-Config_SaveGraphicOptions_2.h"
int32_t Config_SaveGraphicOptions_2()

{
    return *(Config_GetActivePlayerProfileRecord() + 4);
}
