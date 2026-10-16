#include "Config_RegisterOptions_2.h"
long double Config_RegisterOptions_2()

{
    return *(Config_GetActivePlayerProfileRecord() + 0x224);
}
