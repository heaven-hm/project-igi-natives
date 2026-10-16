#include "00469740-ComputerMap_LoadParameters.h"
/* 0x00469740 ComputerMap_LoadParameters full linked: callers=0 callees=38 */
void* sub_469740(void* a1)

{
    void* eax = sub_46c090();
    float var_64 = g_c28b44;
    long double x87_r7_1 = g_c28b48;
    g_5bdd98 = a1;
    float var_6c = x87_r7_1;
    sub_4b3b60(a1 + 0x48, -1.57079637f);
    sub_4b34f0(a1 + 0x20, a1 + 0x48, -1.57079637f);
    void* eax_1 = g_5bdd9c;

    if (eax_1)
    {
        sub_469cc0(a1, eax_1);
        sub_46ab50(0);
    }

    long double st0;
    bool c1;
    bool c2;
    st0 = __fptan(*((g_5bdda0 << 2) + &g_53f750));
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫🚫    *(a1 + 0x70) = /* *(a1 + 0x70) = unimplemented  {fstp dword [esi+0x70], st0} */;
    /* unimplemented  {fstp dword [esi+0x70], st0} */
🚫🚫    int32_t ecx = sub_489470();
    /* unimplemented  {call sub_489470} */
    int32_t var_8c_2 = ecx;
🚫🚫🚫    float var_8c_3 = /* float var_8c_3 = unimplemented  {fstp dword [esp], st0} */;
    /* unimplemented  {fstp dword [esp], st0} */
    int32_t* eax_3 = sub_4e75a0();
    int32_t var_98_1 = 0x43960000;
    Camera_SubmitFrame(eax, &g_5bdd78, a1 + 0x20, *(a1 + 0x70), 0x3f800000, eax_3, a1,
        var_8c_3, 0f);
    sub_4e8250(sub_46c070(), 1);
    sub_4e8220(sub_46c070(), 0, 1);
    *(a1 + 0x80) = 0;
    *(a1 + 0x84) = 0;
    *(a1 + 0xa0) = sub_467d70(a1);
    *(a1 + 0x74) = sub_4a23e0(a1, 0, 0, 0, 0x440a1eb8, 0);
    *(a1 + 0x78) = 0x3f800000;
    *(a1 + 0x7c) = 0x3c;
    struct status_msg* eax_8 = sub_505600(a1);
    sub_46b060(eax_8);
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_533a28]} */
🚫🚫🚫    float var_74 = /* float var_74 = unimplemented  {fstp dword [esp+0x10], st0} */;
    /* unimplemented  {fstp dword [esp+0x10], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x18]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_533a24]} */  /* "ff6?" */
🚫🚫🚫    float var_70 = /* float var_70 = unimplemented  {fstp dword [esp+0x24], st0} */;
    /* unimplemented  {fstp dword [esp+0x24], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fsub st0, dword [&g_533a20]} */
    *(a1 + 0x90) = 0;
    *(a1 + 0xa4) = 0;
    void* var_a4_1 = &g_5bddf8;
🚫🚫🚫    float var_68_1 = /* float var_68_1 = unimplemented  {fstp dword [esp+0x3c], st0} */;
    /* unimplemented  {fstp dword [esp+0x3c], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x34]} */
🚫🚫    /* unimplemented  {fsub st0, dword [&g_533a1c]} */
🚫🚫🚫    float var_a4_2 = /* float var_a4_2 = unimplemented  {fstp dword [esp], st0} */;
    /* unimplemented  {fstp dword [esp], st0} */
    sub_46b660(eax_8, 3, 0, 0, 0, 0, 0, var_68_1, var_a4_2, 0, nullptr, &g_567c74, 0x5bdde0,
        &g_5bddf8, 0x5bde10, sub_469da0);
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fadd dword [&g_533a18]} */
    void* var_a4_3 = &g_5bdea0;
🚫🚫🚫    float var_a4_4 = /* float var_a4_4 = unimplemented  {fstp dword [esp], st0} */;
    /* unimplemented  {fstp dword [esp], st0} */
    sub_46b660(eax_8, 4, 0, 0, 0, 0, 0, var_68_1, var_a4_4, 0, nullptr, &g_567c74, 0x5bde70,
        0x5bde88, &g_5bdea0, sub_469da0);
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fsub st0, dword [&g_533a20]} */
🚫🚫🚫    float var_68_2 = /* float var_68_2 = unimplemented  {fstp dword [esp+0x24], st0} */;
    /* unimplemented  {fstp dword [esp+0x24], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x18]} */
🚫🚫    /* unimplemented  {fsub st0, dword [&g_533a1c]} */
    void* var_a8_2 = &g_5bdeb8;
🚫🚫🚫    float var_a8_3 = /* float var_a8_3 = unimplemented  {fstp dword [esp], st0} */;
    /* unimplemented  {fstp dword [esp], st0} */
    sub_46b660(eax_8, 5, 0, 0, 0, 0, 0, var_a8_3, var_68_2, 0, nullptr, &g_567c74, &g_5bdeb8,
        0x5bded0, 0x5bdee8, sub_469da0);
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x10]} */
🚫🚫    /* unimplemented  {fadd dword [&g_533a18]} */
    void* var_a8_4 = &g_5bde40;
🚫🚫🚫    float var_a8_5 = /* float var_a8_5 = unimplemented  {fstp dword [esp], st0} */;
    /* unimplemented  {fstp dword [esp], st0} */
    sub_46b660(eax_8, 6, 0, 0, 0, 0, 0, var_a8_5, var_68_2, 0, nullptr, &g_567c74, 0x5bde28,
        &g_5bde40, 0x5bde58, sub_469da0);
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fadd dword [&g_533a14]} */
🚫🚫🚫    float var_68_3 = /* float var_68_3 = unimplemented  {fstp dword [esp+0x24], st0} */;
    /* unimplemented  {fstp dword [esp+0x24], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x18]} */
