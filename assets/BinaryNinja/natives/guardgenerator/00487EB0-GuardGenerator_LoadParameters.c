#include "GuardGenerator_LoadParameters.h"
int32_t GuardGenerator_LoadParameters(void* a1)

{
    Script_ExecuteLevelScript_6(a1 + 0x20);
    *(a1 + 0x70) = 0;
    *(a1 + 0x71) = 0;
    *(a1 + 0x74) = 0;
    *(a1 + 0x78) = 0;
    *(a1 + 0x72) = 0;
    *(a1 + 0x7c) = 0;
    return 0;
}
