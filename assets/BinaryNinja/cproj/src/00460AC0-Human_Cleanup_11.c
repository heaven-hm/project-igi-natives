#include "gi_platform.h"
#include "00460AC0-Human_Cleanup_11.h"
int32_t Human_Cleanup_11(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xcf6));

    if (result)
        return result;

    int32_t v_c = 0;
    int32_t v_8_1 = Level_StartMission_4();
    int32_t v_4_1 = 2;
    uint32_t valA2 = DynObj_UpdateDynTree_12();
    int32_t objC1 = 0;
    objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
    return ((int(*)())(uintptr_t)(*(((valA2 * 0x180 + objC1) << 2) + &g_a96ae0)))(a1, &v_c);
}
