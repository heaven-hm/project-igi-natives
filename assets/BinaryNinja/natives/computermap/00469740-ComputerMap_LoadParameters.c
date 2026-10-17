// IGI native provenance: ComputerMap_LoadParameters - 0x00469740 - CFG score 99.1% (PASS; structural only); runtime behavior not verified.
// Evidence: 00469740-ComputerMap_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerMap_LoadParameters.h"
void* ComputerMap_LoadParameters(void* context)

{
    void* data_val = AI_CheckHearing_29();
    float item_64 = g_c28b44;
    long double fpu_val_7_1 = g_c28b48;
    g_5bdd98 = context;
    float item_6c = fpu_val_7_1;
    Sys_CloseFileStream_12(context + 0x48, -1.57079637f);
    Sys_AllocateMemory_12(context + 0x20, context + 0x48, -1.57079637f);
    void* data_1 = g_5bdd9c;

    if (data_1)
    {
        AI_UpdateOrders_26(context, data_1);
        AI_CheckSector_27(0);
    }

    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fptan(*((g_5bdda0 << 2) + &g_53f750));
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    *(context + 0x70) =
    /* unimplemented  {fstp dword [source_val+0x70], fp0} */
🚫🚫    int32_t entity_val = FX_TrailUpdate_11();
    /* unimplemented  {call FX_TrailUpdate_11} */
    int32_t item_8c_2 = entity_val;
🚫🚫🚫    float item_8c_3 = /* float item_8c_3 = unimplemented  {fstp dword [stack_ptr], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr], fp0} */
    int32_t* data_3 = SoundSys_SetFrequency_9();
    int32_t item_98_1 = 0x43960000;
    Camera_SubmitFrame(data_val, &g_5bdd78, context + 0x20, *(context + 0x70), 0x3f800000, data_3, context,
        item_8c_3, 0.0f);
    SoundSys_StopSoundSample_12(AI_CheckVisibility_29(), 1);
    SoundSys_SetMasterVolume_12(AI_CheckVisibility_29(), 0, 1);
    *(context + 0x80) = 0;
    *(context + 0x84) = 0;
    *(context + 0xa0) = AI_CheckVisibility_25(context);
    *(context + 0x74) = Camera_ApplyWideScreen(context, 0, 0, 0, 0x440a1eb8, 0);
    *(context + 0x78) = 0x3f800000;
    *(context + 0x7c) = 0x3c;
    struct status_msg* data_8 = Physics_InterpolateWaypoint_4(context);
    AI_CheckHearing_28(data_8);
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x50]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533a28]} */
🚫🚫🚫    float item_74 = /* float item_74 = unimplemented  {fstp dword [stack_ptr+0x10], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x10], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x18]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533a24]} */  /* "ff6?" */
🚫🚫🚫    float item_70 = /* float item_70 = unimplemented  {fstp dword [stack_ptr+0x24], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x24], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [&g_533a20]} */
    *(context + 0x90) = 0;
    *(context + 0xa4) = 0;
    void* item_a4_1 = &g_5bddf8;
🚫🚫🚫    float item_68_1 = /* float item_68_1 = unimplemented  {fstp dword [stack_ptr+0x3c], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x3c], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x34]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [&g_533a1c]} */
🚫🚫🚫    float item_a4_2 = /* float item_a4_2 = unimplemented  {fstp dword [stack_ptr], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr], fp0} */
    ComputerButtonItem_Process_2(data_8, 3, 0, 0, 0, 0, 0, item_68_1, item_a4_2, 0, nullptr, &g_567c74, 0x5bdde0,
        &g_5bddf8, 0x5bde10, AI_SelectTarget_26);
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x54]} */
🚫🚫    /* unimplemented  {fadd dword [&g_533a18]} */
    void* item_a4_3 = &g_5bdea0;
🚫🚫🚫    float item_a4_4 = /* float item_a4_4 = unimplemented  {fstp dword [stack_ptr], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr], fp0} */
    ComputerButtonItem_Process_2(data_8, 4, 0, 0, 0, 0, 0, item_68_1, item_a4_4, 0, nullptr, &g_567c74, 0x5bde70,
        0x5bde88, &g_5bdea0, AI_SelectTarget_26);
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x54]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [&g_533a20]} */
🚫🚫🚫    float item_68_2 = /* float item_68_2 = unimplemented  {fstp dword [stack_ptr+0x24], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x24], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x18]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [&g_533a1c]} */
    void* item_a8_2 = &g_5bdeb8;
🚫🚫🚫    float item_a8_3 = /* float item_a8_3 = unimplemented  {fstp dword [stack_ptr], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr], fp0} */
    ComputerButtonItem_Process_2(data_8, 5, 0, 0, 0, 0, 0, item_a8_3, item_68_2, 0, nullptr, &g_567c74, &g_5bdeb8,
        0x5bded0, 0x5bdee8, AI_SelectTarget_26);
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x10]} */
🚫🚫    /* unimplemented  {fadd dword [&g_533a18]} */
    void* item_a8_4 = &g_5bde40;
🚫🚫🚫    float item_a8_5 = /* float item_a8_5 = unimplemented  {fstp dword [stack_ptr], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr], fp0} */
    ComputerButtonItem_Process_2(data_8, 6, 0, 0, 0, 0, 0, item_a8_5, item_68_2, 0, nullptr, &g_567c74, 0x5bde28,
        &g_5bde40, 0x5bde58, AI_SelectTarget_26);
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x54]} */
🚫🚫    /* unimplemented  {fadd dword [&g_533a14]} */
🚫🚫🚫    float item_68_3 = /* float item_68_3 = unimplemented  {fstp dword [stack_ptr+0x24], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x24], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x18]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [&g_533a14]} */
    float item_a8_6 = item_68_3;
