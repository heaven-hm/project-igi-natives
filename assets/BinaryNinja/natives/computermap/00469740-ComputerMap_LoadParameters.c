// Original IGI.EXE function: ComputerMap_LoadParameters (VA 0x00469740; static CFG gate PASS, CFG score 0.991).
#include "ComputerMap_LoadParameters.h"
void* ComputerMap_LoadParameters(void* a1)

{
    void* valA = AI_CheckHearing_29();
    float v_64 = g_c28b44;
    long double x87_r7_1 = g_c28b48;
    g_5bdd98 = a1;
    float v_6c = x87_r7_1;
    Sys_CloseFileStream_12(a1 + 0x48, -1.57079637f);
    Sys_AllocateMemory_12(a1 + 0x20, a1 + 0x48, -1.57079637f);
    void* valA1 = g_5bdd9c;

    if (valA1)
    {
        AI_UpdateOrders_26(a1, valA1);
        AI_CheckSector_27(0);
    }

    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fptan(*((g_5bdda0 << 2) + &g_53f750));
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    *(a1 + 0x70) =
    /* unimplemented  {fstp dword [srcS+0x70], fp0} */
🚫🚫    int32_t objC = FX_TrailUpdate_11();
    /* unimplemented  {call FX_TrailUpdate_11} */
    int32_t v_8c_2 = objC;
🚫🚫🚫    float v_8c_3 = /* float v_8c_3 = unimplemented  {fstp dword [esp], fp0} */;
    /* unimplemented  {fstp dword [esp], fp0} */
    int32_t* valA3 = SoundSys_SetFrequency_9();
    int32_t v_98_1 = 0x43960000;
    Camera_SubmitFrame(valA, &g_5bdd78, a1 + 0x20, *(a1 + 0x70), 0x3f800000, valA3, a1,
        v_8c_3, 0f);
    SoundSys_StopSoundSample_12(AI_CheckVisibility_29(), 1);
    SoundSys_SetMasterVolume_12(AI_CheckVisibility_29(), 0, 1);
    *(a1 + 0x80) = 0;
    *(a1 + 0x84) = 0;
    *(a1 + 0xa0) = AI_CheckVisibility_25(a1);
    *(a1 + 0x74) = Camera_ApplyWideScreen(a1, 0, 0, 0, 0x440a1eb8, 0);
    *(a1 + 0x78) = 0x3f800000;
    *(a1 + 0x7c) = 0x3c;
    struct status_msg* valA8 = Physics_InterpolateWaypoint_4(a1);
    AI_CheckHearing_28(valA8);
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533a28]} */
🚫🚫🚫    float v_74 = /* float v_74 = unimplemented  {fstp dword [esp+0x10], fp0} */;
    /* unimplemented  {fstp dword [esp+0x10], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x18]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533a24]} */  /* "ff6?" */
🚫🚫🚫    float v_70 = /* float v_70 = unimplemented  {fstp dword [esp+0x24], fp0} */;
    /* unimplemented  {fstp dword [esp+0x24], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [&g_533a20]} */
    *(a1 + 0x90) = 0;
    *(a1 + 0xa4) = 0;
    void* v_a4_1 = &g_5bddf8;
🚫🚫🚫    float v_68_1 = /* float v_68_1 = unimplemented  {fstp dword [esp+0x3c], fp0} */;
    /* unimplemented  {fstp dword [esp+0x3c], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x34]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [&g_533a1c]} */
🚫🚫🚫    float v_a4_2 = /* float v_a4_2 = unimplemented  {fstp dword [esp], fp0} */;
    /* unimplemented  {fstp dword [esp], fp0} */
    ComputerButtonItem_Process_2(valA8, 3, 0, 0, 0, 0, 0, v_68_1, v_a4_2, 0, nullptr, &g_567c74, 0x5bdde0,
        &g_5bddf8, 0x5bde10, AI_SelectTarget_26);
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fadd dword [&g_533a18]} */
    void* v_a4_3 = &g_5bdea0;
🚫🚫🚫    float v_a4_4 = /* float v_a4_4 = unimplemented  {fstp dword [esp], fp0} */;
    /* unimplemented  {fstp dword [esp], fp0} */
    ComputerButtonItem_Process_2(valA8, 4, 0, 0, 0, 0, 0, v_68_1, v_a4_4, 0, nullptr, &g_567c74, 0x5bde70,
        0x5bde88, &g_5bdea0, AI_SelectTarget_26);
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [&g_533a20]} */
🚫🚫🚫    float v_68_2 = /* float v_68_2 = unimplemented  {fstp dword [esp+0x24], fp0} */;
    /* unimplemented  {fstp dword [esp+0x24], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x18]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [&g_533a1c]} */
    void* v_a8_2 = &g_5bdeb8;
🚫🚫🚫    float v_a8_3 = /* float v_a8_3 = unimplemented  {fstp dword [esp], fp0} */;
    /* unimplemented  {fstp dword [esp], fp0} */
    ComputerButtonItem_Process_2(valA8, 5, 0, 0, 0, 0, 0, v_a8_3, v_68_2, 0, nullptr, &g_567c74, &g_5bdeb8,
        0x5bded0, 0x5bdee8, AI_SelectTarget_26);
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x10]} */
🚫🚫    /* unimplemented  {fadd dword [&g_533a18]} */
    void* v_a8_4 = &g_5bde40;
