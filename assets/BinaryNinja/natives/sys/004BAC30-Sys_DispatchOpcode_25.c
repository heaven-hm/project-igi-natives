// Original IGI.EXE function: Sys_DispatchOpcode_25 (VA 0x004BAC30; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode_25.h"
void* Sys_DispatchOpcode_25(int32_t a1)

{
    int32_t i_1 = a1;
    int32_t* valA2 = Mem_Alloc((i_1 * 3 + 3) << 2, 4);
    valA2[1] = 0;
    *valA2 = 0;
    void* result = Camera_SetFieldOfView_33(&g_a43ea0, valA2);
    int32_t* srcS = &valA2[3];
    valA2[2] = srcS;

    if (i_1 > 0)
    {
        int32_t i;

        do
        {
            srcS[1] = 0;
            *srcS = 0;
            result = Camera_SetFieldOfView_33(&g_a43eb0, srcS);
            srcS = &srcS[3];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
