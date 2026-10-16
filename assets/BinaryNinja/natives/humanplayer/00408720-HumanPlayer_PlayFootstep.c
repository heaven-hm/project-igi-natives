#include "HumanPlayer_PlayFootstep.h"
int32_t HumanPlayer_PlayFootstep(void* a1)

{
    int32_t v_8;
    int32_t valA = Script_ParseEnumReal32_13(a1, &v_8);
    int32_t v_4;
    int32_t tmpD1 = v_8 + v_4;

    if (tmpD1)
        return 1;

    return *(HumanPlayer_LoadParameters_13(valA, tmpD1, v_4, a1) + 0x6dc);
}
