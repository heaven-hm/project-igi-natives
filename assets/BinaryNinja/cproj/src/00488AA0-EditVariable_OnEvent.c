#include "gi_platform.h"
#include "00488AA0-EditVariable_OnEvent.h"
int32_t EditVariable_OnEvent(void* a1)

{
    Script_Isexists(a1 + 0x38, a1);
    Script_Isexists(a1 + 0x88, a1);
    return 0;
}
