// Original IGI.EXE function: Throwable_Create (VA 0x00477040; static CFG gate PASS, CFG score 0.985).
#include "Throwable_Create.h"
struct status_msg* Throwable_Create(float a1, void* a2, double* a3, int32_t a4, int32_t* a5, void* a6, int32_t a7)

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
        result = QTask_HandleInput(a1, kind_1, 0);
    }
    else
    {
        QHash_ValueSet();
        kind = g_54066c;
        result = QTask_HandleInput(a1, kind, 0);
        Sys_DispatchOpcode_2();
    }

    *(result + 0x730) = a6;

    if (!a2)
        *(result + 0x72c) = 0;
    else
        *(result + 0x72c) = QTask_LinkEventHandler_2(a2);

    void* valA5 = DynObj_Missing(a6 + 0x61c);

    if (valA5)
    {
        DynObj_CreateMagicObject_5(result, valA5);

        if (QHash_ValueGet())
            Script_ParseEnumInt32_28(result);
        else
        {
            QHash_ValueSet();
            Script_ParseEnumInt32_28(result);
            Sys_DispatchOpcode_2();
        }

        char* valA7 = SoundSys_EvaluateTrigger_18(a6 + 0x61c);
        int32_t valA9 = -(a7);
        int32_t v_8 = **(valA7 + 0x2d4) * -30f;
        *(result + 0x720) = valA9 - v_8;

        if (valA9 - v_8 < 0)
            *(result + 0x720) = 0;

        long double x87_r7_2 = result->head[0x27];
        long double fpu6 = result->head[0x28];
        fpu6 - x87_r7_2;
        long double x87_r7_3;

        if (!(*(&((fpu6 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(fpu6, x87_r7_2) ? 1 : 0) << 0xa
                | (fpu6 == x87_r7_2 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = result->head[0x28];
        else
            x87_r7_3 = result->head[0x27];

        long double x87_r6_1 = result->head[0x26];
        x87_r6_1 - x87_r7_3;
        long double x87_r7_5;

        if (*(&((x87_r6_1 < x87_r7_3 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_6 = result->head[0x27];
            long double x87_r6_2 = result->head[0x28];
            x87_r6_2 - x87_r7_6;

            if (!(*(&((x87_r6_2 < x87_r7_6 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_6) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_5 = result->head[0x28];
            else
                x87_r7_5 = result->head[0x27];
        }
        else
            x87_r7_5 = result->head[0x26];

        float v_18_4 = Render_ComputeNormals(result->head[0x1b]) * x87_r7_5;
        WorldObject_CommitTransform(Level_StartMission_4(), result, a3, v_18_4);
        Script_ParseEnumReal32_28(result, valA7);
        int32_t valA14 = *a5;
        result->sprite[0x54] = valA14;
        result->sprite[0x55] = *(&valA14 + 1);
        result->sprite[0x56] = *(&valA14 + 2);
        result->sprite[0x57] = *(&valA14 + 3);
        int32_t valA15 = a5[1];
        result->sprite[0x58] = valA15;
        result->sprite[0x59] = *(&valA15 + 1);
        result->sprite[0x5a] = *(&valA15 + 2);
        result->sprite[0x5b] = *(&valA15 + 3);
        int32_t tmpD2 = a5[2];
        result->sprite[0x5c] = tmpD2;
        result->sprite[0x5d] = *(&tmpD2 + 1);
        result->sprite[0x5e] = *(&tmpD2 + 2);
        result->sprite[0x5f] = *(&tmpD2 + 3);
        SoundSys_InitSoundSys_17(&result->sprite[0x3c]);
        memcpy(&result->head[0x1c], a4, 0x28);
        Weapon_UpdateZoom_4(result, 0x11, 1, 0xbf800000);
        return result;
    }

    Error_Show("VirModel is null");

    while (true)
        /* nop */
}
