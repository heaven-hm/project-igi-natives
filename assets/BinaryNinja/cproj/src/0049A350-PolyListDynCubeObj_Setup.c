#include "gi_platform.h"
#include "0049A350-PolyListDynCubeObj_Setup.h"
void* PolyListDynCubeObj_Setup(void* a1)

{
    void* result = (*(int32_t*)(uintptr_t)(a1 + 0xa8));

    if (result)
        result = DynObj_RemoveSymbol_7((*(int32_t*)(uintptr_t)(a1 + 0x68)), a1, 0);

    int32_t* srcS1 = (*(int32_t*)(uintptr_t)(a1 + 0xb4));

    if (!srcS1)
        return result;

    return Qtask_UpdateList(srcS1);
}
