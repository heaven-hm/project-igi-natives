// IGI native provenance: ModelViewBox_Process - 0x00422C90 - CFG score 96.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 00422C90-ModelViewBox_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ModelViewBox_Process.h"
int32_t ModelViewBox_Process(void* context, int32_t param_2)

{
    int32_t item_40;
    memset(&item_40, 0, 0x18);
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(context, param_2);
    *(context + 0x28) = 0x12c;
    *(context + 0x2c) = 0xc8;
    *(context + 0x3c) = 1;
    *(context + 0x40) = 1;
    *(context + 0x54) = 0;
    void* data_3;
    int32_t entity_1;
    data_3 = DynObj_InsertHashItem_7(0x1000);
    *(context + 0x58) = data_3;
    Camera_ResetFrameCounters(context + 0x60);
    int32_t item_28 = 0x3f800000;
    int32_t item_24 = 0;
    int32_t item_20 = 0;
    int32_t item_1c = 0;
    int32_t item_18 = 0x3f800000;
    int32_t item_14 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    int32_t item_8 = 0x3f800000;
    int32_t item_4 = 0;
    int32_t* data_4 = SoundSys_SetFrequency_9();
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fptan(0.78539818525314331);
    int32_t item_5c = 0x43960000;
    int32_t item_64 = entity_1;
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    float item_64_1 = /* float item_64_1 = unimplemented  {fstp dword [stack_ptr], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr], fp0} */
    Camera_SubmitFrame(context + 0x60, &item_40, &item_28, item_64_1, 0x3f800000, data_4, context, 0, 0.0f);
    int32_t item_84 = 0;
    struct status_msg* data_6 = SoundSys_AttachLipsync_11(*(*(context + 0x44) + 0x14), 0, 0, 0x3f800000, 0x3f800000,
        *(context + 0x58), context + 0x60, 0, 0, 0, 0x3f800000);
    uint32_t entity_3 = *(context + 0x58);
    *(context + 0x5c) = data_6;
    TerraDrawTask_OnEvent(data_6, entity_3);
    return SoundSys_StopSoundSample_12(*(context + 0x5c), 0);
}
