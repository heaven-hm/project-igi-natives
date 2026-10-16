#include "Script_ParseEnumString_5.h"
void* Script_ParseEnumString_5(int32_t a1)

{
    int32_t* valA = Script_ExecuteLevelScript_5(a1);

    if (!valA)
        return &g_567c74;

    return &valA[3];
}
