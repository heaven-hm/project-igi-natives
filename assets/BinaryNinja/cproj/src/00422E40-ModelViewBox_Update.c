#include "gi_platform.h"
#include "00422E40-ModelViewBox_Update.h"
void* ModelViewBox_Update(void* a1, int32_t a2)

{
    g_b818ac = 0x3f000000;
    g_b818b0 = 0x3f000000;
    g_b818b4 = 0x3f000000;
    ((int(*)())(uintptr_t)(*(((Script_ParseEnumReal32_8() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0)))(a1, a2);
    (*(int32_t*)(uintptr_t)(a1 + 0xc0)) = DynObj_Missing("minefield");
    struct status_msg* valA7 = QTask_HandleInput(a1, DynObj_LookupHashItem_5(), 0);
    __builtin_memset(&valA7->head[8], 0, 0x18);
    DynObj_LookupHashItem_6((*(int32_t*)(uintptr_t)(a1 + 0x58)), valA7, (*(int32_t*)(uintptr_t)(a1 + 0xc0)));
    void* result = DynObj_RegisterSymbol_8((*(int32_t*)(uintptr_t)(a1 + 0x58)), valA7, 1);
    (*(int32_t*)(uintptr_t)(a1 + 0xc4)) = valA7;
    return result;
}
