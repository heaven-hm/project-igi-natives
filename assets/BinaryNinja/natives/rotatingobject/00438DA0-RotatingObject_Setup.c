// Original IGI.EXE function: RotatingObject_Setup (VA 0x00438DA0; static CFG gate PASS, CFG score 1.000).
#include "RotatingObject_Setup.h"
char* RotatingObject_Setup(void* context)

{
    DynObj_RegisterSymbol_9(*(context + 0x68), context);
    int32_t* data_1 = *(context + 0x1a0);

    if (data_1)
        Qtask_UpdateList(data_1);

    void* data_2 = *(context + 0x1a4);

    if (data_2)
        DynObj_CreateMagicObject_4(data_2);

    return Script_CallNativeHandler_6(context + 0x1ac);
}
