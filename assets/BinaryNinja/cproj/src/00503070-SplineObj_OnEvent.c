#include "gi_platform.h"
#include "00503070-SplineObj_OnEvent.h"
int32_t* SplineObj_OnEvent(void* a1, int32_t* a2)

{
    int32_t* result = (*(int32_t*)(uintptr_t)(a1 + 0xf0));

    if (result)
    {
        double v_c_1 = result[0x3e] * 0.000244140625.0f;
        Game_DataSymbolLoad(0xa7a50c, "Segment length: %f meter\n");
        void* valA = (*(int32_t*)(uintptr_t)(a1 + 0xf0));
        double v_c_2 = ((*(int32_t*)(uintptr_t)(valA + 0x100)) - (*(int32_t*)(uintptr_t)(valA + 0xfc))) * 0.000244140625.0f;
        int32_t v_10_1 = 0xa7a50c;
        Game_DataSymbolLoad(0xa7a50c, "%sModel length: %f meter\n");
        result = a2;
        *result = 0xa7a50c;
    }

    return result;
}
