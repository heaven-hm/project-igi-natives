#include "gi_platform.h"
#include "00489400-LevelFlow_Setup.h"
int32_t LevelFlow_Setup(void* a1)

{
    Script_Isexists(a1 + 0x7c, a1);
    Script_Isexists(a1 + 0xcc, a1);
    return 0;
}
