#include "gi_platform.h"
#include "0046E7F0-AIStationaryGunHolder_Process.h"
char* AIStationaryGunHolder_Process(float a1)

{
    DynObj_CreateMagicObject_5(a1, DynObj_Missing(a1 + 0x25d8));
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

    float v_10_2 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_3;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, a1 + 0x2598, v_10_2);
    int32_t* valA5 = (*(int32_t*)(uintptr_t)(a1 + 0xe8));
    memcpy(a1 + 0x70, a1 + 0x25b0, 0x28);

    if (valA5)
        QTask_FindType(valA5);

    struct status_msg* valA6 = CarGun_Create(nullptr, a1);
    (*(int32_t*)(uintptr_t)(a1 + 0xe8)) = valA6;
    Car_GunCreate(valA6, a1, a1);
    int32_t* i = (*(int32_t*)(uintptr_t)(*(a1 + 0xe8) + 8));

    if (*i && i)
    {
        int32_t objC1 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* valA11;

            if (!tmpD1)
                valA11 = nullptr;
            else
            {
                int32_t valA8 = *tmpD1;
                int32_t valA9 = -(valA8);
                valA11 = (valA9 - valA9) & tmpD1;
            }

            *((objC1 << 2) + &g_afa6e0) = valA11;
            g_afa7e0 = objC1 + 1;
            uint32_t valA13 = Script_ParseEnumReal32_8();
            int32_t tmpD2 = 0;
            tmpD2 = i[7];
            int32_t valA14 = *(((valA13 * 0x180 + tmpD2) << 2) + &g_a96ae0);

            if (valA14)
                valA14(i, 0);

            objC1 = g_afa7e0 - 1;
            g_afa7e0 = objC1;
            i = *((objC1 << 2) + &g_afa6e0);
        } while (i);
    }

    Script_Isexists(a1 + 0x25f4, a1);
    Script_Isexists(a1 + 0x2644, a1);
    (*(int32_t*)(uintptr_t)(a1 + 0x130)) = (*(int32_t*)(uintptr_t)(a1 + 0x25e8)) * 0.0174532924.0f;
    (*(int32_t*)(uintptr_t)(a1 + 0x138)) = (*(int32_t*)(uintptr_t)(a1 + 0x25ec)) * 0.0174532924.0f;
    (*(int32_t*)(uintptr_t)(a1 + 0x140)) = (*(int32_t*)(uintptr_t)(a1 + 0x25f0)) * 4096.0f;
    return FX_DebrisSpawn_13(a1 + 0x168, 1, 4, AI_CombatTarget_22(), 4, 8);
}
