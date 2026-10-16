#include "gi_platform.h"
#include "00465B00-HumanAttach_LoadParameters.h"
int32_t HumanAttach_LoadParameters(void* a1, int32_t a2)

{
    int32_t v_c = 0;
    int32_t v_8 = 0;
    int32_t v_4 = 0;
    struct status_msg* valA2 =
        Vehicle_InitPlane_10(Script_FormatString(), a1 + 0x20, a1 + 0x70, a1 + 0x128, &v_c);
    uint32_t valA4 = Level_LoadLevel_3();
    int32_t tmpD1 = 0;
    tmpD1 = valA2->head[7];
    int32_t result = *(((valA4 * 0x180 + tmpD1) << 2) + &g_a96ae0);

    if (result)
        result = result(valA2, a2);

    (*(int32_t*)(uintptr_t)(a1 + 0x138)) = 1;
    return result;
}
