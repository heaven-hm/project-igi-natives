#include "Display_SyncVSync_13.h"
int32_t* Display_SyncVSync_13(void* a1, int32_t a2)

{
    *(a1 + 8) = 0xffffffff;
    int32_t v_18 = 0;
    int32_t v_14 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    Display_CheckCapabilities_13(a1, &v_18);
    *(a1 + 0x40) = a2;
    *(a1 + 0x44) = Mem_Alloc(a2 * 0xc, 4);
    void* valA1 = Mem_Alloc(0xc, 4);
    int32_t* tmpD = *(a1 + 0x44);
    *(a1 + 0x48) = valA1;
    Display_SwapBuffers_14(tmpD, a2);
    return Display_SwapBuffers_14(*(a1 + 0x48), 1);
}
