// Original IGI.EXE function: Car_Cleanup (VA 0x0042FC80; static CFG gate PASS, CFG score 1.000).
#include "Car_Cleanup.h"
int32_t* Car_Cleanup(void* a1, int32_t a2)

{
    int32_t* result;
    result = *(a1 + 0x2ed5);

    if (!result)
    {
        (*(((DynObj_LinkDynamicCube_12() * 0x180 + Script_ExecuteLevelScript_16()) << 2) + &g_a96ae0))(a1, a2);
        result = *(a1 + 0x748);

        if (result)
        {
            result = QTask_FindType(result);
            *(a1 + 0x748) = 0;
        }
    }

    return result;
}
