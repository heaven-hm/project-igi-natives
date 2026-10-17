// Original IGI.EXE function: Display_SyncVSync_13 (VA 0x00497570; static CFG gate PASS, CFG score 1.000).
#include "Display_SyncVSync_13.h"
int32_t* Display_SyncVSync_13(void* context, int32_t param_2)

{
    *(context + 8) = 0xffffffff;
    int32_t item_18 = 0;
    int32_t item_14 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    Display_CheckCapabilities_13(context, &item_18);
    *(context + 0x40) = param_2;
    *(context + 0x44) = Mem_Alloc(param_2 * 0xc, 4);
    void* data_1 = Mem_Alloc(0xc, 4);
    int32_t* temp_val = *(context + 0x44);
    *(context + 0x48) = data_1;
    Display_SwapBuffers_14(temp_val, param_2);
    return Display_SwapBuffers_14(*(context + 0x48), 1);
}
