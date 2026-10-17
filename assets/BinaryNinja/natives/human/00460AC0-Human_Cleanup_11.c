// Original IGI.EXE function: Human_Cleanup_11 (VA 0x00460AC0; static CFG gate PASS, CFG score 1.000).
#include "Human_Cleanup_11.h"
int32_t Human_Cleanup_11(void* a1)

{
    char result = *(a1 + 0xcf6);

    if (result)
        return result;

    int32_t v_c = 0;
    int32_t v_8_1 = Level_StartMission_4();
    int32_t v_4_1 = 2;
    uint32_t valA2 = DynObj_UpdateDynTree_12();
    int32_t objC1 = 0;
    objC1 = *(a1 + 0x1c);
    return (*(((valA2 * 0x180 + objC1) << 2) + &g_a96ae0))(a1, &v_c);
}
