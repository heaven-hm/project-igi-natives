#include "00422C90-ModelViewBox_Process.h"
/* 0x00422c90 ModelViewBox_Process full linked: callers=0 callees=9 */
int32_t ModelViewBox_Process(void* a1, int32_t a2)

{
    int32_t var_40;
    __builtin_memset(&var_40, 0, 0x18);
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(a1, a2);
    *(a1 + 0x28) = 0x12c;
    *(a1 + 0x2c) = 0xc8;
    *(a1 + 0x3c) = 1;
    *(a1 + 0x40) = 1;
    *(a1 + 0x54) = 0;
    void* eax_3;
    int32_t ecx_1;
    eax_3 = sub_4c5b20(0x1000);
    *(a1 + 0x58) = eax_3;
    Camera_ResetFrameCounters(a1 + 0x60);
    int32_t var_28 = 0x3f800000;
    int32_t var_24 = 0;
    int32_t var_20 = 0;
    int32_t var_1c = 0;
    int32_t var_18 = 0x3f800000;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    int32_t var_8 = 0x3f800000;
    int32_t var_4 = 0;
    int32_t* eax_4 = sub_4e75a0();
    long double st0;
    bool c1;
    bool c2;
    st0 = __fptan(0.78539818525314331);
    int32_t var_5c = 0x43960000;
    int32_t var_64 = ecx_1;
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫🚫    float var_64_1 = /* float var_64_1 = unimplemented  {fstp dword [esp], st0} */;
    /* unimplemented  {fstp dword [esp], st0} */
    Camera_SubmitFrame(a1 + 0x60, &var_40, &var_28, var_64_1, 0x3f800000, eax_4, a1, 0, 0f);
    int32_t var_84 = 0;
    struct status_msg* eax_6 = sub_4e8110(*(*(a1 + 0x44) + 0x14), 0, 0, 0x3f800000, 0x3f800000,
        *(a1 + 0x58), a1 + 0x60, 0, 0, 0, 0x3f800000);
    uint32_t ecx_3 = *(a1 + 0x58);
    *(a1 + 0x5c) = eax_6;
    sub_4e8370(eax_6, ecx_3);
    return sub_4e8250(*(a1 + 0x5c), 0);
}
