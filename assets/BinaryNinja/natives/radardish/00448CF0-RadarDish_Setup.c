#include "RadarDish_Setup.h"
int32_t* RadarDish_Setup(void* a1)

{
    DynObj_RegisterSymbol_9(*(a1 + 0x68), a1);
    int32_t* result = *(a1 + 0x174);

    if (result)
        result = Qtask_UpdateList(result);

    void* srcS1 = *(a1 + 0x178);

    if (!srcS1)
        return result;

    return DynObj_CreateMagicObject_4(srcS1);
}
