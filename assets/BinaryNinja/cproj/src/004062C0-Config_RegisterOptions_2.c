#include "gi_platform.h"
#include "004062C0-Config_RegisterOptions_2.h"
long double Config_RegisterOptions_2()

{
    return *(Config_GetActivePlayerProfileRecord() + 0x224);
}
