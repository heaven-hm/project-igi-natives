// Original IGI.EXE function: RainDynCubeObj_OnEvent (VA 0x004F7F00; static CFG gate PASS, CFG score 0.917).
#include "RainDynCubeObj_OnEvent.h"
void* RainDynCubeObj_OnEvent(void* context)

{
    long double fpu_val_7_1 = *(context + 0x2c98) * 4096.0f;
    int32_t data_val = *(context + 0x2cb0);
    int32_t item_18;
    memset(&item_18, 0, 0x18);
    memcpy(context + 0x2c08, &item_18, 0x18);
    *(context + 0x2c7c) = fpu_val_7_1 * 0.142857149f;
    *(context + 0x2c60) = 0x42d00000;
    *(context + 0x2c64) = 0x42e00000;
    *(context + 0x2c68) = 0x42fe0000;
    *(context + 0x2c8c) = 0x3e20d97c;
    *(context + 0x2c90) = 0x45aaaaab;
    *(context + 0x2c80) = 0x3fc00000;
    *(context + 0x2c88) = 0x40000000;

    if (!data_val)
        Script_CallNativeHandler_20(context);

    void* item_30;

    if (data_val || *(context + 0x2cb0))
    {
        int32_t item_28_2 = 0;
        item_30 = g_a44344;
        DynObj_RemoveSymbol_7(item_30, context, item_28_2);
        *(context + 0x2cb0) = 0;
    }

    DynObj_LookupHashItem_9(context);
    void* entity_val = g_a44344;
    int32_t item_2c_2 = 0;
    item_30 = context;
    DynObj_RegisterSymbol_8(entity_val, item_30, item_2c_2);
    *(context + 0x2cb0) = 1;
    g_a76c9c += 0x4290;
    Script_Isexists(context + 0x2cb8, context);
    void* result = Script_ParseEnumString_19(context);
    *(context + 0x2d08) = 0;
    return result;
}