🚫🚫    /* unimplemented  {fsub st0, dword [&g_533a14]} */
    float var_a8_6 = var_68_3;
🚫🚫🚫    float var_a8_7 = /* float var_a8_7 = unimplemented  {fstp dword [esp], st0} */;
    /* unimplemented  {fstp dword [esp], st0} */
    sub_46b660(eax_8, 7, 0, 0, 0, 0, 0, var_a8_7, var_68_3, 0, nullptr, &g_567c74, 0x5bdf90,
        0x5bdfa8, 0x5bdfc0, sub_469da0);
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fadd dword [&g_533a10]} */
    void* var_a8_8 = &g_5bdfd8;
🚫🚫🚫    float var_a8_9 = /* float var_a8_9 = unimplemented  {fstp dword [esp], st0} */;
    /* unimplemented  {fstp dword [esp], st0} */
    sub_46b660(eax_8, 8, 0, 0, 0, 0, 0, var_a8_9, var_68_3, 0, nullptr, &g_567c74, &g_5bdfd8,
        0x5bdff0, 0x5be008, sub_469da0);
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fsub st0, dword [&g_533a0c]} */
    void* var_a4_9 = &g_5be038;
🚫🚫🚫    float var_a4_10 = /* float var_a4_10 = unimplemented  {fstp dword [esp], st0} */;
    /* unimplemented  {fstp dword [esp], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x30]} */
🚫🚫    /* unimplemented  {fsub st0, dword [&g_533a0c]} */
    void* var_a8_10 = &g_5be038;
🚫🚫🚫    float var_a8_11 = /* float var_a8_11 = unimplemented  {fstp dword [esp], st0} */;
    /* unimplemented  {fstp dword [esp], st0} */
    struct status_msg* eax_11;
    void* ecx_4;
    int32_t edx_3;
    eax_11 = sub_46b660(eax_8, 9, 0, 0, 0, 0, 0, var_a8_11, var_a4_10, 0, nullptr, &g_567c74,
        0x5be020, &g_5be038, 0x5be050, sub_469da0);
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x60]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_5333c8]} */
🚫🚫🚫    uint32_t var_64_1 = /* uint32_t var_64_1 = unimplemented  {fstp dword [esp+0x28], st0} */;
    /* unimplemented  {fstp dword [esp+0x28], st0} */
    char* var_94_3 = "OBJECTIVES";
    char* eax_12 = Resource_Load(eax_11, edx_3, ecx_4, nullptr);
    void* eax_14;
    int32_t ecx_5;
    eax_14 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font3.fnt");
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x2c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_533a00]} */
    int32_t var_98_3 = ecx_5;
🚫🚫🚫    uint32_t var_98_4 = /* uint32_t var_98_4 = unimplemented  {fstp dword [esp], st0} */;
    /* unimplemented  {fstp dword [esp], st0} */
    struct status_msg* eax_15;
    void* ecx_6;
    int32_t edx_5;
    eax_15 = sub_46b970(eax_8, 1, 0, 0, 0, 0, 0, var_64_1, var_98_4, eax_14, eax_12, 1, sub_469d70);
    void* var_94_5 = &g_53f714;
    char* eax_16 = Resource_Load(eax_15, edx_5, ecx_6, nullptr);
    void* eax_17;
    int32_t ecx_8;
    eax_17 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font3.fnt");
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x2c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_5339fc]} */  /* "ffF?" */
    int32_t var_98_6 = ecx_8;
🚫🚫🚫    uint32_t var_98_7 = /* uint32_t var_98_7 = unimplemented  {fstp dword [esp], st0} */;
    /* unimplemented  {fstp dword [esp], st0} */
    sub_46b970(eax_8, 2, 0, 0, 0, 0, 0, var_64_1, var_98_7, eax_17, eax_16, 1, sub_469d70);
    int32_t var_54 = 0x41100000;
    int32_t var_50 = 0x40900000;
    int32_t var_4c = 0x41100000;
    char* var_60 = "INITIALIZING";
    char* var_5c = "CONNECTING";
    char* var_58 = "DOWNLOADING";
    int32_t var_48 = 0;
    int32_t var_44 = 0x3f000000;
    int32_t var_40 = 0x3dcccccd;
    int32_t var_3c = 0;
    int32_t var_38 = 0x3f000000;
    int32_t var_34 = 0x3dcccccd;
    int32_t var_30 = 0;
    int32_t var_2c;
    memcpy(&var_2c,
        "\x00\x00\x00\x3f\xcd\xcc\xcc\x3d\xcd\xcc\xcc\x3d\x00\x00\x80\x3f\xcd\xcc\xcc\x3d\xcd\xcc\xcc\x"
    "3d\x00\x00\x80\x3f\xcd\xcc\xcc\x3d\xcd\xcc\xcc\x3d\x00\x00\x80\x3f\xcd\xcc\xcc\x3d",
        0x2c);
    int32_t var_24;
    struct status_msg* eax_18 = sub_466240(a1, 3, &var_54, &var_60, &var_24, &var_48, 0x44051eb8);
    *(a1 + 0x9c) = eax_18;
    sub_466390(eax_18, 0, sub_469660);
    sub_466390(*(a1 + 0x9c), 1, sub_469660);
    sub_466390(*(a1 + 0x9c), 2, sub_469660);
    void* result = sub_4663b0(*(a1 + 0x9c));
    *(a1 + 0xa8) = 0;
    return result;
}
