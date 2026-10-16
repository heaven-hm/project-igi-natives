#include "AI_CheckVisibility_12.h"
void* AI_CheckVisibility_12(void* a1, void* a2)

{
    *(a2 + 0x696) = 1;
    *(a2 + 0x33d) = 0;
    *(a2 + 0xd14) = 0;
    Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    void* result = FX_TrailUpdate_15(a2);
    *(a1 + 0x14) = AI_UpdatePatrol_16;
    return result;
}
