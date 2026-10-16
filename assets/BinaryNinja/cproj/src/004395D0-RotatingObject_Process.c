#include "gi_platform.h"
#include "004395D0-RotatingObject_Process.h"
int32_t RotatingObject_Process(float a1)

{
    memcpy(a1 + 0x160, a1 + 0x70, 0x28);
    DynObj_CreateMagicObject_5(a1, DynObj_Missing(a1 + 0x110));
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    long double fpu6 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    fpu6 - fpu7;
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    else
        x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

    long double x87_r6_1 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_2 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        else
            x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    }
    else
        x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

    float v_14_2 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_3;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, a1 + 0x188, v_14_2);
    int32_t valA5 = (*(int32_t*)(uintptr_t)(a1 + 0x120));
    int32_t tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 0x128));
    (*(int32_t*)(uintptr_t)(a1 + 0x13c)) = valA5;
    memcpy(a1 + 0x70, a1 + 0x160, 0x28);
    int32_t objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x124));
    (*(int32_t*)(uintptr_t)(a1 + 0x148)) = valA5;
    int32_t* valA6 = (*(int32_t*)(uintptr_t)(a1 + 0x1a0));
    (*(int32_t*)(uintptr_t)(a1 + 0x140)) = objC1;
    (*(int32_t*)(uintptr_t)(a1 + 0x144)) = tmpD1;
    (*(int32_t*)(uintptr_t)(a1 + 0x14c)) = objC1;
    (*(int32_t*)(uintptr_t)(a1 + 0x150)) = tmpD1;
    (*(int32_t*)(uintptr_t)(a1 + 0x154)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x158)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x15c)) = 0;

    if (valA6)
    {
        int32_t* valA7 = *valA6;

        if (valA7)
            QTask_FindType(valA7);

        Qtask_UpdateList((*(int32_t*)(uintptr_t)(a1 + 0x1a0)));
        (*(int32_t*)(uintptr_t)(a1 + 0x1a0)) = 0;
    }

    struct status_msg* valA9 = SoundSys_SetMasterVolume_7(a1, a1 + 0xf0);

    if (valA9)
        (*(int32_t*)(uintptr_t)(a1 + 0x1a0)) = QTask_LinkEventHandler_2(valA9);

    Script_Isexists(a1 + 0x1ac, a1);
    return 0;
}
