// IGI native provenance: QTask_ProcessLOCALconfigqsc - 0x00402070 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00402070-QTask_ProcessLOCALconfigqsc.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_ProcessLOCALconfigqsc.h"

int32_t QTask_ProcessLOCALconfigqsc(struct frames_ctx* pThis)

{
    g_frames_ctx = pThis;
    struct status_msg* eax_1 = Object_Create(nullptr, QTask_OpenEvent_2(), 0);
    struct frames_ctx* frames_ctx_1 = g_frames_ctx;
    frames_ctx_1->pad_45[3] = eax_1;
    frames_ctx_1->pad_45[4] = *(&eax_1 + 1);
    frames_ctx_1->pad_45[5] = *(&eax_1 + 2);
    frames_ctx_1->pad_45[6] = *(&eax_1 + 3);
    struct frames_ctx* frames_ctx_6 = g_frames_ctx;
    int32_t eax_2;
    eax_2 = frames_ctx_6->pad_45[3];
    *(&eax_2 + 1) = frames_ctx_6->pad_45[4];
    *(&eax_2 + 2) = frames_ctx_6->pad_45[5];
    *(&eax_2 + 3) = frames_ctx_6->pad_45[6];
    QTask_OpenEvent_3(eax_2);
    Frames_Set(0x1e);
    struct frames_ctx* frames_ctx_2 = g_frames_ctx;
    frames_ctx_2->pad_40[0] = 0;
    frames_ctx_2->pad_40[1] = 0;
    frames_ctx_2->pad_40[2] = 0;
    frames_ctx_2->pad_40[3] = 0;
    struct frames_ctx* frames_ctx_7 = g_frames_ctx;
    frames_ctx_7->pad_45[7] = 0;
    frames_ctx_7->pad_45[8] = 0;
    frames_ctx_7->pad_45[9] = 0;
    frames_ctx_7->pad_45[0xa] = 0;
    g_frames_ctx->unk50 = 0;
    Config_Read("LOCAL:config.qsc");
    Weapon_TypeOpen();
    HumanPlayer_LoadParameters();
    GameMaterial_LoadParameters();
    Magic_ObjLoad("LOCAL:magicobj");
    Anim_TriggerLoad("LOCAL:animtrigger");
    Physics_ObjLoad("LOCAL:physicsobj");
    Weapon_ConfigRead(pThis, "LOCAL:weapons/weaponconfig.qsc");
    Object_Create(pThis, SoundSys_EvaluateTrigger_17(), 0);
    AIConfig_UnableToCreateHumana(pThis);
    struct frames_ctx* frames_ctx_3 = g_frames_ctx;
    frames_ctx_3->pad_00[0x28] = 0;
    frames_ctx_3->pad_00[0x29] = 0;
    frames_ctx_3->pad_00[0x2a] = 0;
    frames_ctx_3->pad_00[0x2b] = 0;
    struct frames_ctx* frames_ctx_8 = g_frames_ctx;
    frames_ctx_8->pad_00[0x2c] = 0;
    frames_ctx_8->pad_00[0x2d] = 0;
    frames_ctx_8->pad_00[0x2e] = 0;
    frames_ctx_8->pad_00[0x2f] = 0;
    struct status_msg* eax_6 = SoundSys_SetMasterVolume_9(g_frames_ctx);
    struct frames_ctx* frames_ctx_4 = g_frames_ctx;
    frames_ctx_4->pad_00[0x20] = eax_6;
    frames_ctx_4->pad_00[0x21] = *(&eax_6 + 1);
    frames_ctx_4->pad_00[0x22] = *(&eax_6 + 2);
    frames_ctx_4->pad_00[0x23] = *(&eax_6 + 3);
    struct status_msg* eax_7 = InputPort_Process(g_frames_ctx);
    struct frames_ctx* frames_ctx_5 = g_frames_ctx;
    frames_ctx_5->pad_00[0x24] = eax_7;
    frames_ctx_5->pad_00[0x25] = *(&eax_7 + 1);
    frames_ctx_5->pad_00[0x26] = *(&eax_7 + 2);
    frames_ctx_5->pad_00[0x27] = *(&eax_7 + 3);
    SoundSys_InitSoundSys_5(g_frames_ctx);

    if (g_c28c61)
    {
        int32_t eax_10 = 0;

        if (g_c28f80)
            eax_10 = 3;

        int32_t var_2c_1 = 0x3cf5c28f;
        void* eax_11 = Config_SetGamma();
        InputPort_Action(0, Config_SetResolution(), eax_11, eax_10, 0x3cf5c28f, 0x3a83126f,
            0x3a83126f, 0x3a83126f, 0x3a83126f, 0x3cf5c28f, 0x3a83126f, 0x3a83126f, 0x3cf5c28f,
            0x3a83126f, 0x3a83126f);
        g_bc20a0 = 1;
    }

    FX_TrailUpdate_23(QTask_InvokeRestoreDevice, 0);
    int32_t* eax_13 = File_Open(".\anys.afp", "rb");

    if (eax_13)
    {
        Camera_ApplyLineFilter_4(eax_13, nullptr, FILE_BEGIN);
        int32_t ecx_2 = 0;
        ecx_2 = Camera_SetFieldOfView_4(eax_13) == 0x3a;
        int32_t result = Camera_UpdateTransform_4(eax_13);

        if (ecx_2)
            return result;
    }

    Error_Show("EXCEPTION FAULT: 0x000002");

    while (true)
        /* nop */
}
