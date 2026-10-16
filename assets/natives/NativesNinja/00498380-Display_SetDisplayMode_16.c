#include "00498380-Display_SetDisplayMode_16.h"
/* 0x00498380 Display_SetDisplayMode_16 full linked: callers=2 callees=3 */
int32_t sub_498380(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t esi_2 = (a2 * a3) << 2;
    void* eax = Mem_Alloc(esi_2, 4);
    a1[2] = eax;
    a1[1] = a3;
    *a1 = a2;
    __builtin_memset(__builtin_memset(eax, 0, esi_2 & 0xfffffffc), 0, esi_2 & 3);
    return 0;
}
