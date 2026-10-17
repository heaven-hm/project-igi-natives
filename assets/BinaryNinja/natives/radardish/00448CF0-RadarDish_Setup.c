// Original IGI.EXE function: RadarDish_Setup (VA 0x00448CF0; static CFG gate PASS, CFG score 1.000).
#include "RadarDish_Setup.h"
int32_t* RadarDish_Setup(void* context)

{
    DynObj_RegisterSymbol_9(*(context + 0x68), context);
    int32_t* result = *(context + 0x174);

    if (result)
        result = Qtask_UpdateList(result);

    void* source_1 = *(context + 0x178);

    if (!source_1)
        return result;

    return DynObj_CreateMagicObject_4(source_1);
}
