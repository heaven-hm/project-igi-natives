#include "0046BB10-Computer_LoadParameters.h"
/* 0x0046bb10 Computer_LoadParameters full linked: callers=0 callees=36 */
int32_t sub_46bb10(void* a1)

{
    int32_t var_40;
    __builtin_memset(&var_40, 0, 0x18);
    g_5be2cc = a1;
    void* eax_1;

    if (!sub_46c0b0())
        eax_1 = nullptr;
    else
        eax_1 = sub_4cec10("mapcomputer");

    sub_4c5710(Level_StartMission_4(), a1, eax_1);
    sub_4c6890(Level_StartMission_4(), a1, 1);
    *(a1 + 0x130) = 0;
    Camera_ResetFrameCounters(a1 + 0x138);
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
    int32_t ecx;
    long double st0;
    st0 = sub_489470();
    int32_t var_50_2 = ecx;
    int32_t* eax_4 = sub_4e75a0();
    long double st0_1;
    bool c1;
    bool c2;
    st0_1 = __fptan(0.78539818525314331);
    int32_t var_5c = 0x43960000;
    int32_t var_64 = ecx;
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫🚫    float var_64_1 = /* float var_64_1 = unimplemented  {fstp dword [esp], st0} */;
    /* unimplemented  {fstp dword [esp], st0} */
    Camera_SubmitFrame(a1 + 0x138, &var_40, &var_28, var_64_1, 0x3f800000, eax_4, a1, st0, 0f);
    int32_t var_5c_1 = 0;
    uint32_t eax_5 = Level_StartMission_4();
    *(a1 + 0x130) = sub_4e8110(*(Level_LoadLevel_6() + 0x44), 0, 0, 0x3f800000, 0x3f800000,
        eax_5, a1 + 0x138, 0, 0, 0, 0x3f800000);
    void* eax_10 = sub_485320(*(Level_LoadLevel_6() + 0x44));
    QTask_RemoveEventCallback_2(*(a1 + 0x130), eax_10);
    uint32_t eax_11 = Level_StartMission_4();
    sub_4e8370(*(a1 + 0x130), eax_11);
    sub_4e8220(*(a1 + 0x130), 1, 0);
    sub_4e8250(*(a1 + 0x130), 0);
    sub_4e8220(*(a1 + 0x130), 0, 0);
    sub_4e8270(*(a1 + 0x130), 0);
    g_53fd9c = sub_499fe0();
    sub_499fd0(0);
    void* eax_16 = sub_485320(*(Level_LoadLevel_6() + 0x44));
    sub_4e8250(eax_16, 0);
    sub_4e8220(eax_16, 0xffffffff, 0);
    sub_4e8220(eax_16, 0, 0);
    sub_46ab40();
    sub_46ab50(*(sub_46c060() + 0x14));

    if (!sub_46c0b0())
        return sub_46afb0(2);

    return sub_46afb0(1);
}
