#include "gi_platform.h"
#include "004F7F00-RainDynCubeObj_OnEvent.h"
void* RainDynCubeObj_OnEvent(void* a1)

{
    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x2c98)) * 4096.0f;
    int32_t valA = (*(int32_t*)(uintptr_t)(a1 + 0x2cb0));
    int32_t v_18;
    __builtin_memset(&v_18, 0, 0x18);
    memcpy(a1 + 0x2c08, &v_18, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x2c7c)) = x87_r7_1 * 0.142857149.0f;
    (*(int32_t*)(uintptr_t)(a1 + 0x2c60)) = 0x42d00000;
    (*(int32_t*)(uintptr_t)(a1 + 0x2c64)) = 0x42e00000;
    (*(int32_t*)(uintptr_t)(a1 + 0x2c68)) = 0x42fe0000;
    (*(int32_t*)(uintptr_t)(a1 + 0x2c8c)) = 0x3e20d97c;
    (*(int32_t*)(uintptr_t)(a1 + 0x2c90)) = 0x45aaaaab;
    (*(int32_t*)(uintptr_t)(a1 + 0x2c80)) = 0x3fc00000;
    (*(int32_t*)(uintptr_t)(a1 + 0x2c88)) = 0x40000000;

    if (!valA)
        Script_CallNativeHandler_20(a1);

    void* v_30;

    if (valA || (*(int32_t*)(uintptr_t)(a1 + 0x2cb0)))
    {
        int32_t v_28_2 = 0;
        v_30 = g_a44344;
        DynObj_RemoveSymbol_7(v_30, a1, v_28_2);
        (*(int32_t*)(uintptr_t)(a1 + 0x2cb0)) = 0;
    }

    DynObj_LookupHashItem_9(a1);
    void* objC = g_a44344;
    int32_t v_2c_2 = 0;
    v_30 = a1;
    DynObj_RegisterSymbol_8(objC, v_30, v_2c_2);
    (*(int32_t*)(uintptr_t)(a1 + 0x2cb0)) = 1;
    g_a76c9c += 0x4290;
    Script_Isexists(a1 + 0x2cb8, a1);
    void* result = Script_ParseEnumString_19(a1);
    (*(int32_t*)(uintptr_t)(a1 + 0x2d08)) = 0;
    return result;
}
