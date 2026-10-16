#include "00497570-Display_SyncVSync_13.h"
/* 0x00497570 Display_SyncVSync_13 full linked: callers=7 callees=5 */
int32_t* sub_497570(void* a1, int32_t a2)

{
    *(a1 + 8) = 0xffffffff;
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    sub_497680(a1, &var_18);
    *(a1 + 0x40) = a2;
    *(a1 + 0x44) = Mem_Alloc(a2 * 0xc, 4);
    void* eax_1 = Mem_Alloc(0xc, 4);
    int32_t* edx = *(a1 + 0x44);
    *(a1 + 0x48) = eax_1;
    sub_497880(edx, a2);
    return sub_497880(*(a1 + 0x48), 1);
}
