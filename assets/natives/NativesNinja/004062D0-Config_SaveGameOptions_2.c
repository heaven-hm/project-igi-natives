#include "004062D0-Config_SaveGameOptions_2.h"
/* 0x004062d0 Config_SaveGameOptions_2 full linked: callers=6 callees=1 */
long double Config_SaveGameOptions_2()

{
    return *(Config_GetActivePlayerProfileRecord() + 0x228);
}
