// Original IGI.EXE function: PolyListDynCubeObj_Setup (VA 0x0049A350; static CFG gate PASS, CFG score 1.000).
#include "PolyListDynCubeObj_Setup.h"
void* PolyListDynCubeObj_Setup(void* a1)

{
    void* result = *(a1 + 0xa8);

    if (result)
        result = DynObj_RemoveSymbol_7(*(a1 + 0x68), a1, 0);

    int32_t* srcS1 = *(a1 + 0xb4);

    if (!srcS1)
        return result;

    return Qtask_UpdateList(srcS1);
}
