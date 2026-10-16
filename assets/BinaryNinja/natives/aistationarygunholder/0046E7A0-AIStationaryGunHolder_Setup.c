#include "AIStationaryGunHolder_Setup.h"
int32_t* AIStationaryGunHolder_Setup(void* a1)

{
    Script_CallNativeHandler_6(a1 + 0x25f4);
    Script_CallNativeHandler_6(a1 + 0x2644);
    int32_t* valA1 = *(a1 + 0xe8);

    if (valA1)
        QTask_FindType(valA1);

    DynObj_RegisterSymbol_9(*(a1 + 0x68), a1);
    return FX_TrailUpdate_13(a1 + 0x168);
}
