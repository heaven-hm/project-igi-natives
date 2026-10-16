#include "Config_SaveGraphicOptions_2.h"
int32_t Config_SaveGraphicOptions_2()

{
    return *(Config_GetActivePlayerProfileRecord() + 4);
}