🚫🚫🚫    float item_a8_7 = /* float item_a8_7 = unimplemented  {fstp dword [stack_ptr], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr], fp0} */
    ComputerButtonItem_Process_2(data_8, 7, 0, 0, 0, 0, 0, item_a8_7, item_68_3, 0, nullptr, &g_567c74, 0x5bdf90,
        0x5bdfa8, 0x5bdfc0, AI_SelectTarget_26);
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x50]} */
🚫🚫    /* unimplemented  {fadd dword [&g_533a10]} */
    void* item_a8_8 = &g_5bdfd8;
🚫🚫🚫    float item_a8_9 = /* float item_a8_9 = unimplemented  {fstp dword [stack_ptr], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr], fp0} */
    ComputerButtonItem_Process_2(data_8, 8, 0, 0, 0, 0, 0, item_a8_9, item_68_3, 0, nullptr, &g_567c74, &g_5bdfd8,
        0x5bdff0, 0x5be008, AI_SelectTarget_26);
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x54]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [&g_533a0c]} */
    void* item_a4_9 = &g_5be038;
🚫🚫🚫    float item_a4_10 = /* float item_a4_10 = unimplemented  {fstp dword [stack_ptr], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x30]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [&g_533a0c]} */
    void* item_a8_10 = &g_5be038;
🚫🚫🚫    float item_a8_11 = /* float item_a8_11 = unimplemented  {fstp dword [stack_ptr], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr], fp0} */
    struct status_msg* data_11;
    void* entity_4;
    int32_t temp_3;
    data_11 = ComputerButtonItem_Process_2(data_8, 9, 0, 0, 0, 0, 0, item_a8_11, item_a4_10, 0, nullptr, &g_567c74,
        0x5be020, &g_5be038, 0x5be050, AI_SelectTarget_26);
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x60]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5333c8]} */
🚫🚫🚫    uint32_t item_64_1 = /* uint32_t item_64_1 = unimplemented  {fstp dword [stack_ptr+0x28], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x28], fp0} */
    char* item_94_3 = "OBJECTIVES";
    char* data_12 = Resource_Load(data_11, temp_3, entity_4, nullptr);
    void* data_14;
    int32_t entity_5;
    data_14 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font3.fnt");
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x2c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533a00]} */
    int32_t item_98_3 = entity_5;
🚫🚫🚫    uint32_t item_98_4 = /* uint32_t item_98_4 = unimplemented  {fstp dword [stack_ptr], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr], fp0} */
    struct status_msg* data_15;
    void* entity_6;
    int32_t temp_5;
    data_15 = ComputerTextItem_Process_2(data_8, 1, 0, 0, 0, 0, 0, item_64_1, item_98_4, data_14, data_12, 1, sub_469d70);
    void* item_94_5 = &g_53f714;
    char* data_16 = Resource_Load(data_15, temp_5, entity_6, nullptr);
    void* data_17;
    int32_t entity_8;
    data_17 = Menu_HandleInput_3(*(g_bc2360 + 0x120), "font3.fnt");
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x2c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5339fc]} */  /* "ffF?" */
    int32_t item_98_6 = entity_8;
🚫🚫🚫    uint32_t item_98_7 = /* uint32_t item_98_7 = unimplemented  {fstp dword [stack_ptr], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr], fp0} */
    ComputerTextItem_Process_2(data_8, 2, 0, 0, 0, 0, 0, item_64_1, item_98_7, data_17, data_16, 1, sub_469d70);
    int32_t item_54 = 0x41100000;
    int32_t item_50 = 0x40900000;
    int32_t item_4c = 0x41100000;
    char* item_60 = "INITIALIZING";
    char* item_5c = "CONNECTING";
    char* item_58 = "DOWNLOADING";
    int32_t item_48 = 0;
    int32_t item_44 = 0x3f000000;
    int32_t item_40 = 0x3dcccccd;
    int32_t item_3c = 0;
    int32_t item_38 = 0x3f000000;
    int32_t item_34 = 0x3dcccccd;
    int32_t item_30 = 0;
    int32_t item_2c;
    memcpy(&item_2c,
        "\x00\x00\x00\x3f\xcd\xcc\xcc\x3d\xcd\xcc\xcc\x3d\x00\x00\x80\x3f\xcd\xcc\xcc\x3d\xcd\xcc\xcc\x"
    "3d\x00\x00\x80\x3f\xcd\xcc\xcc\x3d\xcd\xcc\xcc\x3d\x00\x00\x80\x3f\xcd\xcc\xcc\x3d",
        0x2c);
    int32_t item_24;
    struct status_msg* data_18 = AI_FireWeapon_24(context, 3, &item_54, &item_60, &item_24, &item_48, 0x44051eb8);
    *(context + 0x9c) = data_18;
    AI_MoveToNode_24(data_18, 0, sub_469660);
    AI_MoveToNode_24(*(context + 0x9c), 1, sub_469660);
    AI_MoveToNode_24(*(context + 0x9c), 2, sub_469660);
    void* result = AI_TakeCover_24(*(context + 0x9c));
    *(context + 0xa8) = 0;
    return result;
}
