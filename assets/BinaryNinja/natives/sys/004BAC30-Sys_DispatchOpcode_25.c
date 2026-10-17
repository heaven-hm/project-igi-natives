// Original IGI.EXE function: Sys_DispatchOpcode_25 (VA 0x004BAC30; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode_25.h"
void* Sys_DispatchOpcode_25(int32_t context)

{
    int32_t i_1 = context;
    int32_t* data_2 = Mem_Alloc((i_1 * 3 + 3) << 2, 4);
    data_2[1] = 0;
    *data_2 = 0;
    void* result = Camera_SetFieldOfView_33(&g_a43ea0, data_2);
    int32_t* source_val = &data_2[3];
    data_2[2] = source_val;

    if (i_1 > 0)
    {
        int32_t i;

        do
        {
            source_val[1] = 0;
            *source_val = 0;
            result = Camera_SetFieldOfView_33(&g_a43eb0, source_val);
            source_val = &source_val[3];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
