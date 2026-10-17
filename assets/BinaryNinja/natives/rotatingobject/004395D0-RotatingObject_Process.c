// Original IGI.EXE function: RotatingObject_Process (VA 0x004395D0; static CFG gate PASS, CFG score 0.944).
#include "RotatingObject_Process.h"
int32_t RotatingObject_Process(float a1)

{
    memcpy(a1 + 0x160, a1 + 0x70, 0x28);
    DynObj_CreateMagicObject_5(a1, DynObj_Missing(a1 + 0x110));
    long double fpu7 = *(a1 + 0x9c);
    long double fpu6 = *(a1 + 0xa0);
    fpu6 - fpu7;
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(a1 + 0xa0);
    else
        x87_r7_1 = *(a1 + 0x9c);

    long double x87_r6_1 = *(a1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(a1 + 0x9c);
        long double x87_r6_2 = *(a1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(a1 + 0xa0);
        else
            x87_r7_3 = *(a1 + 0x9c);
    }
    else
        x87_r7_3 = *(a1 + 0x98);

    float v_14_2 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_3;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, a1 + 0x188, v_14_2);
    int32_t valA5 = *(a1 + 0x120);
    int32_t tmpD1 = *(a1 + 0x128);
    *(a1 + 0x13c) = valA5;
    memcpy(a1 + 0x70, a1 + 0x160, 0x28);
    int32_t objC1 = *(a1 + 0x124);
    *(a1 + 0x148) = valA5;
    int32_t* valA6 = *(a1 + 0x1a0);
    *(a1 + 0x140) = objC1;
    *(a1 + 0x144) = tmpD1;
    *(a1 + 0x14c) = objC1;
    *(a1 + 0x150) = tmpD1;
    *(a1 + 0x154) = 0;
    *(a1 + 0x158) = 0;
    *(a1 + 0x15c) = 0;

    if (valA6)
    {
        int32_t* valA7 = *valA6;

        if (valA7)
            QTask_FindType(valA7);

        Qtask_UpdateList(*(a1 + 0x1a0));
        *(a1 + 0x1a0) = 0;
    }

    struct status_msg* valA9 = SoundSys_SetMasterVolume_7(a1, a1 + 0xf0);

    if (valA9)
        *(a1 + 0x1a0) = QTask_LinkEventHandler_2(valA9);

    Script_Isexists(a1 + 0x1ac, a1);
    return 0;
}