🚫🚫🚫    float v_a8_5 = /* float v_a8_5 = unimplemented  {fstp dword [esp], fp0} */;
    /* unimplemented  {fstp dword [esp], fp0} */
    ComputerButtonItem_Process_2(valA8, 6, 0, 0, 0, 0, 0, v_a8_5, v_68_2, 0, nullptr, &g_567c74, 0x5bde28,
        &g_5bde40, 0x5bde58, AI_SelectTarget_26);
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fadd dword [&g_533a14]} */
🚫🚫🚫    float v_68_3 = /* float v_68_3 = unimplemented  {fstp dword [esp+0x24], fp0} */;
    /* unimplemented  {fstp dword [esp+0x24], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x18]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [&g_533a14]} */
    float v_a8_6 = v_68_3;
🚫🚫🚫    float v_a8_7 = /* float v_a8_7 = unimplemented  {fstp dword [esp], fp0} */;
    /* unimplemented  {fstp dword [esp], fp0} */
    ComputerButtonItem_Process_2(valA8, 7, 0, 0, 0, 0, 0, v_a8_7, v_68_3, 0, nullptr, &g_567c74, 0x5bdf90,
        0x5bdfa8, 0x5bdfc0, AI_SelectTarget_26);
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fadd dword [&g_533a10]} */
    void* v_a8_8 = &g_5bdfd8;
🚫🚫🚫    float v_a8_9 = /* float v_a8_9 = unimplemented  {fstp dword [esp], fp0} */;
    /* unimplemented  {fstp dword [esp], fp0} */
    ComputerButtonItem_Process_2(valA8, 8, 0, 0, 0, 0, 0, v_a8_9, v_68_3, 0, nullptr, &g_567c74, &g_5bdfd8,
        0x5bdff0, 0x5be008, AI_SelectTarget_26);
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [&g_533a0c]} */
    void* v_a4_9 = &g_5be038;
🚫🚫🚫    float v_a4_10 = /* float v_a4_10 = unimplemented  {fstp dword [esp], fp0} */;
    /* unimplemented  {fstp dword [esp], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x30]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [&g_533a0c]} */
    void* v_a8_10 = &g_5be038;
🚫🚫🚫    float v_a8_11 = /* float v_a8_11 = unimplemented  {fstp dword [esp], fp0} */;
    /* unimplemented  {fstp dword [esp], fp0} */
    struct status_msg* valA11;
    void* objC4;
    int32_t tmpD3;
    valA11 = ComputerButtonItem_Process_2(valA8, 9, 0, 0, 0, 0, 0, v_a8_11, v_a4_10, 0, nullptr, &g_567c74,
        0x5be020, &g_5be038, 0x5be050, AI_SelectTarget_26);
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x60]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5333c8]} */
🚫🚫🚫    uint32_t v_64_1 = /* uint32_t v_64_1 = unimplemented  {fstp dword [esp+0x28], fp0} */;
    /* unimplemented  {fstp dword [esp+0x28], fp0} */
    char* v_94_3 = "OBJECTIVES";
    char* valA12 = Resource_Load(valA11, tmpD3, objC4, nullptr);
    void* valA14;
    int32_t objC5;
    valA14 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font3.fnt");
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x2c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533a00]} */
    int32_t v_98_3 = objC5;
🚫🚫🚫    uint32_t v_98_4 = /* uint32_t v_98_4 = unimplemented  {fstp dword [esp], fp0} */;
    /* unimplemented  {fstp dword [esp], fp0} */
    struct status_msg* valA15;
    void* objC6;
    int32_t tmpD5;
    valA15 = ComputerTextItem_Process_2(valA8, 1, 0, 0, 0, 0, 0, v_64_1, v_98_4, valA14, valA12, 1, sub_469d70);
    void* v_94_5 = &g_53f714;
    char* valA16 = Resource_Load(valA15, tmpD5, objC6, nullptr);
    void* valA17;
    int32_t objC8;
    valA17 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font3.fnt");
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x2c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5339fc]} */  /* "ffF?" */
    int32_t v_98_6 = objC8;
🚫🚫🚫    uint32_t v_98_7 = /* uint32_t v_98_7 = unimplemented  {fstp dword [esp], fp0} */;
    /* unimplemented  {fstp dword [esp], fp0} */
    ComputerTextItem_Process_2(valA8, 2, 0, 0, 0, 0, 0, v_64_1, v_98_7, valA17, valA16, 1, sub_469d70);
    int32_t v_54 = 0x41100000;
    int32_t v_50 = 0x40900000;
    int32_t v_4c = 0x41100000;
    char* v_60 = "INITIALIZING";
    char* v_5c = "CONNECTING";
    char* v_58 = "DOWNLOADING";
    int32_t v_48 = 0;
    int32_t v_44 = 0x3f000000;
    int32_t v_40 = 0x3dcccccd;
    int32_t v_3c = 0;
    int32_t v_38 = 0x3f000000;
    int32_t v_34 = 0x3dcccccd;
    int32_t v_30 = 0;
    int32_t v_2c;
    memcpy(&v_2c,
        "\x00\x00\x00\x3f\xcd\xcc\xcc\x3d\xcd\xcc\xcc\x3d\x00\x00\x80\x3f\xcd\xcc\xcc\x3d\xcd\xcc\xcc\x"
    "3d\x00\x00\x80\x3f\xcd\xcc\xcc\x3d\xcd\xcc\xcc\x3d\x00\x00\x80\x3f\xcd\xcc\xcc\x3d",
        0x2c);
    int32_t v_24;
    struct status_msg* valA18 = AI_FireWeapon_24(a1, 3, &v_54, &v_60, &v_24, &v_48, 0x44051eb8);
    *(a1 + 0x9c) = valA18;
    AI_MoveToNode_24(valA18, 0, sub_469660);
    AI_MoveToNode_24(*(a1 + 0x9c), 1, sub_469660);
    AI_MoveToNode_24(*(a1 + 0x9c), 2, sub_469660);
    void* result = AI_TakeCover_24(*(a1 + 0x9c));
    *(a1 + 0xa8) = 0;
    return result;
}
