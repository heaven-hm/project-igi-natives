#include "Display_OpenDevice_17.h"
int32_t Display_OpenDevice_17(int32_t* a1, void* a2)

{
    g_6e5bd0 = 0;
    int32_t* valA = a1[0x15b3];
    (*(*valA + 8))(valA);
    DynObj_RemoveSymbol_7(a2, a1, 0);
    return QTask_FindType(a1);
}
