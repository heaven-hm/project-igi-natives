#include "Config_SaveGameOptions_2.h"
long double Config_SaveGameOptions_2()

{
    return *(Config_GetActivePlayerProfileRecord() + 0x228);
}
