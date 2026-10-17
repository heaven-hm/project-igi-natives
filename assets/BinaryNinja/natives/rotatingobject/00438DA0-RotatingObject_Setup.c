// IGI native provenance: RotatingObject_Setup - 0x00438DA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00438DA0-RotatingObject_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
