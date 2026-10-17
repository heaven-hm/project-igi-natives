// Original IGI.EXE function: Throwable_Create (VA 0x00477040; static CFG gate PASS, CFG score 0.985).
#include "Throwable_Create.h"
struct status_msg* Throwable_Create(float context, void* param_2, double* param_3, int32_t param_4, int32_t* param_5, void* param_6, int32_t param_7)

// Sig: void Throwable_Create(void)
// Note: Creates a GRENADE/THROWABLE projectile: checks+registers it in the hash
// table via QHash_ValueGet(0x4B0DB0)/QHash_ValueSet(0x4B0D40). IGI-MP hooks for
// network throwable sync.
{
    int32_t kind = QHash_ValueGet();
    struct status_msg* result;

    if (kind)
    {
        int32_t kind_1;
        kind_1 = g_54066c;
        result = QTask_HandleInput(context, kind_1, 0);
    }
    else
    {
        QHash_ValueSet();
        kind = g_54066c;
        result = QTask_HandleInput(context, kind, 0);
        Sys_DispatchOpcode_2();
    }

    *(result + 0x730) = param_6;

    if (!param_2)
        *(result + 0x72c) = 0;
    else
        *(result + 0x72c) = QTask_LinkEventHandler_2(param_2);

    void* data_5 = DynObj_Missing(param_6 + 0x61c);

    if (data_5)
    {
        DynObj_CreateMagicObject_5(result, data_5);

        if (QHash_ValueGet())
            Script_ParseEnumInt32_28(result);
        else
        {
            QHash_ValueSet();
            Script_ParseEnumInt32_28(result);
            Sys_DispatchOpcode_2();
        }

        char* data_7 = SoundSys_EvaluateTrigger_18(param_6 + 0x61c);
        int32_t data_9 = -(param_7);
        int32_t item_8 = **(data_7 + 0x2d4) * -30.0f;
        *(result + 0x720) = data_9 - item_8;

        if (data_9 - item_8 < 0)
            *(result + 0x720) = 0;

        long double fpu_val_7_2 = result->head[0x27];
        long double fpu6 = result->head[0x28];
        fpu6 - fpu_val_7_2;
        long double fpu_val_7_3;

        if (!(*(&((fpu6 < fpu_val_7_2 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu_val_7_2) ? 1 : 0) << 0xa
                | (fpu6 == fpu_val_7_2 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_3 = result->head[0x28];
        else
            fpu_val_7_3 = result->head[0x27];

        long double fpu_val_6_1 = result->head[0x26];
        fpu_val_6_1 - fpu_val_7_3;
        long double fpu_val_7_5;

        if (*(&((fpu_val_6_1 < fpu_val_7_3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_3) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == fpu_val_7_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_7_6 = result->head[0x27];
            long double fpu_val_6_2 = result->head[0x28];
            fpu_val_6_2 - fpu_val_7_6;

            if (!(*(&((fpu_val_6_2 < fpu_val_7_6 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_2, fpu_val_7_6) ? 1 : 0) << 0xa
                    | (fpu_val_6_2 == fpu_val_7_6 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_5 = result->head[0x28];
            else
                fpu_val_7_5 = result->head[0x27];
        }
        else
            fpu_val_7_5 = result->head[0x26];

        float item_18_4 = Render_ComputeNormals(result->head[0x1b]) * fpu_val_7_5;
        WorldObject_CommitTransform(Level_StartMission_4(), result, param_3, item_18_4);
        Script_ParseEnumReal32_28(result, data_7);
        int32_t data_14 = *param_5;
        result->sprite[0x54] = data_14;
        result->sprite[0x55] = *(&data_14 + 1);
        result->sprite[0x56] = *(&data_14 + 2);
        result->sprite[0x57] = *(&data_14 + 3);
        int32_t data_15 = param_5[1];
        result->sprite[0x58] = data_15;
        result->sprite[0x59] = *(&data_15 + 1);
        result->sprite[0x5a] = *(&data_15 + 2);
        result->sprite[0x5b] = *(&data_15 + 3);
        int32_t temp_2 = param_5[2];
        result->sprite[0x5c] = temp_2;
        result->sprite[0x5d] = *(&temp_2 + 1);
        result->sprite[0x5e] = *(&temp_2 + 2);
        result->sprite[0x5f] = *(&temp_2 + 3);
        SoundSys_InitSoundSys_17(&result->sprite[0x3c]);
        memcpy(&result->head[0x1c], param_4, 0x28);
        Weapon_UpdateZoom_4(result, 0x11, 1, 0xbf800000);
        return result;
    }

    Error_Show("VirModel is null");

    while (true)
        /* nop */
}
