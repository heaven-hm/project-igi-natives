#include "gi_platform.h"
#include "00422C90-ModelViewBox_Process.h"
int32_t ModelViewBox_Process(void* a1, int32_t a2)

{
    int32_t v_40;
    __builtin_memset(&v_40, 0, 0x18);
    ((int(*)())(uintptr_t)(*((Menu_PlayMusic_13() << 2) + &g_a96ae0)))(a1, a2);
    (*(int32_t*)(uintptr_t)(a1 + 0x28)) = 0x12c;
    (*(int32_t*)(uintptr_t)(a1 + 0x2c)) = 0xc8;
    (*(int32_t*)(uintptr_t)(a1 + 0x3c)) = 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x40)) = 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x54)) = 0;
    void* valA3;
    int32_t objC1;
    valA3 = DynObj_InsertHashItem_7(0x1000);
    (*(int32_t*)(uintptr_t)(a1 + 0x58)) = valA3;
    Camera_ResetFrameCounters(a1 + 0x60);
    int32_t v_28 = 0x3f800000;
    int32_t v_24 = 0;
    int32_t v_20 = 0;
    int32_t v_1c = 0;
    int32_t v_18 = 0x3f800000;
    int32_t v_14 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    int32_t v_8 = 0x3f800000;
    int32_t v_4 = 0;
    int32_t* valA4 = SoundSys_SetFrequency_9();
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fptan(0.78539818525314331);
    int32_t v_5c = 0x43960000;
    int32_t v_64 = objC1;
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    float v_64_1 = /* float v_64_1 = unimplemented  {fstp dword [esp], fp0} */;
    /* unimplemented  {fstp dword [esp], fp0} */
    Camera_SubmitFrame(a1 + 0x60, &v_40, &v_28, v_64_1, 0x3f800000, valA4, a1, 0, 0.0f);
    int32_t v_84 = 0;
    struct status_msg* valA6 = SoundSys_AttachLipsync_11((*(int32_t*)(uintptr_t)(*(a1 + 0x44) + 0x14)), 0, 0, 0x3f800000, 0x3f800000,
        (*(int32_t*)(uintptr_t)(a1 + 0x58)), a1 + 0x60, 0, 0, 0, 0x3f800000);
    uint32_t objC3 = (*(int32_t*)(uintptr_t)(a1 + 0x58));
    (*(int32_t*)(uintptr_t)(a1 + 0x5c)) = valA6;
    TerraDrawTask_OnEvent(valA6, objC3);
    return SoundSys_StopSoundSample_12((*(int32_t*)(uintptr_t)(a1 + 0x5c)), 0);
}
