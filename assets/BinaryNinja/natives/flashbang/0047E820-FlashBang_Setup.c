// IGI native provenance: FlashBang_Setup - 0x0047E820 - CFG score 97.4% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047E820-FlashBang_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FlashBang_Setup.h"
int32_t FlashBang_Setup(int32_t* context)

{
    int32_t* context_val = context;
    context = 3;
    bool flag_0_1;

    do
    {
        int32_t item_40 = 0;
        void item_34;
        memcpy(&item_34, &context_val[8], 0x18);
        int32_t item_3c_1 = 0;
        int32_t item_38_1 = 0;
        float item_38_2 =
            (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 1.5 * 4096000.0f * 9.25925906e-06.0f;
        float item_44_1 = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.25;
        long double fpu_val_7_10 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
        Script_SpawnNewTask_31(context_val[0xe], &item_34, &item_40, item_44_1,
            (fpu_val_7_10 + fpu_val_7_10) * 0.0436332338f + 0.020362176f, 0, 0x3f800000, 0x5a, 0x1e);
        flag_0_1 = context != 1;
        context -= 1;
    } while (flag_0_1);
    struct status_msg* data_8 = SoundSys_SetMasterVolume_7(Script_FormatString(), "explo_flash");

    if (data_8)
        SoundSys_StopSoundSample_7(data_8, &context_val[8]);

    int32_t item_1c = 0x13;
    int32_t item_18 = 0xffffffff;
    int32_t item_14 = 3;
    void* item_c = &context_val[8];
    int32_t item_10 = 0x47200000;
    int32_t item_4 = 0;
    int32_t* item_8 = context_val;
    AI_EventBroadcast(&item_1c);
    return QTask_FindType(context_val);
}
