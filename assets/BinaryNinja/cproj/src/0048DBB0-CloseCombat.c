#include "gi_platform.h"
#include "0048DBB0-CloseCombat.h"
bool CloseCombat(void* a1)

{
    char* v_8 = "Stand - CloseCombat Trigger";
    int32_t v_c = 0xffffffff;
    void* v_10 = a1;
    AI_WriteChannel(a1, 9, 1.0f);
    return !Locomotion_GetState(a1, 0);
}
