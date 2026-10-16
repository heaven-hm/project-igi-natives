#include "00442020-Env_UpdateCameraLens_2.h"
/* 0x00442020 Env_UpdateCameraLens_2 full linked: callers=1 callees=4 */
int32_t sub_442020(int32_t* a1, void* a2)

{
    int32_t eax = sub_460be0();
    int16_t __saved_edi = eax;
    eax = *(a2 + 0x1c);
    char result = TaskType_IsDerivedFrom(eax, __saved_edi);

    if (result)
        return sub_465820(a1, a2);

    if (*(a2 + 0x1c) == g_57c180)
        memcpy(a1, a2 + 0xf0, 0x18);

    return result;
}
