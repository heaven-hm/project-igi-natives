#include "gi_platform.h"
#include "00464580-HumanView_Process.h"
int32_t HumanView_Process(void* a1, int32_t* a2)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xd9));

    if (result)
    {
        Render_DrawSplineMesh_12(a1);
        result = DynObj_RegisterSymbol_9(*a2, a1);
        (*(int32_t*)(uintptr_t)(a1 + 0xd9)) = 0;
    }

    return result;
}
