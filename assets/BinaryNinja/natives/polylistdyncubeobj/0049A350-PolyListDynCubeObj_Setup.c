// Original IGI.EXE function: PolyListDynCubeObj_Setup (VA 0x0049A350; static CFG gate PASS, CFG score 1.000).
#include "PolyListDynCubeObj_Setup.h"
void* PolyListDynCubeObj_Setup(void* context)

{
    void* result = *(context + 0xa8);

    if (result)
        result = DynObj_RemoveSymbol_7(*(context + 0x68), context, 0);

    int32_t* source_1 = *(context + 0xb4);

    if (!source_1)
        return result;

    return Qtask_UpdateList(source_1);
}
