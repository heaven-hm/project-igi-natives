#include "gi_platform.h"
#include "0040C270-HumanPlayer_ApplyRecoil_4.h"
int32_t* HumanPlayer_ApplyRecoil_4(int32_t a1, void* a2)

{
    int32_t v_1c = 0xc;
    int32_t v_14 = 0x46;
    int32_t v_18 = (*(int32_t*)(uintptr_t)(a2 + 0xfc));
    int32_t v_10 = 0x46a00000;
    int32_t v_c = DynObj_UpdateDynTree_4(a2);
    int32_t v_8 = a1;
    void* v_4 = a2;
    return AI_EventBroadcast(&v_1c);
}
