// Original IGI.EXE function: GunShot_Unpack (VA 0x0047C420; static CFG gate FAIL, CFG score 0.833).
#include "GunShot_Unpack.h"
int32_t GunShot_Unpack(int32_t* a1 @ 0x8)

{
    int32_t valA = 0;
    void* objC = *a1;
    void* dstD = a1[8];
    int32_t ctxB = a1[9];
    valA = *(objC + 0x1c);
    void* v_14;
    (*(((valA + *g_5be3cc * 0x180) << 2) + &g_a96ae0))(objC, &v_14);
    void* valA5 = a1[5];
    int32_t v_c = *(valA5 + 4);
    int32_t v_8 = *(valA5 + 0x10);
    int32_t v_4 = *(valA5 + 0x1c);
    return GunShot_TakeSlot(v_14, a1[2], &v_c, dstD, ctxB, a1[0xb]);
}
