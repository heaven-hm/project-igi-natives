#include "gi_platform.h"
#include "00475D90-Mine_Process.h"
int32_t Mine_Process(void* a1, int32_t a2)

{
    int32_t result = ((int(*)())(uintptr_t)(*(((Script_ParseEnumReal32_8() * 0x180 + FX_TrailUpdate()) << 2) + &g_a96ae0)))(a1, a2);
    (*(int32_t*)(uintptr_t)(a1 + 0x23c)) = (*(int32_t*)(uintptr_t)(a1 + 0x240)) * 30.0f;
    return result;
}
