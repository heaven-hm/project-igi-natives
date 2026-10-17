// IGI native provenance: AIStationaryGunHolder_Setup - 0x0046E7A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046E7A0-AIStationaryGunHolder_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIStationaryGunHolder_Setup.h"
int32_t* AIStationaryGunHolder_Setup(void* context)

{
    Script_CallNativeHandler_6(context + 0x25f4);
    Script_CallNativeHandler_6(context + 0x2644);
    int32_t* data_1 = *(context + 0xe8);

    if (data_1)
        QTask_FindType(data_1);

    DynObj_RegisterSymbol_9(*(context + 0x68), context);
    return FX_TrailUpdate_13(context + 0x168);
}
