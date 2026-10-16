#include "gi_platform.h"
#include "004877A0-ConditionalContainer_Update.h"
int32_t ConditionalContainer_Update(void* a1)

{
    Script_Isexists(a1 + 0x20, a1);
    Script_Isexists(a1 + 0x70, a1);
    Script_Isexists(a1 + 0xc0, a1);
    return 0;
}
