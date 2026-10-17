// Original IGI.EXE function: RotatingObject_Process (VA 0x004395D0; static CFG gate PASS, CFG score 0.944).
#include "RotatingObject_Process.h"
int32_t RotatingObject_Process(float context)

{
    memcpy(context + 0x160, context + 0x70, 0x28);
    DynObj_CreateMagicObject_5(context, DynObj_Missing(context + 0x110));
    long double fpu7 = *(context + 0x9c);
    long double fpu6 = *(context + 0xa0);
    fpu6 - fpu7;
    long double fpu_val_7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_1 = *(context + 0xa0);
    else
        fpu_val_7_1 = *(context + 0x9c);

    long double fpu_val_6_1 = *(context + 0x98);
    fpu_val_6_1 - fpu_val_7_1;
    long double fpu_val_7_3;

    if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_4 = *(context + 0x9c);
        long double fpu_val_6_2 = *(context + 0xa0);
        fpu_val_6_2 - fpu_val_7_4;

        if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_3 = *(context + 0xa0);
        else
            fpu_val_7_3 = *(context + 0x9c);
    }
    else
        fpu_val_7_3 = *(context + 0x98);

    float item_14_2 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_3;
    WorldObject_CommitTransform(Level_StartMission_4(), context, context + 0x188, item_14_2);
    int32_t data_5 = *(context + 0x120);
    int32_t temp_1 = *(context + 0x128);
    *(context + 0x13c) = data_5;
    memcpy(context + 0x70, context + 0x160, 0x28);
    int32_t entity_1 = *(context + 0x124);
    *(context + 0x148) = data_5;
    int32_t* data_6 = *(context + 0x1a0);
    *(context + 0x140) = entity_1;
    *(context + 0x144) = temp_1;
    *(context + 0x14c) = entity_1;
    *(context + 0x150) = temp_1;
    *(context + 0x154) = 0;
    *(context + 0x158) = 0;
    *(context + 0x15c) = 0;

    if (data_6)
    {
        int32_t* data_7 = *data_6;

        if (data_7)
            QTask_FindType(data_7);

        Qtask_UpdateList(*(context + 0x1a0));
        *(context + 0x1a0) = 0;
    }

    struct status_msg* data_9 = SoundSys_SetMasterVolume_7(context, context + 0xf0);

    if (data_9)
        *(context + 0x1a0) = QTask_LinkEventHandler_2(data_9);

    Script_Isexists(context + 0x1ac, context);
    return 0;
}
