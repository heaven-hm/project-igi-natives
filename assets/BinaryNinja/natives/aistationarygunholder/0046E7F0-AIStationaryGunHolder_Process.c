// Original IGI.EXE function: AIStationaryGunHolder_Process (VA 0x0046E7F0; static CFG gate PASS, CFG score 0.976).
#include "AIStationaryGunHolder_Process.h"
char* AIStationaryGunHolder_Process(float context)

{
    DynObj_CreateMagicObject_5(context, DynObj_Missing(context + 0x25d8));
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

    float item_10_2 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_3;
    WorldObject_CommitTransform(Level_StartMission_4(), context, context + 0x2598, item_10_2);
    int32_t* data_5 = *(context + 0xe8);
    memcpy(context + 0x70, context + 0x25b0, 0x28);

    if (data_5)
        QTask_FindType(data_5);

    struct status_msg* data_6 = CarGun_Create(nullptr, context);
    *(context + 0xe8) = data_6;
    Car_GunCreate(data_6, context, context);
    int32_t* i = *(*(context + 0xe8) + 8);

    if (*i && i)
    {
        int32_t entity_1 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* data_11;

            if (!temp_1)
                data_11 = nullptr;
            else
            {
                int32_t data_8 = *temp_1;
                int32_t data_9 = -(data_8);
                data_11 = (data_9 - data_9) & temp_1;
            }

            *((entity_1 << 2) + &g_afa6e0) = data_11;
            g_afa7e0 = entity_1 + 1;
            uint32_t data_13 = Script_ParseEnumReal32_8();
            int32_t temp_2 = 0;
            temp_2 = i[7];
            int32_t data_14 = *(((data_13 * 0x180 + temp_2) << 2) + &g_a96ae0);

            if (data_14)
                data_14(i, 0);

            entity_1 = g_afa7e0 - 1;
            g_afa7e0 = entity_1;
            i = *((entity_1 << 2) + &g_afa6e0);
        } while (i);
    }

    Script_Isexists(context + 0x25f4, context);
    Script_Isexists(context + 0x2644, context);
    *(context + 0x130) = *(context + 0x25e8) * 0.0174532924f;
    *(context + 0x138) = *(context + 0x25ec) * 0.0174532924f;
    *(context + 0x140) = *(context + 0x25f0) * 4096.0f;
    return FX_DebrisSpawn_13(context + 0x168, 1, 4, AI_CombatTarget_22(), 4, 8);
}
